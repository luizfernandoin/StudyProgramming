package PROJETOS.Banco;

public abstract class Usuario {
    String nome;
    int idade;
    String conta;
    String agencia;
    int password;

    public Usuario(String nome, int idade, String conta, String agencia, int password) {
        this.nome = nome;
        this.idade = idade;
        this.conta = conta;
        this.agencia = agencia;
        this.password = password;
    }

    public void login() {

    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
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

    public int getPassword() {
        return password;
    }

    public void setPassword(int password) {
        this.password = password;
    }
}
