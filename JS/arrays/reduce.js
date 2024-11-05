// Reduz os elementos de um array a um único valor;

const produtos = [
    { nome: 'Camisa', preco: 50 },
    { nome: 'Calça', preco: 100 },
    { nome: 'Cinto', preco: 20 },
];

let soma = produtos.reduce((previous, next) => previous + next.preco, 0);

console.log(soma)


const numbers = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
const total = produtos.reduce(somarNumeros, 0);

function somarNumeros(previous, next) {
    return previous + next.preco;
};

console.log(total);