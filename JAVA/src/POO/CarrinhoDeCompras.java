package POO;

import java.sql.Struct;
import java.util.ArrayList;

public class CarrinhoDeCompras {
    ArrayList<Livro> livros = new ArrayList<>();

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

    public void adiciona(Livro livro) {
        livros.add(livro);
        System.out.printf("Livro \"%s\" adicionado com sucesso!\n", livro.getTitulo());
    }

    public double valorTotalCompras() {
        double totalCompras = 0;
        for (int c = 0; c < livros.size(); c++) {
            totalCompras += livros.get(c).getValor();
        }

        return totalCompras;
    }
}
