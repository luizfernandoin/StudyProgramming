package POO.produtos;

//Estou falando que essa classe não representa um objeto em sim, mas uma abstração que
//contem todas as informações que outros devem herdar.

import POO.livraria.Autor;
import POO.produtos.Produto;

// OBS: NÃO SERÁ POSSÍVEL INSTANCIAR LIVRO!
public abstract class Livro implements Produto {
    // -> implements assina o contrato da classe com o produto, ou seja, a interface livro
    // idealiza um produto.
    private String titulo;
    private String descricao;
    private String isbn;
    private int numPaginas;
    /*
    Encapsulamento -> esconder todos os atributos de suas classes e esconder seus
    comportamentos em métodos.

    O QUE O CÓDIGO FAZ?
    COMO É FEITO?

    O encapsulamento deixa nosso código muito mais passivel a mudanças
     */
    protected double valor; //visibilidade média entre public e private. Deixa visivel
    // também para as classes filhas.
    Autor autor;

    /*
    Construtor é um método invocado quando o objeto é instanciado. Ele possui o mesmo nome
    da classe e não tem retorno declarado.

    Obs: se você não criar o compilador resolvera esse problema automaticamente.

    Uma classe pode ter mais de um construtor (overloaded), mas sem a mesma quantidade de
    parametros.
    */
    public Livro(Autor autor) {
        this(); // encadeamento de construtores;
        this.autor = autor;
    }

    public Livro() {
        this.isbn = "000-00-00000-00-0"; // forma de atribuir valor default a atributo.
        System.out.println("Novo livro criado!");
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public String getIsbn() {
        return isbn;
    }

    public void setIsbn(String isbn) {
        this.isbn = isbn;
    }

    public int getNumPaginas() {
        return numPaginas;
    }

    public void setNumPaginas(int numPaginas) {
        this.numPaginas = numPaginas;
    }

    public double getValor() {
        return valor;
    }

    public Autor getAutor() {
        return autor;
    }

    public void setAutor(Autor autor) {
        this.autor = autor;
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

//    public boolean aplicaDescontoDe(double porcentagem) {
//        return false;
//    }

    //public abstract boolean aplicaDescontoDe(double porcentagem);
    //Todos os métodos abstratos devem ser reescritos pelas subclasses.

    public void setValor(double valor) {
        this.valor = valor;
    }

    public double retornaValor() {
        return valor;
    }

    boolean temAutor() {
        return this.autor != null;
    }
}