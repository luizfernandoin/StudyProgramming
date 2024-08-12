# Estudos Prova POO

---

## Classe
> É um prototipo (representação) do objeto real. Possui métodos para armazenar suas características e métodos para o estado e comportamento do objeto.
> 

```java
public class ObjetoReal {
    // atributos - características do objeto
    // metodos - estado e comportamento do objeto
}
```


## Objeto
> É a entidade em si, possui estado e comportamentos. Ou seja, são instâncias da classe criada.

```java
ObjetoReal objeto = new ObjetoReal();
```

## Modificadores de Acesso
> Forma de atribuirmos visibilidade / acessibilidade a classes, interfaces, atributos, métodos, construtores...

1. **Default:** visibilidade no pacote.
2. **Private:** visibilidade de classe
3. **Protected** visibilidade de pacote ou subclasse
4. **Public:** visibilidade geral.

## Herança
> Forma de reaproveiramento de código através da semelhande de classes. Dessa forma, temos uma classe generica (classe mãe ou superclasse) que possui métodos e atributos comuns a todas as classes filhas (subclasses).

```java
public class Animal {
    protected String nome;
}

public class Gato extends Animal {
    public Gato(String nome) {
        super(nome);
    }
}
```

## Classe Abstrata
> São classes que representam entidades genericas, que não existem na prática. Por exemplo, não existe Animal (abstrato) e sim cachorro, gato...
 
- Idealizam tipo, não podem ser instanciadas.
- Métodos abstratos não possuem escopo e devem ser sobrescritos

```java
public abstract class Animal {
    public abstract void eat();    
} 
```

## Encapsulamento
> Forma de esconder os artefatos da minha entidade (atributos, métodos) através da modificadores de acesso.

```java
public class Pessoa {
    private String nome;
    private String cpf;
    
    public Pessoa(String nome, String cpf) {
        this.nome = nome;
        this.cpf = cpf;
    }
}
```

## Polimorfismo
> Através da herança, o polimorfismo é uma forma de possibilitar flexibilidade as entidades utilizando sobrescrita de métodos.

Existem quatro tipos de polimorfismo suportados pelo Java:
- **Sobtyping:** Diferentes implementações de método da superclasse nas subclasses;
- **Ad-hoc Polymorphism (Overloading):** Diferentes métodos iguais, mas com quantidade de argumentos diferentes;
- **Ad-hoc Polymorphism (Coercion polymorphism):** Conversão de um tipo primitivo em outro de forma implicita (== ou ===) ou explicita(`a = (int) 10.5`)
- **Parametric Polymorphism:** Função ou tipo de dado encrito genericamente para conseguir lidar com diferentes tipos de valores.

```java
public class Pessoa {
    public void listarDados(String nome) {
        System.out.println(nome);
    }
    
    public void listarDados(String nome, String cpf) {
        System.out.println(nome);
        System.out.println(cpf);
    }
}
```