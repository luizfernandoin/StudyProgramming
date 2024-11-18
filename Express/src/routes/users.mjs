import { Router } from "express";
import { filterUserValidationSchema, createUserValidationSchema } from "../utils/validationSchemas.mjs";
import { users } from "../utils/constants.mjs";
import { checkSchema, validationResult } from "express-validator";
import { resolveIndexByUserId } from "../utils/middlewares.mjs";

const router = Router();

// strings de consulta (query parameters) localhos:3000/api/users?filter=username&value=a
router.get('/api/users', checkSchema(filterUserValidationSchema), (request, response) => {
    const result = validationResult(request);
    console.log(result);

    const { query: { filter, value } } = request;
    
    if (filter && value) return response.send(
        users.filter((user) => user[filter].includes(value))
    );
    
    return response.send(users);
})

// POST: dados são enviados no corpo da solicitação
router.post('/api/users', checkSchema(createUserValidationSchema), (request, response) => {
    const result = validationResult(request);
    console.log(result);

    if (!result.isEmpty()) return response.status(400).send({ errors: result.array() });

    const { body } = request;
    const newUser = { id: users[users.length - 1].id + 1, ...body}
    users.push(newUser);

    return response.status(201).send(newUser);
})

router.get('/api/users/:id', (request, response) => {
    const user = users.find(user => user.id === parseInt(request.params.id));

    user ? response.send(user) : response.status(400).send('Bad Request');
})

router.put('/api/users/:id', resolveIndexByUserId, (request, response) => {
    const { body, findUserIndex } = request;
    users[findUserIndex] = { id: users[findUserIndex].id, ...body };

    return response.sendStatus(200)
})

router.patch('/api/users/:id', resolveIndexByUserId, (request, response) => {
    const { body, findUserIndex } = request;
    
    users[findUserIndex] = { ...users[findUserIndex], ...body };

    return response.sendStatus(200);
})

router.delete('/api/users/:id', (request, response) => {
    const { findUserIndex } = request;

    users.splice(findUserIndex, 1);

    return response.sendStatus(200);
})


export default router;