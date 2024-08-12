package PROJETOS.Banco;

import java.sql.SQLOutput;
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
            acao = Inteface.menu("criar conta", "entrar na conta", "buscar conta", "excluir conta", "listar contas", "listar usuários", "sair");

            switch (acao) {
                case 1:
                    b1.criarConta();
                    break;
                case 2:
                    Conta conta = b1.autenticar();

                    do {
                        acao = Inteface.menu("Sacar", "Depositar", "Sair");
                        switch (acao) {
                            case 1, 2:
                                System.out.println("Digite o valor: ");
                                double valor = scanner.nextDouble();
                                scanner.nextLine();

                                if (acao == 1) {
                                    conta.sacar(valor);
                                } else {
                                    conta.depositar(valor);
                                }
                                break;
                        }
                    } while (acao != 3);
                    break;
                case 3:
                    do {
                        acao = Inteface.menu("CPF", "Agencia e Conta");
                    } while (acao != 1 && acao != 2);

                    if (acao == 1) {
                        String cpf = b1.nextCPF();
                        b1.imprimirConta(b1.buscarConta(cpf));
                    } else {
                        String numeroAgencia = b1.nextAgencia();
                        String numeroConta = b1.nextConta();

                        b1.imprimirConta(b1.buscarConta(numeroConta, numeroAgencia));
                    }
                    break;
                case 4:
                    b1.removerConta();

                    break;
                case 5:
                    b1.listarContas();
                    break;
                case 6:
                    b1.listarUsuarios();
                    break;
            }
        } while (acao != 7);
    }
}