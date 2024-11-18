import express from 'express';

import { users } from './utils/constants.mjs';
import routes from './routes/index.mjs';

const app = express();

/* Middleware
Basicamente é uma função que será executada antes do response para o cliente.

Quando fazemos um request o middleware intercepta para realizar alguma função antes de passar o controle para outro middleware ou rota;
*/
app.use(express.json())
app.use(routes);


const PORT = process.env.PORT || 3000;

app.listen(PORT, () => {
    console.log('Iniciando servidor na porta ' + PORT)
});


app.get('/', (requests, response) => {
    response.cookie("Hello", "World", { maxAge: 60000 })
    response.status(201).send({ msg: "Hello" });
});