package POO;

public class RegistroDeVendas {
    public static void main(String[] args) {
        Autor autor = new Autor();
        autor.setNome("Luiz Fernando");
        autor.setEmail("luiz-nascimento.ln@academico.ifpb.edu.br");
        autor.setCpf("222.222.222-22");

        LivroFisico livroFisico = new LivroFisico(autor);
        livroFisico.setTitulo("Livro Físico");
        livroFisico.setValor(100);

        Ebook ebook = new Ebook(autor);
        ebook.setTitulo("Ebook");
        ebook.setValor(14);

        CarrinhoDeCompras carrinho = new CarrinhoDeCompras();
        carrinho.adiciona(livroFisico);
        carrinho.adiciona(ebook);

        System.out.println(carrinho.valorTotalCompras());
    }
}
