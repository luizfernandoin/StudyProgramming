package Abstração;

abstract class Animal {
    String nome = "Gigante";
    public abstract void eat();
}

class Dog extends Animal{
    @Override
    public void eat() {
        System.out.println("Comendo...");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.eat();
        System.out.println(dog.nome);
    }
}
