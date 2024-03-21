package Conditionals;

import java.util.Scanner;

public class conditionals {
    public static void main(String[] args) {
        /*
        Basicamente o fluxo de execução do programa muda de acordo com condições.
        */
        Scanner scanner = new Scanner(System.in);
        System.out.println("Idade: ");
        int idade = scanner.nextInt();

        if (idade < 18) {
            System.out.println("Você é menor de idade.");
        } else if (idade > 18 && idade < 65) {
            System.out.println("Você é adulto.");
        } else {
            System.out.println("Você é idoso");
        }

        System.out.print("Informe uma opcão no intervalo [0, 3]: ");
        int opcao = scanner.nextInt();
        switch (opcao) {
            case 0:
                System.out.println("0");
                break;
            case 1:
                System.out.println("1");
                break;
            case 2:
                System.out.println("2");
                break;
            case 3:
                System.out.println("3");
                break;
        }


        // Operador Ternário
        int x = (int)(Math.random() * 100);
        String msg = x > 50 ? "Maior" : "Menor";
        System.out.printf("%d: %s", x, msg);
    }
}
