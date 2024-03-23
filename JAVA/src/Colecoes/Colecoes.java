package Colecoes;

import java.util.ArrayList;
import java.util.Arrays;

public class Colecoes {
    public static void main(String[] args) {
        //Criando array
        String[] nomes = new String[10];

        //preenchendo array
        for (int i = 0; i < nomes.length; i++) {
            nomes[i] = "Luiz";
        }

        /* ArrayList -> arrays encadeados ou dinamicos.
        Eles aceitam apenas objetos ou classe wrappers (empacotadoras) como o Integer.
        */

        ArrayList<String> listaNomes = new ArrayList<>(Arrays.asList("LuizLista"));
        listaNomes.remove(0);

        System.out.println(listaNomes);

    }
}
