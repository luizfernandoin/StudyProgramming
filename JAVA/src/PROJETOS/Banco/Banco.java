package PROJETOS.Banco;

import java.util.*;
import java.util.concurrent.atomic.AtomicInteger;

public class Banco {
    ArrayList<Conta> contas;
    ArrayList<Usuario> usuarios;
    private final AtomicInteger numeroAgencia;
    private Scanner scanner;

    public Banco() {
        this.contas = new ArrayList<>();
        this.usuarios = new ArrayList<>();
        this.numeroAgencia = new AtomicInteger(1);
        this.scanner = new Scanner(System.in);
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
        DataUtils dataUtils = new DataUtils();

        String nome = nextNome();
        String cpf = nextCPF();
        int password = nextPassword();
        Optional<Date> dataNascimento;

        do {
            System.out.print("Data de nascimento (dd/MM/yyyy): ");
            String textoData = scanner.nextLine();
            dataNascimento = dataUtils.verificarTextoData(textoData);
            if (!dataNascimento.isPresent()) {
                System.out.println("Data inválida. Tente novamente.");
            }
        } while (!dataNascimento.isPresent());


        return new Usuario(nome, cpf, dataNascimento.get(), password);
    }

    public Conta criarConta() {
        System.out.println("[1] Poupança\n[2] Corrente");

        int tipoDeConta;
        do {
            System.out.print("Digite o tipo de conta: ");
            tipoDeConta = scanner.nextInt();
            scanner.nextLine();
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

    void listarUsuarios() {
        for (Usuario user : usuarios) {
            System.out.println(user);
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

    public void imprimirConta(Conta conta) {
        System.out.println(conta);
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
        String numeroAgencia = nextAgencia();
        String numeroConta = nextConta();
        int password = nextPassword();

        Conta conta = buscarConta(numeroConta, numeroAgencia);

        if (conta == null) {
            return null;
        }

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

    public String nextNome() {
        System.out.print("Informe seu nome: ");
        String nome = scanner.nextLine();

        return nome;
    }

    public String nextConta() {
        System.out.print("Informe o Número da Conta: ");
        String numeroConta = scanner.nextLine();

        return numeroConta;
    }

    public String nextAgencia() {
        System.out.print("Informe o Número da Agência: ");
        String numeroAgencia = scanner.nextLine();

        return numeroAgencia;
    }

    public String nextCPF() {
        System.out.print("Informe o CPF: ");
        String cpf = scanner.nextLine();

        return cpf;
    }

    public int nextPassword() {
        System.out.print("Informe o Password: ");
        int password = scanner.nextInt();
        scanner.nextLine();

        return password;
    }
}
