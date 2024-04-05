package POO.teste;

import POO.produtos.CarrinhoDeCompras;
import POO.livraria.Autor;
import POO.produtos.Ebook;
import POO.produtos.LivroFisico;
import POO.produtos.Produto;

import java.io.FileNotFoundException;

public class RegistroDeVendas {
    public static void main(String[] args) {
        Autor autor = new Autor();
        autor.setNome("Luiz Fernando");
        autor.setEmail("luiz-nascimento.ln@academico.ifpb.edu.br");
        autor.setCpf("222.222.222-22");

        LivroFisico livroFisico = new LivroFisico(autor);
        livroFisico.setTitulo("Livro Físico");
        livroFisico.setValor(100);

        if (livroFisico.aplicaDescontoDe10Porcento()) {
            System.out.println("Valor agora é " + livroFisico.getValor());
        }

        Ebook ebook = new Ebook(autor);
        ebook.setTitulo("Ebook");
        ebook.setValor(14);

        CarrinhoDeCompras carrinho = new CarrinhoDeCompras();
        carrinho.adiciona(livroFisico);
        carrinho.adiciona(ebook);

        Produto[] produtos = carrinho.getProdutos();
        System.out.println(produtos.length);
        for (int i = 0; i <= 10; i++) {
            try {
                Produto produto = produtos[i];
                if (produto != null) {
                    System.out.println(produto.getValor());
                }
            } catch (Exception e) {
                System.out.println("deu exception no indice " + i);
                //e.printStackTrace();
            }

            /* é possível fazer multicatch utilizando a sintaxe

            try {
                Produto produto = produtos[i];
                if (produto != null) {
                    System.out.println(produto.getValor());
                }
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("deu exception no indice " + i);
                e.printStackTrace();
            } catch (NullPointerException e) {
                //
            }

            catch (ArrayIndexOutOfBoundsException | NullPointerException e) {
                sout("uma das duas");
            }

            -> em alguns momentos precisamos executar ações independentemente se uma
            exception ocorreu. Utilizamos o finally.

            -> Utilizado muito em conexões com bancos ou trabalho com arquivos.

            */
        }

        try {
            new java.io.FileInputStream("arquivo.txt");
        } catch (FileNotFoundException ei) {
            System.out.println("Não consegui abrir o arquivo");
        }

        /*

        O FileNotFoundException pode ser tratado com o throws que basicamente diz:
        "ei, esse é um código de risco. Pode lançar um FileNotFoundException."

        -> deve ser tratado por quem chamar.

        public void abrirArquivo() throws FileNotFoundException {
            new java.io.FileInputStream("arquivo.txt");
        }

        public static void main(String[] args) {
            try {
                abrirArquivo();
            } catch(FileNotFoundException e1) {
                System.out.println("Não consegui abrir o arquivo.");
            }
        }

        */

        System.out.println(carrinho.getTotal());
    }
}
