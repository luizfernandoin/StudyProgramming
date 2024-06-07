# Exceptions in Java

---

Problemas que ocorrem no código e desvião o fluxo original do software.

## Stacktrace

Nos mostra detalhes do problema que ocorreu, nos ajudando a compreender e resolve-los.

```java
Exception in
thread "main"
java.lang.ArrayIndexOutOfBoundsException:10
at br.com.casadocodigo.livraria.testes
        .registroDeVendas.main(RegistroDeVendas.java:38)
```
- Nome do problema
- Posição do array que ocorreu o erro.
- Nome da classe em que a exception aconteceu.
- Linha

### Tratando Exceptions

Para evitar que o software encerre quando ocorrer uma excessão e a stacktrace seja exibida, podemos utilizar o recurso `try / catch`.

```java
Produto[] produtos = carrinho.getProdutos();
for (int i = 0; i < produtos.length; i++) {
    try{
        Produto produto = produtos[i];
        if(produto !=null){
            System.out.println(produto.getValor());
        }
    } catch (ArrayIndexOutOfBoundsException e) {
        System.out.println("deu exception no indice: " + i);    
    }
}
```

Dessa forma, o programa não sera interrompido nem o stacktrace da excessão mostrará.

Basicamente, o software tentará executar o `try` e caso resulte no erro explicitado no `catch` será executado o algoritmo que desejar.

## exceptions são filhas de Exception

Exception é um objeto e uma superclasse, ou seja, ela é polimórfica, podendo ter diferentes excessões, como: 
- ArrayIndexOutOfBoundsException
- NullPointerException

Assim, para tratar exceptions genericos podemos fazer simplesmente: 
```java
try {
    // bloco de código
} catch (Exception e) {
    // tratamento
}
```

### Checked vs Unchecked

#### Checked
Essas excessões o programa é obrigado a tratar, seja com um `try-catch` ou `throws` - destino a exception para outro local.
- Você sabe que o erro pode ocorrer e já sabe como corrigi-lo.

#### Unchecked
Aqui eu não sou obrigado a tratar a exception 

- O erro ocorreu e pronto, o que resta é informar ao usuário que ocorreu algo inesperado.
- A solução é reiniciar o processo, senão nada pode-se fazer.

Ex.: `NullPointerException`.

Essas excessões são filhas do `RuntimeException`, visto que ocorrem em tempo de execussão (runtime).
#### Mas quando usar cada uma?
Basicamente, se a excessão for recuperavel usa-se o `checked` exception, caso contrário, `Unchecked`.

## Multicatch do JAVA 7

Podemos querer testar multiplos exceptions e gerar o mesmo tratamento: 
```java
try {
    // bloco de teste    
} catch (ArrayIndexOutOfBoundsException | NullPointerException e) {
    // tratamento
}
```

## Finally

Palavra-chave utilizada em situações que independentemente de ocorrer uma excessão, executarmos uma ação:

```java
try {
    // bloco de teste
} catch (Exception e) {
    // tratamento de excessão
} finally {
    // ação padrão    
}
```

- Muito utilizada em conexões de bancos e operações com arquivos.