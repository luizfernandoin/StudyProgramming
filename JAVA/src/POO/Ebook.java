package POO;

//Basicamente estou indicando ao compilador que a classe Ebook é derivada de Livro, é um tipo
// de livro, possui tudo que livro tem, mas com estados e comportamentos próprios.
public class Ebook extends Livro {
    private String waterMark;

    public Ebook(Autor autor) {
        /*

        As classes só podem herdar de uma unica classe pai, não existe multiplas heranças.
        -> Mas você pode encadear as heranças (uma prática não muito boa);

        */
        super(autor);
    }

    @Override
    public boolean aplicaDescontoDe(double porcentagem) {
        if (porcentagem > 0.15) {
            return false;
        }

        this.valor -= this.valor * porcentagem;
        return true;
    }

    /*
    @Override
    public boolean aplicaDescontoDe(double porcentagem) {
        if (porcentagem > 0.15) {
            return false;
        }

        double desconto = this.getValor() * porcentagem;
        this.setValor(this.getValor() - desconto);

        // OBS: ao inves de this poderia usar o super para indicar que o método é da classe pai
        // super.aplicaDescontoDe(porcentagem);

        return true;
    }

    Essa é uma forma de não utilizar o protected. Basicamente usa-se os métodos para buscar
    e alterar o atributo.
    */


    public void setWaterMark(String waterMark) {
        this.waterMark = waterMark;
    }

    public String getWaterMark() {
        return waterMark;
    }
}
