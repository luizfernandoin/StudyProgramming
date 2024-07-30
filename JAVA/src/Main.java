import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Pessoa> pessoas = new ArrayList<>();
        Pessoa p1 = new Pessoa("123", "Luiz");
        pessoas.add(p1);

        System.out.println(pessoas.get(0));
        pessoas.set(0, new Pessoa("321", "Luiza"));
        System.out.println(pessoas.get(0));

        
    }
}