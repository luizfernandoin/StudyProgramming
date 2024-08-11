package Herança;

class Veiculo {
    double velocidade;

    void andar() {
        System.out.println("O veiculo está em movimento!");
    }

    void parar() {
        System.out.println("O veiculo parou!");
    }
}

class Carro extends Veiculo {
    int rodas = 4;
    int portas = 4;
}

class Moto extends Veiculo {
    int rodas = 2;
    int pedais = 2;
}

public class Main {
    public static void main(String[] args) {
        Carro car = new Carro();
        Moto moto = new Moto();

        car.andar();
        moto.parar();

        car.velocidade = 100;
        System.out.println(car.velocidade);
        System.out.println(moto.velocidade);
    }
}
