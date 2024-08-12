package Collections.exercicios;

import java.util.ArrayList;
import java.util.Scanner;

public class MegaSena {
    public static void main(String[] args) {
        ArrayList<Integer> numeros = new ArrayList<Integer>();
        Scanner scanner = new Scanner(System.in);
        pegarNumeros(numeros, scanner);
        listaNumeros(numeros);
    }

    public static void pegarNumeros(ArrayList<Integer> numeros, Scanner scanner) {
        boolean opcao = true;
        do {
            System.out.printf("%dº número: ", numeros.size() + 1);
            int num = scanner.nextInt();

            adicionarNumero(numeros, num);

            if (numeros.size() >= 6) {
                System.out.println("Deseja continuar? ");
                opcao = scanner.nextBoolean();
            }
        } while (opcao == true);
    }

    public static boolean adicionarNumero(ArrayList<Integer> numeros, int num) {
        boolean contem = false;
        for (int numero: numeros) {
            if (num == numero) contem = true;
        }

        if (contem == false) {
            numeros.add(num);
        }

        return contem;
    }

    public static void listaNumeros(ArrayList<Integer> numeros) {
        for (int i = 0; i < numeros.size(); i++) {
            if (i == 0) {
                System.out.print("[");
            }

            System.out.print(numeros.get(i) + "; ");

            if (i == numeros.size() - 1) {
                System.out.print("]");
            }
        }
    }
}
