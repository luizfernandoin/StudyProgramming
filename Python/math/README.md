# Cálculos em Python
Este guia apresenta a sintaxe das operações matemáticas em Python, incluindo operadores básicos, funções matemáticas da biblioteca math, e exemplos práticos de expressões e equações.

## Operadores Básicos
Python possui operadores para realizar operações matemáticas comuns. Abaixo estão os operadores principais:

| Operador | Descrição | Exemplo  | Resultado |
| ------------- | ------------- | ------------- | ------------- |
| `+` | Adição | `5 + 3` | `8` |
| `-` | Subtração | `10 - 4` | `6` |
| `*` | Multiplicação | `7 * 2` | `14` |
| `/` | Divisão | `15 / 3` | `5.0` |
| `//` | Divisão Inteira | `17 // 3` | `5` |
| `%` | Módulo (resto) | `10 % 3` | `1` |
| `**` | Exponenciação | `2 ** 3` | `8` |

## Prioridade de Operações
Python segue a ordem de precedência:

1. Parênteses `()`
2. Exponenciação `**`
3. Multiplicação, Divisão, e Módulo `*, /, //, %`
4. Adição e Subtração `+, -`

```py
resultado = 5 + 2 * 3  # Resultado: 11
resultado = (5 + 2) * 3  # Resultado: 21
```

## Funções Matemáticas Avançadas
Python possui a biblioteca `math`, que contém várias funções úteis. Para usá-las, importe o módulo math:

```py
import math
```

Algumas funções comuns incluem:

| Operador | Descrição |
| ------------- | ------------- |
| `math.sqrt(x)` | Raiz Quadrada |
| `math.pow(x, y)` | Potência |
| `math.log(x)` | Logaritmo Natural |
| `math.log10(x)` | Logaritmo Base 10 |
| `math.sin(x)` | Seno |
| `math.cos(x)` | Cosseno |
| `math.tan(x)` | Tangente |
| `abs(x)` | Valor Absoluto |
| `math.pi` | pi |
| `math.e` | euler |
| `math.exp(1)` | $e^x$ |
| `math.factorial(x)` | Fatorial: 𝑛! |


```py
import math

raiz_quadrada = math.sqrt(16)  # Resultado: 4.0
potencia = math.pow(2, 3)      # Resultado: 8.0
logaritmo = math.log(10)       # Resultado: ~2.302
```

## Exemplo de Expressões Numéricas e Equações

### Exemplo 1
$$
3x^2 + 2x - 5
$$

```py
x = 2
resultado = 3 * x**2 + 2 * x - 5  # Substituindo x = 2, resultado: 11
```

### Exemplo 2
$$
\sqrt{x^2 + y^2}
$$

```py
import math

x = 3
y = 4
resultado = math.sqrt(x**2 + y**2)  # Resultado: 5.0
```

### Exemplo 3
$$
\log_{10}(100)
$$

```py
import math

resultado = math.log10(100)  # Resultado: 2.0
```

> Para mais, documentação do [math.py](https://docs.python.org/3/library/math.html).