package InputAndOutput;

import java.util.Scanner;

public class inputAndOutput {
    public static void main(String[] args) {
        /*
        Para saída de dados, ou seja, imprimir algo na tela, usamos a biblioteca System que
        mostra uma saída na saída padrão (tela).

        java.lang.System -> Facilita o ambiente de desenvolvimento, fornecendo propriedades
         do sistema e I/O de dados.

        Possui três variáveis/objetos: err, In e out.

        - err → saída de mensagens de erro.
        - In → entrada padrão de dados
        - out → saída de mensagens normais.
        */

        System.out.println("System.out.println()"); //Imprime e quebra a linha (\n)
        System.out.print("System.out.print()"); //Somente imprime

        String saida = new String("System.out.printf()");
        System.out.printf("\n%s", saida); //Saída formatada, semelhante ao printf do C.
    }
}
