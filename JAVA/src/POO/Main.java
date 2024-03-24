package POO;

public class Main {
    public static void main(String[] args) {
        Livro livro1 = new Livro();
        Livro livro2 = new Livro();

        Autor autor = new Autor();
        autor.nome = "Luiz Fernando";
        autor.email = "luizfernandoinfo100@gmail.com";
        autor.cpf = "111.111.111-11";

        Autor autor1 = new Autor();
        autor1.nome = "Luiz Fernando";
        autor1.email = "luizfernandoinfo100@gmail.com";
        autor1.cpf = "111.111.111-11";


        livro1.titulo = "Titulo1";
        livro1.descricao = "Descrição1";
        livro1.numPaginas = 1;
        livro1.valor = 01.01;
        livro1.isbn = "1";
        livro1.autor = autor;

        livro2.titulo = "Titulo2";
        livro2.descricao = "Descrição2";
        livro2.numPaginas = 2;
        livro2.valor = 02.02;
        livro2.isbn = "2";
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
    }
}