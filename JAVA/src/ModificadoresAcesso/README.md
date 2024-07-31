# Modificadores de Acesso

Os componentes da aplicação podem ser definidos de diferentes formas dependendo do objetivo de acessibilidade

## Default
> As declarações são visiveis apenas dentro do pacote.

## Private
> Visibilidade de classe.

~~~java
    class Private {
        private String nome;
    }
    
    public class main(String[] args) {
        Private p1 = new Private();
        p1.nome = "Luiz"; //Erro!
    }
~~~

## Protected
> Visibilidade de pacote ou subclasse (herança)

~~~java
class Funcionario {
    protected void login(String matricula, String password) {
        //autenticação
    }
}

public class Gerente extends Funcionario {
    Funcionario f1 = new Funcionario(); // Funcional (subclasse)
    f1.login("123", "123");
}
~~~

## Public
> Sem restrições de escopo (visivel em todo projeto)