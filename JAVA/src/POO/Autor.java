package POO;

public class Autor {
    String nome;
    String email;
    String cpf;

    void mostrarDados() {
        System.out.println("Informações do Autor:");
        System.out.println("Nome: " + nome);
        System.out.println("Email: " + email);
        System.out.println("CPF: " + cpf);
        System.out.println("--");
    }
}
