package POO.produtos;

public interface Produto {
    /*
    Uma interface é parecida com uma classe abstrata, pois estamos estabelecendo um contrato
    que todas as suas subclasses terão que implementar os métodos.

    */


    public abstract double getValor();
    /*
    -> O uso do abstract é opcional, pois métodos sem corpo já representa-os.
    -> O uso do public também é opcional, pois todos os métodos são publicos.
    */

}
