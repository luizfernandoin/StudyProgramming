package PROJETOS.Banco;

public abstract class Conta {
    private Usuario usuario;
    private String conta;
    private String agencia;
    private double saldo;

    public Conta(Usuario user, String conta, String agencia) {
        this.usuario = user;
        this.conta = conta;
        this.agencia = agencia;
        this.saldo = 0;
    }

    @Override
    public String toString() {
        return "Conta{" +
                "usuario=" + usuario +
                ", conta='" + conta + '\'' +
                ", agencia='" + agencia + '\'' +
                ", saldo=" + saldo +
                '}';
    }

    abstract void sacar(double valor);

    synchronized final void depositar(double valor) {
        saldo += valor;
    }

    public Usuario getUsuario() {
        return usuario;
    }

    public String getConta() {
        return conta;
    }

    public void setConta(String conta) {
        this.conta = conta;
    }

    public String getAgencia() {
        return agencia;
    }

    public void setAgencia(String agencia) {
        this.agencia = agencia;
    }

    public final double getSaldo() {
        return saldo;
    }

    public final void setSaldo(double saldo) {
        this.saldo = saldo;
    }
}
