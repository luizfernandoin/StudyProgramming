# Collections

> Framework para facilitar a utilização de estruturas de dados pelos programadores (já está tudo pronto).

- **Pacote:** _java.util_
- **Interfaces:** _List, Set, Queue, Map..._
- **Classes Implementadoras de Interfaces:** _ArrayList, LinkedList, HashSet, TreeSet, HashMap, TreeMap..._
- **Classes:** _Pilhas, filas, árvores, tabelas hash..._

## Classe Collection
> Raiz da hierarquia decoleções. Ela define tudo que as subcoleções devem implementar.
> boolean add(E e): Adiciona um elemento à coleção. Retorna true se a coleção foi modificada como resultado da operação.

- boolean remove(Object o):
- boolean contains(Object o):
- int size():
- boolean isEmpty():
- void clear():
- Iterator<E> iterator():
- boolean addAll(Collection<? extends E> c):
- boolean removeAll(Collection<?> c):
- boolean retainAll(Collection<?> c):
- Object[] toArray():

## Interfaces

### List
> Estende a interface collection e possui os serviços oferecidos pelas listas

- **Indexadas** (elementos baseados em indices)
- **Classes Implementadoras:** _ArrayList, LinkedList, Vector_

### Set
> Representa operações em conjuntos

- Sem duplicatas
- **Classes Implementadoras:** _HashSet, TreeSet_

### Queue
> Serviços utilizados por filas

| Serviço | Descrição                    |
|--------|------------------------------|
| offer  | add no final                 |
| pool   | remove primeiro da lista     |
| peek   | retorna primeiro sem remover |

- **Classes Implementadoras:** LinkedList

```java
import java.util.LinkedList;
import java.util.Queue;

Queue<String> fila = new LinkedList<>();
```

### PRIORITYQUEUE
> Fila com prioridade (utiliza o Comparable). O de maior prioridade são colocados na frente dos menores

### Deque
> Fila dupla (inserir e remover nas duas extremidades)

- **Classes Implementadoras:** _LinkedList_

```java
import java.util.Deque;
import java.util.LinkedList;

Deque<String> fila = new LinkedList<>();
```


## Classes

### ArrayList (List)
> Lista genêrica usando Array.
>

```java
import java.util.ArrayList;

List<String> =new ArrayList<>();
```

- !Sincronizada (maior desempenho que a Vector) - permite multiplas threads acessarem ao mesmo tempo.
- Tamanho flexivel pela inserção de elementos

### Vector
> Semelhante ao ArrayList

```java
import java.util.Vector;

Vector<String> lista = new Vector<>();
```

- **Sincronizado (menor desempenho)** - apenas uma thread conseque acessar por vez.
- **Serviços duplicados:** já existia antes da interface Collections.

### LinkedList
> Lista encadeada

```java
import java.util.LinkedList;

// Instanciar como List porque possuem muitos serviços.
List<String> lista = new LinkedList<>();

// Mas se quiser, podemos fazer um casting
((LinkedList<String>) lista).addFirst("Maria");
```

- Fácil remoção/inserção em qualquer posição;
- Implementação de filas e filas duplas.

### Stack
> Implementa uma pilha LIFO.

```java
import java.util.Stack;

Stack<String> pilha = new Stack<>();
```

### HashSet
> Conjunto de elementos organizados pelo HashCode

```java
import java.util.HashSet;
import java.util.Set;

Set<String> conjunto = new HashSet<>();
```

- Tabela hash, onde os elementos são referenciados pelo HashCode
- Necessário sobrescrita de _**equals, hashCode**_


### TreeSet
> Conjunto de elementos como uma arvore.

```java
import java.util.Set;
import java.util.TreeSet;

Set<String> conjunto = new TreeSet<>();
```

- ordenação por Comparable ou por um Comparator