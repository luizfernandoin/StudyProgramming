package POO.produtos;

import POO.produtos.Livro;
import POO.produtos.Produto;

import java.util.ArrayList;

public class CarrinhoDeCompras {
    ArrayList<Livro> livros = new ArrayList<>();
    private double total;
    private Produto[] produtos = new Produto[10];
    private int contador = 0;

    /*
    ArrayList<LivroFisico> livrosFisicos = new ArrayList<>();
    ArrayList<Ebook> ebooks = new ArrayList<>();
    public void adiciona(LivroFisico livroFisico) {
        livrosFisicos.add(livroFisico);
        System.out.printf("Livro \"%s\" adicionado com sucesso!", livroFisico.getTitulo());
    }

    public void adiciona(Ebook ebook) {
        ebooks.add(ebook);
        System.out.printf("Ebook \"%s\" adicionado com sucesso!", ebook.getTitulo());
    }
    */

    // Para evitar a repetição de métodos para cada novo tipo de livro, podemos utilizar
    // polimorfismo:

    public void adiciona(Produto produto) {
        System.out.println("Adicionando: " + produto);
        if (!carrinhoEstaCheio()) {
            this.produtos[this.contador] = produto;
        }

        total += produto.getValor();
        setContador();
    }

    private boolean carrinhoEstaCheio() {
        if (contador > 9) return true;

        return false;
    }

    public Produto[] getProdutos() {
        return produtos;
    }

    public double getTotal() {
        return total;
    }

    public void setContador() {
        this.contador++;
    }
}
