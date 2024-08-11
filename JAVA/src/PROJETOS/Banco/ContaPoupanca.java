package PROJETOS.Banco;

public class ContaPoupanca extends Conta {
    public ContaPoupanca(Usuario usuario, String conta, String agencia) {
        super(usuario, conta, agencia);
    }
    @Override
    public synchronized void sacar(double valor) {
        if (getSaldo() >= valor) {
            setSaldo(getSaldo() - valor);
        } else {
            System.out.println("Saldo insuficiente!");
        }
    }

    @Override
    public String toString() {
        return "ContaPoupanca{" +
                super.toString() +
                '}';
    }
}
