class Animal {

    constructor(nome) {
        this.nome = nome;
    }

    get name() {
        return this.getName();
    }
    
    getName() {
        return this.name;
    }
}

const a1 = new Animal('Friedriech');