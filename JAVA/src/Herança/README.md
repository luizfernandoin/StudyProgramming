# Herança

> Forma de reaproveitar classes semelhantes para diminuir a duplicação de código.
> Os componentes genericos ficam na **classe mãe** e as entidades específicas (filhos) herdam tudo da mãe (atributos, métodos).

- Palavra chave `extends`.

Podemos reescrever métodos da superclasse para se adaptarem a uma situação na subclasse.
```java
class Funcionario {
    public void calculaBonificacao() {
        //
    }
}

public class Gerente {
    @Override
    public void calculaBonificacao() {
        //
    }
}
```