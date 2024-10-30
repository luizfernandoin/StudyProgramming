const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

numbers.forEach(x => {
    console.log(x);
})

numbers.forEach((value, index, array) => {
    console.log(`${array.toString}[${index}] = ${value}`)
})

numbers.forEach(imprimirItemArray);

function imprimirItemArray(item, index, array) {
    console.log(`numbers[${index}] = ${item}`);
};