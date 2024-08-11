package PROJETOS.Banco;

import java.util.Scanner;

class Inteface {
    public static int menu(String... options) {
        Scanner scanner = new Scanner(System.in);

        for (int i = 0; i < options.length; i++) {
            System.out.printf("[%d] %s%n", i, options[i]);
        }

        System.out.println("Escolha a operação: ");
        int operacao = scanner.nextInt();

        return operacao;
    }
}

public class Main {
    public static void main(String[] args) {
        Banco b1 = new Banco();
        Scanner scanner = new Scanner(System.in);

        int acao = Inteface.menu("criar conta", "buscar conta", "excluir conta", "listar contas", "listar usuários");

        switch (acao) {
            case 1:
                b1.criarConta();
                break;
            case 2:
                acao = Inteface.menu("CPF", "Agencia e Conta");
                do {
                    acao = Inteface.menu("CPF", "Agencia e Conta");
                } while (acao != 1 && acao != 2);

                if (acao == 1) {
                    String cpf = scanner.nextLine();
                    b1.buscarConta(cpf);
                } else {


                    b1.buscarConta()
                }
                b1.buscarConta();
        }
    }
}