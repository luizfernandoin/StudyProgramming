package POO;

public class Main {
    public static void main(String[] args) {
        Livro livro1 = new Livro();
        Livro livro2 = new Livro();

        Autor autor = new Autor();
        autor.setNome("Luiz Fernando");
        autor.setEmail("luizfernandoinfo100@gmail.com");
        autor.setCpf("111.111.111-11");

        Autor autor1 = new Autor();
        autor1.setNome("Luiz Fernando");
        autor1.setEmail("luizfernandoinfo100@gmail.com");
        autor1.setCpf("111.111.111-11");


        livro1.setTitulo("Titulo1");
        livro1.setDescricao("Descrição1");
        livro1.setNumPaginas(1);
        livro1.setValor(01.01);
        livro1.setIsbn("1");
        livro1.autor = autor;

        livro2.setTitulo("Titulo2");
        livro2.setDescricao("Descrição2");
        livro2.setNumPaginas(2);
        livro2.setValor(02.02);
        livro2.setIsbn("2");
        livro1.aplicaDescontoDe(0.1);

        Livro[] livros = {livro1, livro2};

        for (Livro livro: livros) {
            livro.mostrarDados();
        }

        if (autor == autor1) {
            System.out.println("Iguais, mesmo autor!");
        } else {
            System.out.println("An? Por que diferentes?");

        // Basicamente, quando utilizamos new, a variável armazena uma referência para
        // o dado em mémoria. Diferentemente dos tipos primitivos, onde armazenam uma
        // cópia dos dados.
        }

        if (!livro1.aplicaDescontoDe(0.3)) {
            //livro1.valor -= livro1.valor * 0.4; -> com o encapsulamento, o atributo private
            // está visivel apenas para a classe.
            System.out.println("Não é possível aplicar desconto maior que 30%");
            //System.out.println("Valor final: " + livro1.valor);
        } else {
            System.out.println("Valor com desconto: " + livro1.retornaValor());
        }

    }
}