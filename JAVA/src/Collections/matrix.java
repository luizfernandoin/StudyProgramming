package Collections;

public class matrix {

    public static void main(String[] args) {
        /*
        Os arrays multidimensionais ou simplesmente matriz trata-se de uma matriz de matrizes.

        tipoDado[][] nomeMatriz = new tipoDado[totalLinhas][totalColunas];

        Pode-se ter matrizes com tamanho de elementos em cada linha diferentes.
        */

        int[][] a = {
                {1, 2, 3},
                {4, 5, 6, 9},
                {7},
        };

        //Acessando elementos da matriz
        for (int row = 0; row < a.length; row++) {
            for (int col = 0; col < a[row].length; col++) {
                System.out.println(a[row][col]);
            }
        }

        //Podemos utilizar o for-each:
        for (int[] row: a) { //primeiro pegamos cada linha da matriz
            for(int col: row) { //depois pegamos cada elemento da linha
                System.out.println(col);
            }
        }
    }
}
