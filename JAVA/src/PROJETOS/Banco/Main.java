package PROJETOS.Banco;

import java.util.Scanner;

class Inteface {
    public static int menu(String... options) {
        Scanner scanner = new Scanner(System.in);

        for (int i = 0; i < options.length; i++) {
            System.out.printf("[%d] %s%n", i+1, options[i]);
        }

        System.out.print("Escolha a operação: ");
        int operacao = scanner.nextInt();
        scanner.nextLine();

        return operacao;
    }
}

public class Main {
    public static void main(String[] args) {
        Banco b1 = new Banco();
        Scanner scanner = new Scanner(System.in);


        int acao;
        do {
            acao = Inteface.menu("criar conta", "buscar conta", "excluir conta", "listar contas", "listar usuários", "sair");

            switch (acao) {
                case 1:
                    b1.criarConta();
                    break;
                case 2:
                    do {
                        acao = Inteface.menu("CPF", "Agencia e Conta");
                    } while (acao != 1 && acao != 2);

                    if (acao == 1) {
                        String cpf = b1.nextCPF();
                        b1.buscarConta(cpf);
                    } else {
                        String numeroAgencia = b1.nextAgencia();
                        String numeroConta = b1.nextConta();

                        b1.buscarConta(numeroConta, numeroAgencia);
                    }
                    break;
                case 3:
                    b1.removerConta();

                    break;
                case 4:
                    b1.listarContas();
                    break;
                case 5:
                    b1.listarUsuarios();
                    break;
            }
        } while (acao != 6);
    }
}