package PROJETOS.Banco;

public class ContaCorrente extends Conta {
    double credito;

    public ContaCorrente(Usuario usuario, String conta, String agencia) {
        super(usuario, conta, agencia);
    }

    public synchronized void sacar(double valor) {
        if (getSaldo() >= valor || credito >= valor) {
            setSaldo(getSaldo() - valor);
        }
    }

    @Override
    public String toString() {
        return "ContaCorrente{" +
                super.toString() +
                '}';
    }
}
