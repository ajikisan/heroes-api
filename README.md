Este projeto criado em Maven no Intellij teve como objetivo desenvolver uma Application Programming Interface (
API) </br> de gerenciamento de heróis da Marvel e da DC Comics utilizando spring webflux, a biblioteca do reactor, aws
dynamodb de forma local para armazenagem dos dados na tabela de heróis e realização dos testes unitários com Junit,
Postman e Swagger.

### Recursos para execução do projeto:

* Windows 10 10.0 - Version V21H1
* IDE - IntelliJ IDEA 2021.2.3 (Community Edition)
* Spring Data
* Spring Webflux
* Ubuntu Terminal
* Windows PowerShell
* Junit
* WebTestClient
* Sl4j
* Reactor
* DynamoDB
* Postman Aplicativo
* Swagger

## _Scaffolding_

_Scaffolding_  palavra inglesa que significa “ter/pôr andaimes”, como os usados na construção civil, ou seja, designado
para estruturar os parâmetros iniciais do projeto.

* [Spring Initializr](https://start.spring.io/)
* Dados do projeto: Maven
* Linguagem: Java
* Versão do spring boot: 2.6.1
* Artefato: heroesApi
* Nome do pacote: com.digitalinnovatione.heroesApi
* Pacote: Jar
* Versão do Java: 8
* Dependências: Lombok Developer Tools e Spring Reactive Web.

### Desenvolvimento

Realizado a abertura do scaffolding heroesApi no IntelliJ. No arquivo pom.xml foi inserido comandos para continuar com
as instalações das dependências, artefatos e versões.

* DynamoDB
* WebFlux
* Reactor Test
* Lombok
* Swagger do Springfox

Em paralelo a instalação das dependências foi realizado o cadastro IAM em [Amazon AWS](https://aws.amazon.com/)
para obtenção da *aws_access_id_key* e *aws_secret_access_key*.

E de acordo com
a [documentação](https://docs.aws.amazon.com/pt_br/pt_br/amazondynamodb/latest/developerguide/DynamoDBLocal.DownloadingAndRunning.html)
foi realizada a instalação local do DyanamoDB e configuração do aws e ativação do Dynamodb via terminal Windows
PowerShell do AWS CLI v2.

Na tela do terminal Ubuntu no usuário root foi executado o comando:

```shell
:~$ docker pull amazon/dynamodb-local

e posterior

:~$ docker run -p 8000:8000 amazon/dynamodb-local

Initializing DynamoDB Local with the following configuration:
Port:   8000
InMemory:       true
DbPath: null
SharedDb:       false
shouldDelayTransientStatuses:   false
CorsParams:     *
```

Comando Windows PowerShell para exibição da tabela com os dados armazenados.

```shell
>aws dynamodb scan  --table-name Heroes_Table --endpoint-url http://localhost:8000

```

No retorno ao ambiente de desenvolvimento integrado IntelliJ foram criados diretórios, classes e intefaces.

| Diretório    | Classes Públicas            | Descrição                                                                                                    |
|------------	|---------------------------	|-------------------------------------------------------------------------------------------------------------	|
| config        | DynamoConfig                | Configuração do acesso ao banco de dados DynamoDB                                                            |
| config        | HeroesTable                | Configuração dos atributos da tabela no banco de dados DynamoDB.                                                |
| config        | HeroesData                    | Para o preenchimento da base de dados na tabela de heróis.                                                    |
| constants    | HeroesConstant                | Variáveis declaradas ficam disponíveis em todo o código do projeto.                                            |
| controller    | HeroesController            | Controla quem deve receber e para quem deve responder as requisições.                                        |
| documents    | Heroes                        | Documentação dos "endpoints" e operações para referenciar os terminais de conexão entre uma API e o cliente.    |
| service        | HeroesService                | Integração e transferência de dados entre aplicações pelos protocolos de comunicação                            |
| service        | HeroesApiApplication        | Configuração de execução do projeto.                                                                            |
| resources    | application.properties        | Neste arquivo JAR foram cadastrados dados dos recursos que serão acessados pelo código de um aplicativo.        |
| test        | HeroesApiApplicationTests    | Execução de testes unitários, e se algum falhar, o Maven exibirá essa informação no console do IntelliJ.        |

| Diretório    | Interface Pública        | Descrição                                                                                |
|------------	|-------------------------	|---------------------------------------------------------------------------------------	|
| repository    | HeroesRepository        | Gerenciamento da tabela de heróis com a operação CRUD (Create, Read, Update, Delete).    |

### Referência:

Bootcamp - Digital Innovation One: TQI Java Developer </br>
Instrutora: Kamila Santos </br>
[Link do Desafio](https://web.dio.me/project/criando-seu-gerenciador-de-super-herois-da-marvel-e-da-dc-em-uma-api-reativa-com-spring-boot/learning/82d5791a-c271-4f34-92d4-76364a05d497?back=/track/tqi-java-developer)

### Considerações finais

Depois do acompanhamento da aula, leitura das dicas no chat da Discord e troca de mensagens com membros que terminaram o
desafio. Foi criado o gerenciador de super heróis da Marvel e da DC Comics em Interface de Programação de Aplicativos
Postman (local). Importante, o banco de dados DynamoDB que foi criado pela API deve ser iniciado no terminal Ubuntu ou
Windows Power Shell. Conforme explicação foi necessário primeiro executar a classe que cria a tabela HeroesTable, em
seqüência a classe HeroesData para que tivesse a entrada de dados na tabela e por fim, executar a classe
HeroesApiApplication que contém a documentação do Spring.

[Link do Swagger](http://localhost:8080/webjars/swagger-ui/index.html?configUrl=/v3/api-docs/swagger-config#)




