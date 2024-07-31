# Polimorfismo

> Através da herança, o polimorfismo é um conceito para representar a flexibilidade de uma entidade utilizando a reescrita de métodos (Override).

## Pilares
1. Abstração
2. Encapsulamento
3. Herança

## Tipos de Polimorfismo
- Ad-Hoc ocorre quando um mesmo objeto pode utilizar uma mesma ação de formas diferentes (sobrecarga de métodos)


1. **Subtyping**:
    > Subclasses fornecem diferentes implementações para algum método da superclasse.
    ```java
    public class Animal {
        public void eat() {
        //
        }
    }
    
    public class Dog {
        public void eat() {
            //
        }        
    }

    public class Cat {
        public void eat() {
        //
        }
    }
    ```
2. **Ad-hoc Polymorphism (Overloading)**
   > A execução do método depende da quantidade de argumentos que o mesmo possui.
    ```java
    class Pessoa {
        public void show_data(String name) {
            System.out.println(name);
        }
    
        public void show_data(String name, int age) {
            System.out.println(name, age);
        }
    }
    ```
3. **Ad-hoc Polymorphism (Coercion polymorphism)**
    > Ocorre na conversão de um tipo primitivo ou um objeto em outro tipo, podendo ser ser implícitas(são feitas automaticamente) ou explicitada.
   - **Coerção Implicita:** utiliza operadores como == ou ===
   - **Coerção Explicita:** fazemos um casting `a = (int) 10.2`
4. **Parametric Polymorphism**
   > Função ou tipo de dado que pode ser escrito genericamente para que ele possa lidar com diferentes tipos de valores.
   > Basicamente um único trecho de código receba um tipo "genérico", usando variáveis no lugar dos tipos reais, e então instanciado com tipos específicos conforme necessário.
5. **Structural Polymorphism**
   > No polimorfismo estrutural a preocupação não está no tipo, mas na estrutura, ou seja, se os métodos e propriedades estão presentes.
   - linguagens tipadas por serem de tipos nominais, não suportam esse tipo de polimorfismo.
6. **Row Polymorphism**
   > Structural Polymorphism com o Parametric Polymorphism

![Polimorfismo](https://miro.medium.com/v2/resize:fit:640/format:webp/1*6Iq085SfFMxEgOtNQosdFA.png)
, Structural Polymorphism, Row Polymorphism
### Suportados pelo Java
- Subtyping
- Ad-hoc Polymorphism (Overloading)
- Ad-hoc Polymorphism (Coercion polymorphism)
- Parametric Polymorphism