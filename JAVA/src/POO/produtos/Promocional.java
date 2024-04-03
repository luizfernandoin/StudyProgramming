package POO.produtos;

@FunctionalInterface
//Basicamente está anotando que a interface é funcional (possui único método abstrato)
public interface Promocional {

    public abstract boolean aplicaDescontoDe(double porcentagem);
    /*
    Desde o JAVA 8 os métodos de interface podem ser implementados (métodos concretos)
    conhecidos com default methods

    -> usa-se a palavra default

    default boolean aplicaDescontoDe10Porcento() {
        return aplicaDescontoDe(0.1);
    }
    */
    default boolean aplicaDescontoDe10Porcento() {
        return aplicaDescontoDe(0.1);
    }


}
