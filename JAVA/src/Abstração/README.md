# Abstração

## Classes Abstratas
> São classes que idealizam tipo, mas que não pode ser instanciada. Por exemplo, não existe Animal, existe cachorro, gato (tipos de animais).
- utilizamos a palavra `abstract`.
- ideal para _herança_ e _polimorfismo_. 

```java
public abstract class Animal {
    // não pode ser instanciada (Animal a1 = new Animal();)
}

public class Cachorro extends Animal {
    
}
```

## Métodos Abstratos

> Força as subclasses implementarem o método abstrato da superclasse.
```java
public abstract class Animal {
    // não pode ser instanciada (Animal a1 = new Animal();)
    public abstract void eat() {
        
    }
}
```

