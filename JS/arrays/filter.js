// Filtrar os elementos com base em uma condição e colocalos em um novo array

const numbers = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
let numbersPares = numbers.filter(isPar);
let numbersImpares = numbers.filter(isImpar);

console.log(numbersPares);
console.log(numbersImpares);

function isPar(element) {
    return element % 2 === 0;
}

function isImpar(element) {
    return element % 2 !== 0;
}


const idades = [15, 16, 17, 18, 19, 20, 21, 22, 23]
let idadesAdultos = idades.filter(isAdulto);

console.log(idadesAdultos);

function isAdulto(element) {
    return element >= 18;
}


const produtos = [
    { nome: 'Camisa', preco: 50 },
    { nome: 'Calça', preco: 100 },
    { nome: 'Cinto', preco: 20 },
];

const caros = produtos.filter(produto => produto.preco > 30);
console.log(caros)