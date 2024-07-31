# Interface
> Interface basicamente é um contrato de regras. Quando você desejar que uma entidade atenda a uma regra, utilizamos interface.

- Busque utilizar interface em vez de herança
- Sem modificadores de acesso
- nomeclatura `I<nome da interface>`

## Interface X Herança

Herança é muito utilizada quando temos realações hierarquicas entre as entidade e não precisamos de realizar uma mudança radical no comportamento dos métodos.

Já na interface, a implementação ocorre nas classes implementadoras (mudança radical).

Além disso, podemos implementar várias interfaces, mas herdar de apenas uma classe.
