package POO.produtos;

import POO.livraria.Autor;
import POO.produtos.Livro;

public class MiniLivro extends Livro {
    public MiniLivro(Autor autor) {
        super(autor);
    }

    public boolean aplicaDescontoDe(double porcentagem) {
        return false;
    }
}
