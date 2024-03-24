package POO;

public class Livro {
    String titulo;
    String descricao;
    String isbn;
    int numPaginas;
    double valor;
    Autor autor;



    /*
    tipoDeRetorno nomeDoComportamento() {
        //codigo que será executado.
    }
    */
    void mostrarDados() {
        System.out.println("Título: " + titulo);
        System.out.println("Descrição: " + descricao);
        System.out.println("ISBN: " + isbn);
        System.out.println("Número de Páginas: " + numPaginas);
        System.out.println("Valor: " + valor);

        if (this.temAutor()) {
            autor.mostrarDados();
        }
    }

    public void aplicaDescontoDe(double porcentagem) {
        valor -= valor * porcentagem;
    }

    boolean temAutor() {
        return this.autor != null;
    }
}
