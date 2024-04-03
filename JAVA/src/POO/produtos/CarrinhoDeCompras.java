package POO.produtos;

import POO.produtos.Livro;
import POO.produtos.Produto;

import java.util.ArrayList;

public class CarrinhoDeCompras {
    ArrayList<Livro> livros = new ArrayList<>();
    private double total;

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
        total += produto.getValor();
    }

    public double getTotal() {
        return total;
    }
}
