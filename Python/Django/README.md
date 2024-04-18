# Aprendendo Django

O Django é um framework web em Python criado para agilizar e facilitar o desenvolvimento de aplicações web. O objetivo é simplificar as tarefas comuns para que o programador foque na lógica da aplicação.

# Instalando Django

1. Você precisa ter o python instalado. Para conferir:
```py
python --version
```
2. O ideal é que o Django seja instalado apenas no diretório do projeto específico, não no SO. Logo:

    - Crie um diretório para o projeto
        ```py
        mkdir Django
        ```
    - Instale um ambiente virtual
        ```py
        python -m venv .venv

        . .venv/bin/activate
        ```
    - Instale o django
        ```py
        pip install django
        ```
3. Crie um projeto Django, que consiste em uma coleção de configurações, sejá de BD, django ou específicas do aplicativo.

```py
django-admin startproject mysite
```
Será criado um diretório do projeto dentro do diretório raiz.

Para ver os recursos do django-admin, basta: `django-admin --help`

---

Agora, temos um diretório com a estrutura: 
```py
mysite/ --> você pode renomear
    manage.py
    mysite/ --> pacote do projeto usado para importar qualquer coisa.
        __init__.py --> indica que é um pacote.
        settings.py --> configurações do projeto.
        urls.py --> urls do projeto; indices.
        asgi.py --> ponto de entrada para servidores ASGI.
        wsgi.py --> ponto de entrada para servidores WSGI.
```

## *django-admin*

Utilitário de linha de comando para executar tarefas administrativas.

    $ django-admin <command> [options]
    $ manage.py <command> [options]
    $ python -m django <command> [options]



| Comando | Funcionalidade |
|---------|----------------|
| `django-admin help` | Fornece informações de uso e uma lista de comandos. |

## *manage . py*

O manage .py é um script Python que configura o ambiente para o seu projeto Django. 

Faz a mesma coisa do `django-admin`, mas também define o DJANGO_SETTINGS_MODULE variável de ambiente para que aponte para settings .py do projeto.

**Simplificando:** basicamente, quando usamos o manage .py, o Django configura automaticamente uma variável que aponta para as configurações, porque elas são necessárias para boa execussão do programa.

 

## *settings . py*

- Um módulo python com variáveis.

Contem todas as informações de instalação do Django, contendo a explicação das configurações que estão disponíveis.





## *urls . py*

## *asgi . py*

## *wsgi . py*

## Models

O Django possibilita a intefração com Bancos de Dados através de uma ORM integrado, no qual o programador é responsável pela modelagem através de código python.

#### ORM

Precisamos entender 2 mundos: Relacional e o Orientado a Objetos.

No mundo relacional princípios matemáticos (RELAÇÃO) ajudam no armazenamento e gerenciamento correto dos dados, com a linguagem SQL que diz "O QUE FAZER". Já na OO existem classes e métodos que nos dizem “COMO” fazer. 

O ORM é o intermediador entre esses mundos, ou seja, ele permite o armazenamento de objetos no BD, como também a manipulação de dados do BD como objetos.

---
O Django possuem diferentes sintaxes para definição de modelos.

## Admin 

Depois de ter os modelos definidos, você pode ter uma interface administrativa. Através de uma autenticação é possível realizar CRUD de objetos.

1. Você não precisa criar interfaces de back-end apenas para gerenciar conteúdo.

2. Basta criar seus modelos:
```py
from django.db import models

class Article(models.Model):
    pub_date = models.DateField()
    headline = models.CharField(max_length=200)
    content = models.TextField()
    reporter = models.ForeignKey(Reporter, on_delete=models.CASCADE)
```

3. Registrar no `admin.py`:
```py
from django.contrib import admin

from . import models

admin.site.register(models.Article)
```

## URL's

Para criar urls de funções nos aplicativos, precisamos criar um módulo Python chamado URLconf, convencionalmente `urls.py`. 

1. Define uma lista de padrões URL e associa a uma função de retorno quando acessada, chamada de `views`.

```py
from django.urls import path

from . import views

urlpatterns = [
    path("articles/<int:year>/", views.year_archive, name="year_archive"),
]
```
- `path("articles/<int:year>/", views.year_archive)` define que a URL `articles/<int:year>/` será mapeada para a função `views.year_archive`.
- `<int:year>` são tags de parametro para capturar valores de urls.
- `name='year_archive'` é um nome opcional para a URL, que pode ser usado para referenciar essa URL em outros lugares do seu código Django, como templates.
- Caso a URL não exista: ERRO 404.
- Os caminhos são convertidos para expressões regurares no momento do carregamento.

## Views

Cada `view` faz uma das duas coisas:

1. Retornar um HttpResponse com o conteúdo da página solicitada;
2. Retornar um Http404.

Na maioria das vezes você realiza 3 coisas nas funções de retorno: recupera dados de acordo com os parâmetros, carrega um modelo e renderiza o modelo com os dados recuperados.

```py
from django.shortcuts import render

from .models import Article


def year_archive(request, year):
    a_list = Article.objects.filter(pub_date__year=year)
    context = {"year": year, "article_list": a_list}
    return render(request, "news/year_archive.html", context)
```

## Templates

Para trabalhar com templates no Django precisamos definir um caminho de buscas. Em `settings.py` pode-se especificar uma lista de diretórios para verificar modelos com DIRS.

- Quando um modelo for solicitado, o django verifica em cada uma dessa lista de diretórios até encontra-lo.

Os modelos funcionam da seguinte forma:

```py
{% extends "base.html" %}

{% block title %}Articles for {{ year }}{% endblock %}

{% block content %}
<h1>Articles for {{ year }}</h1>

{% for article in article_list %}
    <p>{{ article.headline }}</p>
    <p>By {{ article.reporter.full_name }}</p>
    <p>Published {{ article.pub_date|date:"F j, Y" }}</p>
{% endfor %}
{% endblock %}
```

- `{{ variavel }}` as variáveis são cercadas por chaves duplas.
- Caso tenha pontos nas variáveis: `{{ article.headline }}` pode representar atributos, chaves de dicionários, indice ou chamada de função.
- Você pode filtrar váriaveis com um "pipe", que basicamente é um caracter `|`. Por exemplo, para filtrar e formatar uma data, você pode: `{{ article.pub_date|date:"F j, Y" }}`.
---
É importante destacar que o Django usa herança de templates, ou seja, você pode construir modelos base para dinamicidade e evitar redundancia.

Significa “Primeiro carregue o modelo chamado 'base', que definiu vários blocos, e preencha os blocos com os blocos seguintes.” Cada modelo precisa definir apenas o que é exclusivo desse modelo. `{% extends "base.html" %}`

1. Basicamente, temos um modelo pai com buracos que serão preenchidos pelos filhos, ex:
```html
{% load static %}
<html>
<head>
    <title>{% block title %}{% endblock %}</title>
</head>
<body>
    <img src="{% static 'images/sitelogo.png' %}" alt="Logo">
    {% block content %}{% endblock %}
</body>
</html>
```

2. Se quiser mudar o site drasticamente, só precisa mudar o template base.