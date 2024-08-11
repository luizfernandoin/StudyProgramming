package PROJETOS.Banco;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
import java.util.concurrent.atomic.AtomicInteger;

public class Banco {
    ArrayList<Conta> contas;
    ArrayList<Usuario> usuarios = new ArrayList<>();
    private final AtomicInteger numeroAgencia;

    public Banco() {
        contas = new ArrayList<>();
        this.numeroAgencia = new AtomicInteger(1);
    }

    public int gerarNumeroIntervalo(int min, int max) {
        Random rand = new Random();

        return rand.nextInt(max - min + 1) + min;
    }

    public String gerarAgencia() {
        return String.format("%04d", numeroAgencia.getAndIncrement());
    }

    public String gerarConta() {
        return String.format("%04d%04d - %d",
                gerarNumeroIntervalo(1000, 9999),
                numeroAgencia.get(),
                gerarDigitoVerificador());
    }

    public int gerarDigitoVerificador() {
        return gerarNumeroIntervalo(0, 9);
    }

    public Usuario criarUsuario() {
        Scanner scanner = new Scanner(System.in);
        DataUtils dataUtils = new DataUtils();


        System.out.print("Nome: ");
        String nome = scanner.nextLine();

        System.out.print("CPF: ");
        String cpf = scanner.nextLine();

        System.out.print("Password: ");
        int password = scanner.nextInt();
        scanner.nextLine();

        Optional<Date> dataNascimento;

        do {
            System.out.print("Data de nascimento (dd/MM/yyyy): ");
            String textoData = scanner.nextLine();
            dataNascimento = dataUtils.verificarTextoData(textoData);
            if (!dataNascimento.isPresent()) {
                System.out.println("Data inválida. Tente novamente.");
            }
        } while (!dataNascimento.isPresent());


        return new Usuario(nome, cpf, dataNascimento.get());
    }

    public Conta criarConta() {
        Scanner scanner = new Scanner(System.in);

        System.out.println("[1] Poupança\n[2] Corrente");

        int tipoDeConta;
        do {
            System.out.print("Digite o tipo de conta: ");
            tipoDeConta = scanner.nextInt();
        }
        while (tipoDeConta != 1 && tipoDeConta != 2);

        System.out.println("======================");

        Usuario user = criarUsuario();
        usuarios.add(user);

        Conta conta;

        if (tipoDeConta == 1) {
            conta = new ContaPoupanca(user, gerarConta(), gerarAgencia());
        } else {
            conta = new ContaCorrente(user, gerarConta(), gerarAgencia());
        }
        contas.add(conta);

        return conta;
    }

    void listarContas() {
        for (Conta conta : contas) {
            System.out.println(conta);
        }
    }

    Conta buscarConta(String numeroConta, String numeroAgencia) {
        for (Conta conta : contas) {
            if (conta.getConta().equals(numeroConta) && conta.getAgencia().equals(numeroAgencia)) {
                return conta;
            }
        }

        return null;
    }

    Conta buscarConta(String cpf) {
        for (Conta conta : contas) {
            if (conta.getUsuario().getCpf().equals(cpf)) {
                return conta;
            }
        }

        return null;
    }

    public Conta autenticar() {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Agência: ");
        String numeroAgencia = scanner.nextLine();

        System.out.println("Conta: ");
        String numeroConta = scanner.nextLine();

        System.out.println("Password: ");
        int password = scanner.nextInt();

        Conta conta = buscarConta(numeroConta, numeroAgencia);

        if (conta.getUsuario().getPassword() == password) {
            return conta;
        } else {
            return null;
        }
    }


    void removerConta() {
        Conta estaAutenticado = autenticar();

        if (estaAutenticado != null) {
            contas.remove(estaAutenticado);
        }
    }
}
