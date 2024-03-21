package Loop;

import java.util.Arrays;

public class loop {
    public static void main(String[] args) {
        // Usados quando desejamos repetir determinado bloco de código várias vezes.

        // Se souber quantas interações irão ocorrer:
        for (int c = 0; c < 10; c++) {
            System.out.println(c);
        }

        // Se quiser interar sobre arrays:
        int[] idades = {1, 2, 3, 4, 5, 6, 7, 8, 9};

        for (int idade: idades) {
            System.out.println("\n" + idade);
        }

        // Enquanto uma condição for verdadeira:
        int cont = 0;
        while (cont < 10) {
            System.out.println(cont);
            cont++;
        }


        // Executa o bloco "do" pelo menos uma vez e repete até a condição do while for
        // verdadeira.

        cont = 0;
        do {
            System.out.println("Luiz é bonitão");
            cont++;
        } while (cont < 10);
    }
}
