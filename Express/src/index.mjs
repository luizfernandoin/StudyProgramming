import express, { response } from 'express';

const app = express();
const PORT = process.env.PORT || 3000;

app.listen(PORT, () => {
    console.log('Iniciando servidor na porta ' + PORT)
});

const users = [
    {id: 1, username: 'luizfernandoin', idade: 20},
    {id: 2, username: 'marie', idade: 22},
    {id: 3, username: 'antoe', idade: 19}
];


app.get('/', (requests, response) => {
    response.send('Hello');
})

app.get('/api/users/:id', (request, response) => {
    const user = users.find(user => user.id === parseInt(request.params.id));

    user ? response.send(user) : response.status(400).send('Bad Request');
})