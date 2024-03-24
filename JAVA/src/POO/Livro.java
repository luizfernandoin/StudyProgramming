package POO;

public class Livro {
    String titulo;
    String descricao;
    String isbn;
    int numPaginas;
    double valor;
    Autor autor;

    /*
    Construtor é um método invocado quando o objeto é instanciado. Ele possui o mesmo nome
    da classe e não tem retorno declarado.

    Obs: se você não criar o compilador resolvera esse problema automaticamente.
    */
    public Livro() {
        System.out.println("Novo livro criado!");
    }


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

    public boolean aplicaDescontoDe(double porcentagem) {
        if (porcentagem > 0.3) {
            return false;
        }

        this.valor -= this.valor * porcentagem;
        return true;
    }

    boolean temAutor() {
        return this.autor != null;
    }
}
