# Interface List

---

A semelhança entre elas está no fato de ambas implementarem a interface List.

## LinkedList
![](https://media.geeksforgeeks.org/wp-content/uploads/20240809123741/Insertion-at-the-End-in-Doubly-Linked-List-copy.webp)
> Ligação de elementos (nós) por ponteiros, onde cada nó aponta para o próximos elemento. 
- Através dessa corrente é possível acessar qualquer elemento da lista.

### Lista Duplamente Encadeada (JAVA)
> Além de um ponteiro para o próximo nó, também temos referência para o anterior. Além disso, em Java também possui um ponteiro `tail` que aponta para o ultimo nó.

- Para acessar elementos internos precisa-se navegar entre os ponteiros.
- Elementos separados na memória. (apenas o elemento anterior sabe o endereço do próximo)
- **Acesso Sequencial:** ler os elementos começando do inicio.

## ArrayList
> ArrayList é uma estrutura de dados que utiliza arrays sem "limitação de tamanho".

- Na implementação, quando o array é preenchido um novo é realocado com tamanho maior e todos os elementos do anterior é copiado para o novo.
- Tem tamanho inicial de 10.
- Acesso aleatório (indexados), já tem endereços físicos;



### Array
> Estrutura de dados que possui tamanho fixo. Quando preenchido deve-se criar um novo array de tamanho extendido.

![](https://miro.medium.com/v2/resize:fit:640/format:webp/1*OgGW0jtgRbFKDnfM22ZFOg.png)

```java
String[] nomes = new String[10];
```