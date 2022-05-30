[33mcommit 10aee685bccfc9ce30aba4df0abb29bd50983af6[m[33m ([m[1;36mHEAD -> [m[1;32mmain[m[33m, [m[1;31morigin/main[m[33m)[m
Author: Mirian Ajiki Molicawa <ajikisan@hotmail.com>
Date:   Wed Dec 22 18:18:55 2021 -0400

    commit inicial

[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..549e00a[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,33 @@[m
[32m+[m[32mHELP.md[m
[32m+[m[32mtarget/[m
[32m+[m[32m!.mvn/wrapper/maven-wrapper.jar[m
[32m+[m[32m!**/src/main/**/target/[m
[32m+[m[32m!**/src/test/**/target/[m
[32m+[m
[32m+[m[32m### STS ###[m
[32m+[m[32m.apt_generated[m
[32m+[m[32m.classpath[m
[32m+[m[32m.factorypath[m
[32m+[m[32m.project[m
[32m+[m[32m.settings[m
[32m+[m[32m.springBeans[m
[32m+[m[32m.sts4-cache[m
[32m+[m
[32m+[m[32m### IntelliJ IDEA ###[m
[32m+[m[32m.idea[m
[32m+[m[32m*.iws[m
[32m+[m[32m*.iml[m
[32m+[m[32m*.ipr[m
[32m+[m
[32m+[m[32m### NetBeans ###[m
[32m+[m[32m/nbproject/private/[m
[32m+[m[32m/nbbuild/[m
[32m+[m[32m/dist/[m
[32m+[m[32m/nbdist/[m
[32m+[m[32m/.nb-gradle/[m
[32m+[m[32mbuild/[m
[32m+[m[32m!**/src/main/**/build/[m
[32m+[m[32m!**/src/test/**/build/[m
[32m+[m
[32m+[m[32m### VS Code ###[m
[32m+[m[32m.vscode/[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..cb405d3[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1,108 @@[m
[32m+[m[32mEste projeto criado em Maven no Intellij teve como objetivo desenvolver uma Application Programming Interface (API) </br> de gerenciamento de heróis da Marvel e da DC Comics utilizando spring webflux, a biblioteca do reactor, aws dynamodb de forma local para armazenagem dos dados na tabela de heróis e realização dos testes unitários com Junit, Postman e Swagger.[m
[32m+[m
[32m+[m[32m### Recursos para execução do projeto:[m
[32m+[m[32m* Windows 10 10.0 - Version V21H1[m
[32m+[m[32m* IDE - IntelliJ IDEA 2021.2.3 (Community Edition)[m
[32m+[m[32m* Spring Data[m
[32m+[m[32m* Spring Webflux[m
[32m+[m[32m* Ubuntu Terminal[m
[32m+[m[32m* Windows PowerShell[m
[32m+[m[32m* Junit[m
[32m+[m[32m* WebTestClient[m
[32m+[m[32m* Sl4j[m
[32m+[m[32m* Reactor[m
[32m+[m[32m* DynamoDB[m
[32m+[m[32m* Postman Aplicativo[m
[32m+[m[32m* Swagger[m
[32m+[m
[32m+[m
[32m+[m[32m## _Scaffolding_[m
[32m+[m
[32m+[m[32m_Scaffolding_  palavra inglesa que significa “ter/pôr andaimes”, como os usados na construção civil, ou seja,[m
[32m+[m[32mdesignado para estruturar os parâmetros iniciais do projeto.[m
[32m+[m
[32m+[m[32m* [Spring Initializr](https://start.spring.io/)[m
[32m+[m[32m* Dados do projeto: Maven[m
[32m+[m[32m* Linguagem: Java[m
[32m+[m[32m* Versão do spring boot: 2.6.1[m
[32m+[m[32m* Artefato: heroesApi[m
[32m+[m[32m* Nome do pacote: com.digitalinnovatione.heroesApi[m
[32m+[m[32m* Pacote: Jar[m
[32m+[m[32m* Versão do Java: 8[m
[32m+[m[32m* Dependências: Lombok Developer Tools e Spring Reactive Web.[m
[32m+[m
[32m+[m[32m### Desenvolvimento[m
[32m+[m[32mRealizado a abertura do scaffolding heroesApi no IntelliJ.[m
[32m+[m[32mNo arquivo pom.xml foi inserido comandos para continuar com as instalações das dependências, artefatos e versões.[m
[32m+[m[32m* DynamoDB[m
[32m+[m[32m* WebFlux[m
[32m+[m[32m* Reactor Test[m
[32m+[m[32m* Lombok[m
[32m+[m[32m* Swagger do Springfox[m
[32m+[m
[32m+[m[32mEm paralelo a instalação das dependências foi realizado o cadastro IAM em [Amazon AWS](https://aws.amazon.com/)[m
[32m+[m[32mpara obtenção da *aws_access_id_key* e *aws_secret_access_key*.[m
[32m+[m
[32m+[m[32mE de acordo com a [documentação](https://docs.aws.amazon.com/pt_br/pt_br/amazondynamodb/latest/developerguide/DynamoDBLocal.DownloadingAndRunning.html)[m
[32m+[m[32mfoi realizada a instalação local do DyanamoDB e configuração do aws e ativação do Dynamodb via terminal Windows PowerShell do AWS CLI v2.[m
[32m+[m
[32m+[m[32mNa tela do terminal Ubuntu no usuário root foi executado o comando:[m
[32m+[m[32m```shell[m
[32m+[m[32m:~$ docker pull amazon/dynamodb-local[m
[32m+[m
[32m+[m[32me posterior[m
[32m+[m
[32m+[m[32m:~$ docker run -p 8000:8000 amazon/dynamodb-local[m
[32m+[m
[32m+[m[32mInitializing DynamoDB Local with the following configuration:[m
[32m+[m[32mPort:   8000[m
[32m+[m[32mInMemory:       true[m
[32m+[m[32mDbPath: null[m
[32m+[m[32mSharedDb:       false[m
[32m+[m[32mshouldDelayTransientStatuses:   false[m
[32m+[m[32mCorsParams:     *[m
[32m+[m[32m```[m
[32m+[m[32mComando Windows PowerShell para exibição da tabela com os dados armazenados.[m
[32m+[m[32m```shell[m
[32m+[m[32m>aws dynamodb scan  --table-name Heroes_Table --endpoint-url http://localhost:8000[m
[32m+[m
[32m+[m[32m```[m
[32m+[m
[32m+[m[32mNo retorno ao ambiente de desenvolvimento integrado IntelliJ foram criados diretórios, classes e intefaces.[m
[32m+[m
[32m+[m[32m| Diretório  	| Classes Públicas          	| Descrição                                                                                                   	|[m
[32m+[m[32m|------------	|---------------------------	|-------------------------------------------------------------------------------------------------------------	|[m
[32m+[m[32m| config     	| DynamoConfig              	| Configuração do acesso ao banco de dados DynamoDB                                                           	|[m
[32m+[m[32m| config     	| HeroesTable               	| Configuração dos atributos da tabela no banco de dados DynamoDB.                                            	|[m
[32m+[m[32m| config     	| HeroesData                	| Para o preenchimento da base de dados na tabela de heróis.                                                  	|[m
[32m+[m[32m| constants  	| HeroesConstant            	| Variáveis declaradas ficam disponíveis em todo o código do projeto.                                         	|[m
[32m+[m[32m| controller 	| HeroesController          	| Controla quem deve receber e para quem deve responder as requisições.                                       	|[m
[32m+[m[32m| documents  	| Heroes                    	| Documentação dos "endpoints" e operações para referenciar os terminais de conexão entre uma API e o cliente. 	|[m
[32m+[m[32m| service    	| HeroesService             	| Integração e transferência de dados entre aplicações pelos protocolos de comunicação                        	|[m
[32m+[m[32m| service    	| HeroesApiApplication      	| Configuração de execução do projeto.                                                                        	|[m
[32m+[m[32m| resources  	| application.properties    	| Neste arquivo JAR foram cadastrados dados dos recursos que serão acessados pelo código de um aplicativo.    	|[m
[32m+[m[32m| test       	| HeroesApiApplicationTests 	| Execução de testes unitários, e se algum falhar, o Maven exibirá essa informação no console do IntelliJ.    	|[m
[32m+[m
[32m+[m
[32m+[m[32m| Diretório  	| Interface Pública      	| Descrição                                                                             	|[m
[32m+[m[32m|------------	|-------------------------	|---------------------------------------------------------------------------------------	|[m
[32m+[m[32m| repository 	| HeroesRepository      	| Gerenciamento da tabela de heróis com a operação CRUD (Create, Read, Update, Delete). 	|[m
[32m+[m
[32m+[m
[32m+[m[32m### Referência:[m
[32m+[m[32mBootcamp - Digital Innovation One: TQI Java Developer </br>[m
[32m+[m[32mInstrutora: Kamila Santos </br>[m
[32m+[m[32m[Link do Desafio](https://web.dio.me/project/criando-seu-gerenciador-de-super-herois-da-marvel-e-da-dc-em-uma-api-reativa-com-spring-boot/learning/82d5791a-c271-4f34-92d4-76364a05d497?back=/track/tqi-java-developer)[m[41m [m
[32m+[m
[32m+[m[32m### Considerações finais[m
[32m+[m[32mDepois do acompanhamento da aula, leitura das dicas no chat da Discord e troca de mensagens com membros que terminaram o desafio.[m
[32m+[m[32mFoi criado o gerenciador de super heróis da Marvel e da DC Comics em Interface de Programação de Aplicativos Postman (local).[m
[32m+[m[32mImportante, o banco de dados DynamoDB que foi criado pela API deve ser iniciado no terminal Ubuntu ou Windows Power Shell.[m
[32m+[m[32mConforme explicação foi necessário primeiro executar a classe que cria a tabela HeroesTable, em seqüência a classe HeroesData para que tivesse a entrada de dados na tabela e por fim, executar a classe HeroesApiApplication que contém a documentação do Spring.[m
[32m+[m
[32m+[m
[32m+[m[32m[Link do Swagger](http://localhost:8080/webjars/swagger-ui/index.html?configUrl=/v3/api-docs/swagger-config#)[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[1mdiff --git a/dynamodbHeroesWps/DynamoDB Heroes Table by WPS.txt b/dynamodbHeroesWps/DynamoDB Heroes Table by WPS.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..b9f25da[m
[1m--- /dev/null[m
[1m+++ b/dynamodbHeroesWps/DynamoDB Heroes Table by WPS.txt[m	
[36m@@ -0,0 +1,84 @@[m
[32m+[m[32mWindows PowerShell[m
[32m+[m[32mCopyright (C) Microsoft Corporation. Todos os direitos reservados.[m
[32m+[m
[32m+[m[32mExperimente a nova plataforma cruzada PowerShell https://aka.ms/pscore6[m
[32m+[m
[32m+[m[32mPS C:\Users\ajiki> aws dynamodb scan  --table-name Heroes_Table --endpoint-url http://localhost:8000[m
[32m+[m[32m{[m
[32m+[m[32m    "Items": [[m
[32m+[m[32m        {[m
[32m+[m[32m            "name": {[m
[32m+[m[32m                "S": "Wonder Woman"[m
[32m+[m[32m            },[m
[32m+[m[32m            "films": {[m
[32m+[m[32m                "N": "59"[m
[32m+[m[32m            },[m
[32m+[m[32m            "id": {[m
[32m+[m[32m                "S": "1"[m
[32m+[m[32m            },[m
[32m+[m[32m            "universe": {[m
[32m+[m[32m                "S": "DC Comics"[m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "name": {[m
[32m+[m[32m                "S": "Superman"[m
[32m+[m[32m            },[m
[32m+[m[32m            "films": {[m
[32m+[m[32m                "N": "6"[m
[32m+[m[32m            },[m
[32m+[m[32m            "id": {[m
[32m+[m[32m                "S": "4"[m
[32m+[m[32m            },[m
[32m+[m[32m            "universe": {[m
[32m+[m[32m                "S": "DC Comics"[m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "name": {[m
[32m+[m[32m                "S": "Mystique"[m
[32m+[m[32m            },[m
[32m+[m[32m            "films": {[m
[32m+[m[32m                "N": "52"[m
[32m+[m[32m            },[m
[32m+[m[32m            "id": {[m
[32m+[m[32m                "S": "3"[m
[32m+[m[32m            },[m
[32m+[m[32m            "universe": {[m
[32m+[m[32m                "S": "Marvel"[m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "name": {[m
[32m+[m[32m                "S": "Wolverine"[m
[32m+[m[32m            },[m
[32m+[m[32m            "films": {[m
[32m+[m[32m                "N": "26"[m
[32m+[m[32m            },[m
[32m+[m[32m            "id": {[m
[32m+[m[32m                "S": "5"[m
[32m+[m[32m            },[m
[32m+[m[32m            "universe": {[m
[32m+[m[32m                "S": "Marvel"[m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "name": {[m
[32m+[m[32m                "S": "Jessica Jones"[m
[32m+[m[32m            },[m
[32m+[m[32m            "films": {[m
[32m+[m[32m                "N": "39"[m
[32m+[m[32m            },[m
[32m+[m[32m            "id": {[m
[32m+[m[32m                "S": "2"[m
[32m+[m[32m            },[m
[32m+[m[32m            "universe": {[m
[32m+[m[32m                "S": "Marvel"[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m[32m    ],[m
[32m+[m[32m    "Count": 5,[m
[32m+[m[32m    "ScannedCount": 5,[m
[32m+[m[32m    "ConsumedCapacity": null[m
[32m+[m[32m}[m
[32m+[m[32m-- Mais  --[m
\ No newline at end of file[m
[1mdiff --git a/mvnw b/mvnw[m
[1mnew file mode 100644[m
[1mindex 0000000..a16b543[m
[1m--- /dev/null[m
[1m+++ b/mvnw[m
[36m@@ -0,0 +1,310 @@[m
[32m+[m[32m#!/bin/sh[m
[32m+[m[32m# ----------------------------------------------------------------------------[m
[32m+[m[32m# Licensed to the Apache Software Foundation (ASF) under one[m
[32m+[m[32m# or more contributor license agreements.  See the NOTICE file[m
[32m+[m[32m# distributed with this work for additional information[m
[32m+[m[32m# regarding copyright ownership.  The ASF licenses this file[m
[32m+[m[32m# to you under the Apache License, Version 2.0 (the[m
[32m+[m[32m# "License"); you may not use this file except in compliance[m
[32m+[m[32m# with the License.  You may obtain a copy of the License at[m
[32m+[m[32m#[m
[32m+[m[32m#    https://www.apache.org/licenses/LICENSE-2.0[m
[32m+[m[32m#[m
[32m+[m[32m# Unless required by applicable law or agreed to in writing,[m
[32m+[m[32m# software distributed under the License is distributed on an[m
[32m+[m[32m# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY[m
[32m+[m[32m# KIND, either express or implied.  See the License for the[m
[32m+[m[32m# specific language governing permissions and limitations[m
[32m+[m[32m# under the License.[m
[32m+[m[32m# ----------------------------------------------------------------------------[m
[32m+[m
[32m+[m[32m# ----------------------------------------------------------------------------[m
[32m+[m[32m# Maven Start Up Batch script[m
[32m+[m[32m#[m
[32m+[m[32m# Required ENV vars:[m
[32m+[m[32m# ------------------[m
[32m+[m[32m#   JAVA_HOME - location of a JDK home dir[m
[32m+[m[32m#[m
[32m+[m[32m# Optional ENV vars[m
[32m+[m[32m# -----------------[m
[32m+[m[32m#   M2_HOME - location of maven2's installed home dir[m
[32m+[m[32m#   MAVEN_OPTS - parameters passed to the Java VM when running Maven[m
[32m+[m[32m#     e.g. to debug Maven itself, use[m
[32m+[m[32m#       set MAVEN_OPTS=-Xdebug -Xrunjdwp:transport=dt_socket,server=y,suspend=y,address=8000[m
[32m+[m[32m#   MAVEN_SKIP_RC - flag to disable loading of mavenrc files[m
[32m+[m[32m# ----------------------------------------------------------------------------[m
[32m+[m
[32m+[m[32mif [ -z "$MAVEN_SKIP_RC" ] ; then[m
[32m+[m
[32m+[m[32m  if [ -f /etc/mavenrc ] ; then[m
[32m+[m[32m    . /etc/mavenrc[m
[32m+[m[32m  fi[m
[32m+[m
[32m+[m[32m  if [ -f "$HOME/.mavenrc" ] ; then[m
[32m+[m[32m    . "$HOME/.mavenrc"[m
[32m+[m[32m  fi[m
[32m+[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# OS specific support.  $var _must_ be set to either true or false.[m
[32m+[m[32mcygwin=false;[m
[32m+[m[32mdarwin=false;[m
[32m+[m[32mmingw=false[m
[32m+[m[32mcase "`uname`" in[m
[32m+[m[32m  CYGWIN*) cygwin=true ;;[m
[32m+[m[32m  MINGW*) mingw=true;;[m
[32m+[m[32m  Darwin*) darwin=true[m
[32m+[m[32m    # Use /usr/libexec/java_home if available, otherwise fall back to /Library/Java/Home[m
[32m+[m[32m    # See https://developer.apple.com/library/mac/qa/qa1170/_index.html[m
[32m+[m[32m    if [ -z "$JAVA_HOME" ]; then[m
[32m+[m[32m      if [ -x "/usr/libexec/java_home" ]; then[m
[32m+[m[32m        export JAVA_HOME="`/usr/libexec/java_home`"[m
[32m+[m[32m      else[m
[32m+[m[32m        export JAVA_HOME="/Library/Java/Home"[m
[32m+[m[32m      fi[m
[32m+[m[32m    fi[m
[32m+[m[32m    ;;[m
[32m+[m[32mesac[m
[32m+[m
[32m+[m[32mif [ -z "$JAVA_HOME" ] ; then[m
[32m+[m[32m  if [ -r /etc/gentoo-release ] ; then[m
[32m+[m[32m    JAVA_HOME=`java-config --jre-home`[m
[32m+[m[32m  fi[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32mif [ -z "$M2_HOME" ] ; then[m
[32m+[m[32m  ## resolve links - $0 may be a link to maven's home[m
[32m+[m[32m  PRG="$0"[m
[32m+[m
[32m+[m[32m  # need this for relative symlinks[m
[32m+[m[32m  while [ -h "$PRG" ] ; do[m
[32m+[m[32m    ls=`ls -ld "$PRG"`[m
[32m+[m[32m    link=`expr "$ls" : '.*-> \(.*\)$'`[m
[32m+[m[32m    if expr "$link" : '/.*' > /dev/null; then[m
[32m+[m[32m      PRG="$link"[m
[32m+[m[32m    else[m
[32m+[m[32m      PRG="`dirname "$PRG"`/$link"[m
[32m+[m[32m    fi[m
[32m+[m[32m  done[m
[32m+[m
[32m+[m[32m  saveddir=`pwd`[m
[32m+[m
[32m+[m[32m  M2_HOME=`dirname "$PRG"`/..[m
[32m+[m
[32m+[m[32m  # make it fully qualified[m
[32m+[m[32m  M2_HOME=`cd "$M2_HOME" && pwd`[m
[32m+[m
[32m+[m[32m  cd "$saveddir"[m
[32m+[m[32m  # echo Using m2 at $M2_HOME[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# For Cygwin, ensure paths are in UNIX format before anything is touched[m
[32m+[m[32mif $cygwin ; then[m
[32m+[m[32m  [ -n "$M2_HOME" ] &&[m
[32m+[m[32m    M2_HOME=`cygpath --unix "$M2_HOME"`[m
[32m+[m[32m  [ -n "$JAVA_HOME" ] &&[m
[32m+[m[32m    JAVA_HOME=`cygpath --unix "$JAVA_HOME"`[m
[32m+[m[32m  [ -n "$CLASSPATH" ] &&[m
[32m+[m[32m    CLASSPATH=`cygpath --path --unix "$CLASSPATH"`[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# For Mingw, ensure paths are in UNIX format before anything is touched[m
[32m+[m[32mif $mingw ; then[m
[32m+[m[32m  [ -n "$M2_HOME" ] &&[m
[32m+[m[32m    M2_HOME="`(cd "$M2_HOME"; pwd)`"[m
[32m+[m[32m  [ -n "$JAVA_HOME" ] &&[m
[32m+[m[32m    JAVA_HOME="`(cd "$JAVA_HOME"; pwd)`"[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32mif [ -z "$JAVA_HOME" ]; then[m
[32m+[m[32m  javaExecutable="`which javac`"[m
[32m+[m[32m  if [ -n "$javaExecutable" ] && ! [ "`expr \"$javaExecutable\" : '\([^ ]*\)'`" = "no" ]; then[m
[32m+[m[32m    # readlink(1) is not available as standard on Solaris 10.[m
[32m+[m[32m    readLink=`which readlink`[m
[32m+[m[32m    if [ ! `expr "$readLink" : '\([^ ]*\)'` = "no" ]; then[m
[32m+[m[32m      if $darwin ; then[m
[32m+[m[32m        javaHome="`dirname \"$javaExecutable\"`"[m
[32m+[m[32m        javaExecutable="`cd \"$javaHome\" && pwd -P`/javac"[m
[32m+[m[32m      else[m
[32m+[m[32m        javaExecutable="`readlink -f \"$javaExecutable\"`"[m
[32m+[m[32m      fi[m
[32m+[m[32m      javaHome="`dirname \"$javaExecutable\"`"[m
[32m+[m[32m      javaHome=`expr "$javaHome" : '\(.*\)/bin'`[m
[32m+[m[32m      JAVA_HOME="$javaHome"[m
[32m+[m[32m      export JAVA_HOME[m
[32m+[m[32m    fi[m
[32m+[m[32m  fi[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32mif [ -z "$JAVACMD" ] ; then[m
[32m+[m[32m  if [ -n "$JAVA_HOME"  ] ; then[m
[32m+[m[32m    if [ -x "$JAVA_HOME/jre/sh/java" ] ; then[m
[32m+[m[32m      # IBM's JDK on AIX uses strange locations for the executables[m
[32m+[m[32m      JAVACMD="$JAVA_HOME/jre/sh/java"[m
[32m+[m[32m    else[m
[32m+[m[32m      JAVACMD="$JAVA_HOME/bin/java"[m
[32m+[m[32m    fi[m
[32m+[m[32m  else[m
[32m+[m[32m    JAVACMD="`which java`"[m
[32m+[m[32m  fi[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32mif [ ! -x "$JAVACMD" ] ; then[m
[32m+[m[32m  echo "Error: JAVA_HOME is not defined correctly." >&2[m
[32m+[m[32m  echo "  We cannot execute $JAVACMD" >&2[m
[32m+[m[32m  exit 1[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32mif [ -z "$JAVA_HOME" ] ; then[m
[32m+[m[32m  echo "Warning: JAVA_HOME environment variable is not set."[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32mCLASSWORLDS_LAUNCHER=org.codehaus.plexus.classworlds.launcher.Launcher[m
[32m+[m
[32m+[m[32m# traverses directory structure from process work directory to filesystem root[m
[32m+[m[32m# first directory with .mvn subdirectory is considered project base directory[m
[32m+[m[32mfind_maven_basedir() {[m
[32m+[m
[32m+[m[32m  if [ -z "$1" ][m
[32m+[m[32m  then[m
[32m+[m[32m    echo "Path not specified to find_maven_basedir"[m
[32m+[m[32m    return 1[m
[32m+[m[32m  fi[m
[32m+[m
[32m+[m[32m  basedir="$1"[m
[32m+[m[32m  wdir="$1"[m
[32m+[m[32m  while [ "$wdir" != '/' ] ; do[m
[32m+[m[32m    if [ -d "$wdir"/.mvn ] ; then[m
[32m+[m[32m      basedir=$wdir[m
[32m+[m[32m      break[m
[32m+[m[32m    fi[m
[32m+[m[32m    # workaround for JBEAP-8937 (on Solaris 10/Sparc)[m
[32m+[m[32m    if [ -d "${wdir}" ]; then[m
[32m+[m[32m      wdir=`cd "$wdir/.."; pwd`[m
[32m+[m[32m    fi[m
[32m+[m[32m    # end of workaround[m
[32m+[m[32m  done[m
[32m+[m[32m  echo "${basedir}"[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m# concatenates all lines of a file[m
[32m+[m[32mconcat_lines() {[m
[32m+[m[32m  if [ -f "$1" ]; then[m
[32m+[m[32m    echo "$(tr -s '\n' ' ' < "$1")"[m
[32m+[m[32m  fi[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mBASE_DIR=`find_maven_basedir "$(pwd)"`[m
[32m+[m[32mif [ -z "$BASE_DIR" ]; then[m
[32m+[m[32m  exit 1;[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m##########################################################################################[m
[32m+[m[32m# Extension to allow automatically downloading the maven-wrapper.jar from Maven-central[m
[32m+[m[32m# This allows using the maven wrapper in projects that prohibit checking in binary data.[m
[32m+[m[32m##########################################################################################[m
[32m+[m[32mif [ -r "$BASE_DIR/.mvn/wrapper/maven-wrapper.jar" ]; then[m
[32m+[m[32m    if [ "$MVNW_VERBOSE" = true ]; then[m
[32m+[m[32m      echo "Found .mvn/wrapper/maven-wrapper.jar"[m
[32m+[m[32m    fi[m
[32m+[m[32melse[m
[32m+[m[32m    if [ "$MVNW_VERBOSE" = true ]; then[m
[32m+[m[32m      echo "Couldn't find .mvn/wrapper/maven-wrapper.jar, downloading it ..."[m
[32m+[m[32m    fi[m
[32m+[m[32m    if [ -n "$MVNW_REPOURL" ]; then[m
[32m+[m[32m      jarUrl="$MVNW_REPOURL/io/takari/maven-wrapper/0.5.6/maven-wrapper-0.5.6.jar"[m
[32m+[m[32m    else[m
[32m+[m[32m      jarUrl="https://repo.maven.apache.org/maven2/io/takari/maven-wrapper/0.5.6/maven-wrapper-0.5.6.jar"[m
[32m+[m[32m    fi[m
[32m+[m[32m    while IFS="=" read key value; do[m
[32m+[m[32m      case "$key" in (wrapperUrl) jarUrl="$value"; break ;;[m
[32m+[m[32m      esac[m
[32m+[m[32m    done < "$BASE_DIR/.mvn/wrapper/maven-wrapper.properties"[m
[32m+[m[32m    if [ "$MVNW_VERBOSE" = true ]; then[m
[32m+[m[32m      echo "Downloading from: $jarUrl"[m
[32m+[m[32m    fi[m
[32m+[m[32m    wrapperJarPath="$BASE_DIR/.mvn/wrapper/maven-wrapper.jar"[m
[32m+[m[32m    if $cygwin; then[m
[32m+[m[32m      wrapperJarPath=`cygpath --path --windows "$wrapperJarPath"`[m
[32m+[m[32m    fi[m
[32m+[m
[32m+[m[32m    if command -v wget > /dev/null; then[m
[32m+[m[32m        if [ "$MVNW_VERBOSE" = true ]; then[m
[32m+[m[32m          echo "Found wget ... using wget"[m
[32m+[m[32m        fi[m
[32m+[m[32m        if [ -z "$MVNW_USERNAME" ] || [ -z "$MVNW_PASSWORD" ]; then[m
[32m+[m[32m            wget "$jarUrl" -O "$wrapperJarPath"[m
[32m+[m[32m        else[m
[32m+[m[32m            wget --http-user=$MVNW_USERNAME --http-password=$MVNW_PASSWORD "$jarUrl" -O "$wrapperJarPath"[m
[32m+[m[32m        fi[m
[32m+[m[32m    elif command -v curl > /dev/null; then[m
[32m+[m[32m        if [ "$MVNW_VERBOSE" = true ]; then[m
[32m+[m[32m          echo "Found curl ... using curl"[m
[32m+[m[32m        fi[m
[32m+[m[32m        if [ -z "$MVNW_USERNAME" ] || [ -z "$MVNW_PASSWORD" ]; then[m
[32m+[m[32m            curl -o "$wrapperJarPath" "$jarUrl" -f[m
[32m+[m[32m        else[m
[32m+[m[32m            curl --user $MVNW_USERNAME:$MVNW_PASSWORD -o "$wrapperJarPath" "$jarUrl" -f[m
[32m+[m[32m        fi[m
[32m+[m
[32m+[m[32m    else[m
[32m+[m[32m        if [ "$MVNW_VERBOSE" = true ]; then[m
[32m+[m[32m          echo "Falling back to using Java to download"[m
[32m+[m[32m        fi[m
[32m+[m[32m        javaClass="$BASE_DIR/.mvn/wrapper/MavenWrapperDownloader.java"[m
[32m+[m[32m        # For Cygwin, switch paths to Windows format before running javac[m
[32m+[m[32m        if $cygwin; then[m
[32m+[m[32m          javaClass=`cygpath --path --windows "$javaClass"`[m
[32m+[m[32m        fi[m
[32m+[m[32m        if [ -e "$javaClass" ]; then[m
[32m+[m[32m            if [ ! -e "$BASE_DIR/.mvn/wrapper/MavenWrapperDownloader.class" ]; then[m
[32m+[m[32m                if [ "$MVNW_VERBOSE" = true ]; then[m
[32m+[m[32m                  echo " - Compiling MavenWrapperDownloader.java ..."[m
[32m+[m[32m                fi[m
[32m+[m[32m                # Compiling the Java class[m
[32m+[m[32m                ("$JAVA_HOME/bin/javac" "$javaClass")[m
[32m+[m[32m            fi[m
[32m+[m[32m            if [ -e "$BASE_DIR/.mvn/wrapper/MavenWrapperDownloader.class" ]; then[m
[32m+[m[32m                # Running the downloader[m
[32m+[m[32m                if [ "$MVNW_VERBOSE" = true ]; then[m
[32m+[m[32m                  echo " - Running MavenWrapperDownloader.java ..."[m
[32m+[m[32m                fi[m
[32m+[m[32m                ("$JAVA_HOME/bin/java" -cp .mvn/wrapper MavenWrapperDownloader "$MAVEN_PROJECTBASEDIR")[m
[32m+[m[32m            fi[m
[32m+[m[32m        fi[m
[32m+[m[32m    fi[m
[32m+[m[32mfi[m
[32m+[m[32m##########################################################################################[m
[32m+[m[32m# End of extension[m
[32m+[m[32m##########################################################################################[m
[32m+[m
[32m+[m[32mexport MAVEN_PROJECTBASEDIR=${MAVEN_BASEDIR:-"$BASE_DIR"}[m
[32m+[m[32mif [ "$MVNW_VERBOSE" = true ]; then[m
[32m+[m[32m  echo $MAVEN_PROJECTBASEDIR[m
[32m+[m[32mfi[m
[32m+[m[32mMAVEN_OPTS="$(concat_lines "$MAVEN_PROJECTBASEDIR/.mvn/jvm.config") $MAVEN_OPTS"[m
[32m+[m
[32m+[m[32m# For Cygwin, switch paths to Windows format before running java[m
[32m+[m[32mif $cygwin; then[m
[32m+[m[32m  [ -n "$M2_HOME" ] &&[m
[32m+[m[32m    M2_HOME=`cygpath --path --windows "$M2_HOME"`[m
[32m+[m[32m  [ -n "$JAVA_HOME" ] &&[m
[32m+[m[32m    JAVA_HOME=`cygpath --path --windows "$JAVA_HOME"`[m
[32m+[m[32m  [ -n "$CLASSPATH" ] &&[m
[32m+[m[32m    CLASSPATH=`cygpath --path --windows "$CLASSPATH"`[m
[32m+[m[32m  [ -n "$MAVEN_PROJECTBASEDIR" ] &&[m
[32m+[m[32m    MAVEN_PROJECTBASEDIR=`cygpath --path --windows "$MAVEN_PROJECTBASEDIR"`[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# Provide a "standardized" way to retrieve the CLI args that will[m
[32m+[m[32m# work with both Windows and non-Windows executions.[m
[32m+[m[32mMAVEN_CMD_LINE_ARGS="$MAVEN_CONFIG $@"[m
[32m+[m[32mexport MAVEN_CMD_LINE_ARGS[m
[32m+[m
[32m+[m[32mWRAPPER_LAUNCHER=org.apache.maven.wrapper.MavenWrapperMain[m
[32m+[m
[32m+[m[32mexec "$JAVACMD" \[m
[32m+[m[32m  $MAVEN_OPTS \[m
[32m+[m[32m  -classpath "$MAVEN_PROJECTBASEDIR/.mvn/wrapper/maven-wrapper.jar" \[m
[32m+[m[32m  "-Dmaven.home=${M2_HOME}" "-Dmaven.multiModuleProjectDirectory=${MAVEN_PROJECTBASEDIR}" \[m
[32m+[m[32m  ${WRAPPER_LAUNCHER} $MAVEN_CONFIG "$@"[m
[1mdiff --git a/mvnw.cmd b/mvnw.cmd[m
[1mnew file mode 100644[m
[1mindex 0000000..c8d4337[m
[1m--- /dev/null[m
[1m+++ b/mvnw.cmd[m
[36m@@ -0,0 +1,182 @@[m
[32m+[m[32m@REM ----------------------------------------------------------------------------[m
[32m+[m[32m@REM Licensed to the Apache Software Foundation (ASF) under one[m
[32m+[m[32m@REM or more contributor license agreements.  See the NOTICE file[m
[32m+[m[32m@REM distributed with this work for additional information[m
[32m+[m[32m@REM regarding copyright ownership.  The ASF licenses this file[m
[32m+[m[32m@REM to you under the Apache License, Version 2.0 (the[m
[32m+[m[32m@REM "License"); you may not use this file except in compliance[m
[32m+[m[32m@REM with the License.  You may obtain a copy of the License at[m
[32m+[m[32m@REM[m
[32m+[m[32m@REM    https://www.apache.org/licenses/LICENSE-2.0[m
[32m+[m[32m@REM[m
[32m+[m[32m@REM Unless required by applicable law or agreed to in writing,[m
[32m+[m[32m@REM software distributed under the License is distributed on an[m
[32m+[m[32m@REM "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY[m
[32m+[m[32m@REM KIND, either express or implied.  See the License for the[m
[32m+[m[32m@REM specific language governing permissions and limitations[m
[32m+[m[32m@REM under the License.[m
[32m+[m[32m@REM ----------------------------------------------------------------------------[m
[32m+[m
[32m+[m[32m@REM ----------------------------------------------------------------------------[m
[32m+[m[32m@REM Maven Start Up Batch script[m
[32m+[m[32m@REM[m
[32m+[m[32m@REM Required ENV vars:[m
[32m+[m[32m@REM JAVA_HOME - location of a JDK home dir[m
[32m+[m[32m@REM[m
[32m+[m[32m@REM Optional ENV vars[m
[32m+[m[32m@REM M2_HOME - location of maven2's installed home dir[m
[32m+[m[32m@REM MAVEN_BATCH_ECHO - set to 'on' to enable the echoing of the batch commands[m
[32m+[m[32m@REM MAVEN_BATCH_PAUSE - set to 'on' to wait for a keystroke before ending[m
[32m+[m[32m@REM MAVEN_OPTS - parameters passed to the Java VM when running Maven[m
[32m+[m[32m@REM     e.g. to debug Maven itself, use[m
[32m+[m[32m@REM set MAVEN_OPTS=-Xdebug -Xrunjdwp:transport=dt_socket,server=y,suspend=y,address=8000[m
[32m+[m[32m@REM MAVEN_SKIP_RC - flag to disable loading of mavenrc files[m
[32m+[m[32m@REM ----------------------------------------------------------------------------[m
[32m+[m
[32m+[m[32m@REM Begin all REM lines with '@' in case MAVEN_BATCH_ECHO is 'on'[m
[32m+[m[32m@echo off[m
[32m+[m[32m@REM set title of command window[m
[32m+[m[32mtitle %0[m
[32m+[m[32m@REM enable echoing by setting MAVEN_BATCH_ECHO to 'on'[m
[32m+[m[32m@if "%MAVEN_BATCH_ECHO%" == "on"  echo %MAVEN_BATCH_ECHO%[m
[32m+[m
[32m+[m[32m@REM set %HOME% to equivalent of $HOME[m
[32m+[m[32mif "%HOME%" == "" (set "HOME=%HOMEDRIVE%%HOMEPATH%")[m
[32m+[m
[32m+[m[32m@REM Execute a user defined script before this one[m
[32m+[m[32mif not "%MAVEN_SKIP_RC%" == "" goto skipRcPre[m
[32m+[m[32m@REM check for pre script, once with legacy .bat ending and once with .cmd ending[m
[32m+[m[32mif exist "%HOME%\mavenrc_pre.bat" call "%HOME%\mavenrc_pre.bat"[m
[32m+[m[32mif exist "%HOME%\mavenrc_pre.cmd" call "%HOME%\mavenrc_pre.cmd"[m
[32m+[m[32m:skipRcPre[m
[32m+[m
[32m+[m[32m@setlocal[m
[32m+[m
[32m+[m[32mset ERROR_CODE=0[m
[32m+[m
[32m+[m[32m@REM To isolate internal variables from possible post scripts, we use another setlocal[m
[32m+[m[32m@setlocal[m
[32m+[m
[32m+[m[32m@REM ==== START VALIDATION ====[m
[32m+[m[32mif not "%JAVA_HOME%" == "" goto OkJHome[m
[32m+[m
[32m+[m[32mecho.[m
[32m+[m[32mecho Error: JAVA_HOME not found in your environment. >&2[m
[32m+[m[32mecho Please set the JAVA_HOME variable in your environment to match the >&2[m
[32m+[m[32mecho location of your Java installation. >&2[m
[32m+[m[32mecho.[m
[32m+[m[32mgoto error[m
[32m+[m
[32m+[m[32m:OkJHome[m
[32m+[m[32mif exist "%JAVA_HOME%\bin\java.exe" goto init[m
[32m+[m
[32m+[m[32mecho.[m
[32m+[m[32mecho Error: JAVA_HOME is set to an invalid directory. >&2[m
[32m+[m[32mecho JAVA_HOME = "%JAVA_HOME%" >&2[m
[32m+[m[32mecho Please set the JAVA_HOME variable in your environment to match the >&2[m
[32m+[m[32mecho location of your Java installation. >&2[m
[32m+[m[32mecho.[m
[32m+[m[32mgoto error[m
[32m+[m
[32m+[m[32m@REM ==== END VALIDATION ====[m
[32m+[m
[32m+[m[32m:init[m
[32m+[m
[32m+[m[32m@REM Find the project base dir, i.e. the directory that contains the folder ".mvn".[m
[32m+[m[32m@REM Fallback to current working directory if not found.[m
[32m+[m
[32m+[m[32mset MAVEN_PROJECTBASEDIR=%MAVEN_BASEDIR%[m
[32m+[m[32mIF NOT "%MAVEN_PROJECTBASEDIR%"=="" goto endDetectBaseDir[m
[32m+[m
[32m+[m[32mset EXEC_DIR=%CD%[m
[32m+[m[32mset WDIR=%EXEC_DIR%[m
[32m+[m[32m:findBaseDir[m
[32m+[m[32mIF EXIST "%WDIR%"\.mvn goto baseDirFound[m
[32m+[m[32mcd ..[m
[32m+[m[32mIF "%WDIR%"=="%CD%" goto baseDirNotFound[m
[32m+[m[32mset WDIR=%CD%[m
[32m+[m[32mgoto findBaseDir[m
[32m+[m
[32m+[m[32m:baseDirFound[m
[32m+[m[32mset MAVEN_PROJECTBASEDIR=%WDIR%[m
[32m+[m[32mcd "%EXEC_DIR%"[m
[32m+[m[32mgoto endDetectBaseDir[m
[32m+[m
[32m+[m[32m:baseDirNotFound[m
[32m+[m[32mset MAVEN_PROJECTBASEDIR=%EXEC_DIR%[m
[32m+[m[32mcd "%EXEC_DIR%"[m
[32m+[m
[32m+[m[32m:endDetectBaseDir[m
[32m+[m
[32m+[m[32mIF NOT EXIST "%MAVEN_PROJECTBASEDIR%\.mvn\jvm.config" goto endReadAdditionalConfig[m
[32m+[m
[32m+[m[32m@setlocal EnableExtensions EnableDelayedExpansion[m
[32m+[m[32mfor /F "usebackq delims=" %%a in ("%MAVEN_PROJECTBASEDIR%\.mvn\jvm.config") do set JVM_CONFIG_MAVEN_PROPS=!JVM_CONFIG_MAVEN_PROPS! %%a[m
[32m+[m[32m@endlocal & set JVM_CONFIG_MAVEN_PROPS=%JVM_CONFIG_MAVEN_PROPS%[m
[32m+[m
[32m+[m[32m:endReadAdditionalConfig[m
[32m+[m
[32m+[m[32mSET MAVEN_JAVA_EXE="%JAVA_HOME%\bin\java.exe"[m
[32m+[m[32mset WRAPPER_JAR="%MAVEN_PROJECTBASEDIR%\.mvn\wrapper\maven-wrapper.jar"[m
[32m+[m[32mset WRAPPER_LAUNCHER=org.apache.maven.wrapper.MavenWrapperMain[m
[32m+[m
[32m+[m[32mset DOWNLOAD_URL="https://repo.maven.apache.org/maven2/io/takari/maven-wrapper/0.5.6/maven-wrapper-0.5.6.jar"[m
[32m+[m
[32m+[m[32mFOR /F "tokens=1,2 delims==" %%A IN ("%MAVEN_PROJECTBASEDIR%\.mvn\wrapper\maven-wrapper.properties") DO ([m
[32m+[m[32m    IF "%%A"=="wrapperUrl" SET DOWNLOAD_URL=%%B[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32m@REM Extension to allow automatically downloading the maven-wrapper.jar from Maven-central[m
[32m+[m[32m@REM This allows using the maven wrapper in projects that prohibit checking in binary data.[m
[32m+[m[32mif exist %WRAPPER_JAR% ([m
[32m+[m[32m    if "%MVNW_VERBOSE%" == "true" ([m
[32m+[m[32m        echo Found %WRAPPER_JAR%[m
[32m+[m[32m    )[m
[32m+[m[32m) else ([m
[32m+[m[32m    if not "%MVNW_REPOURL%" == "" ([m
[32m+[m[32m        SET DOWNLOAD_URL="%MVNW_REPOURL%/io/takari/maven-wrapper/0.5.6/maven-wrapper-0.5.6.jar"[m
[32m+[m[32m    )[m
[32m+[m[32m    if "%MVNW_VERBOSE%" == "true" ([m
[32m+[m[32m        echo Couldn't find %WRAPPER_JAR%, downloading it ...[m
[32m+[m[32m        echo Downloading from: %DOWNLOAD_URL%[m
[32m+[m[32m    )[m
[32m+[m
[32m+[m[32m    powershell -Command "&{"^[m
[32m+[m		[32m"$webclient = new-object System.Net.WebClient;"^[m
[32m+[m		[32m"if (-not ([string]::IsNullOrEmpty('%MVNW_USERNAME%') -and [string]::IsNullOrEmpty('%MVNW_PASSWORD%'))) {"^[m
[32m+[m		[32m"$webclient.Credentials = new-object System.Net.NetworkCredential('%MVNW_USERNAME%', '%MVNW_PASSWORD%');"^[m
[32m+[m		[32m"}"^[m
[32m+[m		[32m"[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12; $webclient.DownloadFile('%DOWNLOAD_URL%', '%WRAPPER_JAR%')"^[m
[32m+[m		[32m"}"[m
[32m+[m[32m    if "%MVNW_VERBOSE%" == "true" ([m
[32m+[m[32m        echo Finished downloading %WRAPPER_JAR%[m
[32m+[m[32m    )[m
[32m+[m[32m)[m
[32m+[m[32m@REM End of extension[m
[32m+[m
[32m+[m[32m@REM Provide a "standardized" way to retrieve the CLI args that will[m
[32m+[m[32m@REM work with both Windows and non-Windows executions.[m
[32m+[m[32mset MAVEN_CMD_LINE_ARGS=%*[m
[32m+[m
[32m+[m[32m%MAVEN_JAVA_EXE% %JVM_CONFIG_MAVEN_PROPS% %MAVEN_OPTS% %MAVEN_DEBUG_OPTS% -classpath %WRAPPER_JAR% "-Dmaven.multiModuleProjectDirectory=%MAVEN_PROJECTBASEDIR%" %WRAPPER_LAUNCHER% %MAVEN_CONFIG% %*[m
[32m+[m[32mif ERRORLEVEL 1 goto error[m
[32m+[m[32mgoto end[m
[32m+[m
[32m+[m[32m:error[m
[32m+[m[32mset ERROR_CODE=1[m
[32m+[m
[32m+[m[32m:end[m
[32m+[m[32m@endlocal & set ERROR_CODE=%ERROR_CODE%[m
[32m+[m
[32m+[m[32mif not "%MAVEN_SKIP_RC%" == "" goto skipRcPost[m
[32m+[m[32m@REM check for post script, once with legacy .bat ending and once with .cmd ending[m
[32m+[m[32mif exist "%HOME%\mavenrc_post.bat" call "%HOME%\mavenrc_post.bat"[m
[32m+[m[32mif exist "%HOME%\mavenrc_post.cmd" call "%HOME%\mavenrc_post.cmd"[m
[32m+[m[32m:skipRcPost[m
[32m+[m
[32m+[m[32m@REM pause the script if MAVEN_BATCH_PAUSE is set to 'on'[m
[32m+[m[32mif "%MAVEN_BATCH_PAUSE%" == "on" pause[m
[32m+[m
[32m+[m[32mif "%MAVEN_TERMINATE_CMD%" == "on" exit %ERROR_CODE%[m
[32m+[m
[32m+[m[32mexit /B %ERROR_CODE%[m
[1mdiff --git a/pom.xml b/pom.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..e4fd870[m
[1m--- /dev/null[m
[1m+++ b/pom.xml[m
[36m@@ -0,0 +1,89 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project xmlns="http://maven.apache.org/POM/4.0.0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"[m
[32m+[m	[32mxsi:schemaLocation="http://maven.apache.org/POM/4.0.0 https://maven.apache.org/xsd/maven-4.0.0.xsd">[m
[32m+[m	[32m<modelVersion>4.0.0</modelVersion>[m
[32m+[m	[32m<parent>[m
[32m+[m		[32m<groupId>org.springframework.boot</groupId>[m
[32m+[m		[32m<artifactId>spring-boot-starter-parent</artifactId>[m
[32m+[m		[32m<version>2.6.1</version>[m
[32m+[m		[32m<relativePath/> <!-- lookup parent from repository -->[m
[32m+[m	[32m</parent>[m
[32m+[m	[32m<groupId>com.digitalinnovationone</groupId>[m
[32m+[m	[32m<artifactId>heroesApi</artifactId>[m
[32m+[m	[32m<version>0.0.1-SNAPSHOT</version>[m
[32m+[m	[32m<name>heroesApi</name>[m
[32m+[m	[32m<description>Interface de Programação de Aplicativos de armazenamento de heróis com webflux</description>[m
[32m+[m	[32m<properties>[m
[32m+[m		[32m<java.version>1.8</java.version>[m
[32m+[m	[32m</properties>[m
[32m+[m	[32m<dependencies>[m
[32m+[m		[32m<dependency>[m
[32m+[m			[32m<groupId>org.springframework.boot</groupId>[m
[32m+[m			[32m<artifactId>spring-boot-starter-webflux</artifactId>[m
[32m+[m		[32m</dependency>[m
[32m+[m
[32m+[m		[32m<dependency>[m
[32m+[m			[32m<groupId>org.projectlombok</groupId>[m
[32m+[m			[32m<artifactId>lombok</artifactId>[m
[32m+[m			[32m<optional>true</optional>[m
[32m+[m		[32m</dependency>[m
[32m+[m		[32m<dependency>[m
[32m+[m			[32m<groupId>org.springframework.boot</groupId>[m
[32m+[m			[32m<artifactId>spring-boot-starter-test</artifactId>[m
[32m+[m			[32m<scope>test</scope>[m
[32m+[m		[32m</dependency>[m
[32m+[m		[32m<dependency>[m
[32m+[m			[32m<groupId>io.projectreactor</groupId>[m
[32m+[m			[32m<artifactId>reactor-test</artifactId>[m
[32m+[m			[32m<scope>test</scope>[m
[32m+[m		[32m</dependency>[m
[32m+[m		[32m<dependency>[m
[32m+[m			[32m<groupId>org.springdoc</groupId>[m
[32m+[m			[32m<artifactId>springdoc-openapi-webflux-ui</artifactId>[m
[32m+[m			[32m<version>1.5.12</version>[m
[32m+[m		[32m</dependency>[m
[32m+[m
[32m+[m		[32m<dependency>[m
[32m+[m			[32m<groupId>software.amazon.awssdk</groupId>[m
[32m+[m			[32m<artifactId>dynamodb</artifactId>[m
[32m+[m			[32m<version>2.17.99</version>[m
[32m+[m		[32m</dependency>[m
[32m+[m
[32m+[m		[32m<dependency>[m
[32m+[m			[32m<groupId>com.github.derjust</groupId>[m
[32m+[m			[32m<artifactId>spring-data-dynamodb</artifactId>[m
[32m+[m			[32m<version>5.1.0</version>[m
[32m+[m		[32m</dependency>[m
[32m+[m
[32m+[m		[32m<dependency>[m
[32m+[m			[32m<groupId>junit</groupId>[m
[32m+[m			[32m<artifactId>junit</artifactId>[m
[32m+[m			[32m<scope>test</scope>[m
[32m+[m		[32m</dependency>[m
[32m+[m
[32m+[m		[32m<dependency>[m
[32m+[m			[32m<groupId>io.springfox</groupId>[m
[32m+[m			[32m<artifactId>springfox-swagger-ui</artifactId>[m
[32m+[m			[32m<version>3.0.0</version>[m
[32m+[m		[32m</dependency>[m
[32m+[m
[32m+[m	[32m</dependencies>[m
[32m+[m
[32m+[m	[32m<build>[m
[32m+[m		[32m<plugins>[m
[32m+[m			[32m<plugin>[m
[32m+[m				[32m<groupId>org.springframework.boot</groupId>[m
[32m+[m				[32m<artifactId>spring-boot-maven-plugin</artifactId>[m
[32m+[m				[32m<configuration>[m
[32m+[m					[32m<excludes>[m
[32m+[m						[32m<exclude>[m
[32m+[m							[32m<groupId>org.projectlombok</groupId>[m
[32m+[m							[32m<artifactId>lombok</artifactId>[m
[32m+[m						[32m</exclude>[m
[32m+[m					[32m</excludes>[m
[32m+[m				[32m</configuration>[m
[32m+[m			[32m</plugin>[m
[32m+[m		[32m</plugins>[m
[32m+[m	[32m</build>[m
[32m+[m
[32m+[m[32m</project>[m
[1mdiff --git a/postman/Heroes Management - Digital Innovation One.postman_collection.json b/postman/Heroes Management - Digital Innovation One.postman_collection.json[m
[1mnew file mode 100644[m
[1mindex 0000000..38c0c53[m
[1m--- /dev/null[m
[1m+++ b/postman/Heroes Management - Digital Innovation One.postman_collection.json[m	
[36m@@ -0,0 +1,109 @@[m
[32m+[m[32m{[m
[32m+[m	[32m"info": {[m
[32m+[m		[32m"_postman_id": "a1f38dcf-30cb-4533-985a-cabe20515103",[m
[32m+[m		[32m"name": "Heroes Management - Digital Innovation One",[m
[32m+[m		[32m"description": "Development of Application Programming Interface for managing Heroes using Spring WebFlux together with Reactor library.  \nThe AWS DynamoDB database was used locally to store the data.",[m
[32m+[m
[32m+[m		[32m"schema": "https://schema.getpostman.com/json/collection/v2.1.0/collection.json"[m
[32m+[m	[32m},[m
[32m+[m	[32m"item": [[m
[32m+[m		[32m{[m
[32m+[m			[32m"name": "Get All Heroes",[m
[32m+[m			[32m"request": {[m
[32m+[m				[32m"method": "GET",[m
[32m+[m				[32m"header": [],[m
[32m+[m				[32m"url": {[m
[32m+[m					[32m"raw": "http://localhost:8080/heroes",[m
[32m+[m					[32m"protocol": "http",[m
[32m+[m					[32m"host": [[m
[32m+[m						[32m"localhost"[m
[32m+[m					[32m],[m
[32m+[m					[32m"port": "8080",[m
[32m+[m					[32m"path": [[m
[32m+[m						[32m"heroes"[m
[32m+[m					[32m][m
[32m+[m				[32m},[m
[32m+[m				[32m"description": "Demonstrates all the heroes of the universe."[m
[32m+[m			[32m},[m
[32m+[m			[32m"response": [][m
[32m+[m		[32m},[m
[32m+[m		[32m{[m
[32m+[m			[32m"name": "Get heroes by Id",[m
[32m+[m			[32m"protocolProfileBehavior": {[m
[32m+[m				[32m"disableBodyPruning": true[m
[32m+[m			[32m},[m
[32m+[m			[32m"request": {[m
[32m+[m				[32m"method": "GET",[m
[32m+[m				[32m"header": [],[m
[32m+[m				[32m"body": {[m
[32m+[m					[32m"mode": "formdata",[m
[32m+[m					[32m"formdata": [][m
[32m+[m				[32m},[m
[32m+[m				[32m"url": {[m
[32m+[m					[32m"raw": "http://localhost:8080/heroes/",[m
[32m+[m					[32m"protocol": "http",[m
[32m+[m					[32m"host": [[m
[32m+[m						[32m"localhost"[m
[32m+[m					[32m],[m
[32m+[m					[32m"port": "8080",[m
[32m+[m					[32m"path": [[m
[32m+[m						[32m"heroes",[m
[32m+[m						[32m""[m
[32m+[m					[32m][m
[32m+[m				[32m},[m
[32m+[m				[32m"description": "Shows the hero giving the ID number."[m
[32m+[m			[32m},[m
[32m+[m			[32m"response": [][m
[32m+[m		[32m},[m
[32m+[m		[32m{[m
[32m+[m			[32m"name": "Create new hero",[m
[32m+[m			[32m"request": {[m
[32m+[m				[32m"method": "POST",[m
[32m+[m				[32m"header": [],[m
[32m+[m				[32m"body": {[m
[32m+[m					[32m"mode": "raw",[m
[32m+[m					[32m"raw": "{\r\n\"id\":\"5\",\r\n\"name\":\"Flash\",\r\n\"universe\":\"DC Comics\",\r\n\"films\": 7\r\n}",[m
[32m+[m					[32m"options": {[m
[32m+[m						[32m"raw": {[m
[32m+[m							[32m"language": "json"[m
[32m+[m						[32m}[m
[32m+[m					[32m}[m
[32m+[m				[32m},[m
[32m+[m				[32m"url": {[m
[32m+[m					[32m"raw": "http://localhost:8080/heroes",[m
[32m+[m					[32m"protocol": "http",[m
[32m+[m					[32m"host": [[m
[32m+[m						[32m"localhost"[m
[32m+[m					[32m],[m
[32m+[m					[32m"port": "8080",[m
[32m+[m					[32m"path": [[m
[32m+[m						[32m"heroes"[m
[32m+[m					[32m][m
[32m+[m				[32m},[m
[32m+[m				[32m"description": "Hero creation."[m
[32m+[m			[32m},[m
[32m+[m			[32m"response": [][m
[32m+[m		[32m},[m
[32m+[m		[32m{[m
[32m+[m			[32m"name": "Delete hero by ID",[m
[32m+[m			[32m"request": {[m
[32m+[m				[32m"method": "GET",[m
[32m+[m				[32m"header": [],[m
[32m+[m				[32m"url": {[m
[32m+[m					[32m"raw": "http://localhost:8080/heroes/3",[m
[32m+[m					[32m"protocol": "http",[m
[32m+[m					[32m"host": [[m
[32m+[m						[32m"localhost"[m
[32m+[m					[32m],[m
[32m+[m					[32m"port": "8080",[m
[32m+[m					[32m"path": [[m
[32m+[m						[32m"heroes",[m
[32m+[m						[32m"3"[m
[32m+[m					[32m][m
[32m+[m				[32m},[m
[32m+[m				[32m"description": "Hero Exclusion by ID Number."[m
[32m+[m			[32m},[m
[32m+[m			[32m"response": [][m
[32m+[m		[32m}[m
[32m+[m	[32m][m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/src/main/java/com/digitalinnovationone/heroesApi/HeroesApiApplication.java b/src/main/java/com/digitalinnovationone/heroesApi/HeroesApiApplication.java[m
[1mnew file mode 100644[m
[1mindex 0000000..715f8f4[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/digitalinnovationone/heroesApi/HeroesApiApplication.java[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32mpackage com.digitalinnovationone.heroesApi;[m
[32m+[m
[32m+[m[32mimport org.socialsignin.spring.data.dynamodb.repository.config.EnableDynamoDBRepositories;[m
[32m+[m[32mimport org.springframework.boot.SpringApplication;[m
[32m+[m[32mimport org.springframework.boot.autoconfigure.SpringBootApplication;[m
[32m+[m
[32m+[m
[32m+[m[32m@SpringBootApplication[m
[32m+[m[32m@EnableDynamoDBRepositories[m
[32m+[m[32mpublic class HeroesApiApplication {[m
[32m+[m
[32m+[m	[32mpublic static void main(String[] args) {[m
[32m+[m				[32mSpringApplication.run(HeroesApiApplication.class, args);[m
[32m+[m				[32mSystem.out.println("Super poderes com Webflux.");[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/java/com/digitalinnovationone/heroesApi/config/DynamoConfig.java b/src/main/java/com/digitalinnovationone/heroesApi/config/DynamoConfig.java[m
[1mnew file mode 100644[m
[1mindex 0000000..bf0ddfa[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/digitalinnovationone/heroesApi/config/DynamoConfig.java[m
[36m@@ -0,0 +1,48 @@[m
[32m+[m[32mpackage com.digitalinnovationone.heroesApi.config;[m
[32m+[m
[32m+[m[32mimport com.amazonaws.auth.AWSCredentials;[m
[32m+[m[32mimport com.amazonaws.auth.BasicAWSCredentials;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.AmazonDynamoDB;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.AmazonDynamoDBClient;[m
[32m+[m[32mimport org.socialsignin.spring.data.dynamodb.repository.config.EnableDynamoDBRepositories;[m
[32m+[m[32mimport org.springframework.beans.factory.annotation.Value;[m
[32m+[m[32mimport org.springframework.context.annotation.Bean;[m
[32m+[m[32mimport org.springframework.context.annotation.Configuration;[m
[32m+[m[32mimport org.springframework.util.StringUtils;[m
[32m+[m
[32m+[m
[32m+[m[32m@Configuration[m
[32m+[m[32m@EnableDynamoDBRepositories[m
[32m+[m
[32m+[m[32mpublic class DynamoConfig {[m
[32m+[m[32m    @Value("${amazon.dynamodb.endpoint}")[m
[32m+[m[32m    private String amazonDynamoDBEndpoint;[m
[32m+[m
[32m+[m[32m    @Value("${aws_access_key_id}")[m
[32m+[m[32m    private String amazonAWSAccessKey;[m
[32m+[m
[32m+[m[32m    @Value("${aws_secret_access_key}")[m
[32m+[m[32m    private String amazonAWSSecretKey;[m
[32m+[m
[32m+[m[32m    @Bean[m
[32m+[m[32m    @Deprecated[m
[32m+[m[32m    public AmazonDynamoDB amazonDynamoDB() {[m
[32m+[m[32m        AmazonDynamoDB amazonDynamoDB[m
[32m+[m[32m                = new AmazonDynamoDBClient(amazonAWSCredentials());[m
[32m+[m
[32m+[m[32m        if (!StringUtils.isEmpty(amazonDynamoDBEndpoint)) {[m
[32m+[m[32m            amazonDynamoDB.setEndpoint(amazonDynamoDBEndpoint);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        return amazonDynamoDB;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Bean[m
[32m+[m[32m    public AWSCredentials amazonAWSCredentials() {[m
[32m+[m[32m        return new BasicAWSCredentials([m
[32m+[m[32m                amazonAWSAccessKey, amazonAWSSecretKey);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/java/com/digitalinnovationone/heroesApi/config/HeroesData.java b/src/main/java/com/digitalinnovationone/heroesApi/config/HeroesData.java[m
[1mnew file mode 100644[m
[1mindex 0000000..c055504[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/digitalinnovationone/heroesApi/config/HeroesData.java[m
[36m@@ -0,0 +1,68 @@[m
[32m+[m[32mpackage com.digitalinnovationone.heroesApi.config;[m
[32m+[m
[32m+[m[32mimport com.amazonaws.client.builder.AwsClientBuilder;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.AmazonDynamoDB;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.AmazonDynamoDBClientBuilder;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.document.DynamoDB;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.document.Item;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.document.PutItemOutcome;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.document.Table;[m
[32m+[m[32mimport org.springframework.stereotype.Component;[m
[32m+[m
[32m+[m
[32m+[m[32mimport static com.digitalinnovationone.heroesApi.constants.HeroesConstant.ENDPOINT_DYNAMO;[m
[32m+[m[32mimport static com.digitalinnovationone.heroesApi.constants.HeroesConstant.REGION_DYNAMO;[m
[32m+[m
[32m+[m[32m/*https://docs.aws.amazon.com/pt_br/amazondynamodb/latest/developerguide/JavaDocumentAPIItemCRUD.html*/[m
[32m+[m
[32m+[m[32m@Component[m
[32m+[m[32mpublic class HeroesData {[m
[32m+[m
[32m+[m[32m    public static void main(String[] args) throws  NullPointerException{[m
[32m+[m
[32m+[m[32m        AmazonDynamoDB client = AmazonDynamoDBClientBuilder.standard()[m
[32m+[m[32m                .withEndpointConfiguration(new AwsClientBuilder.EndpointConfiguration(ENDPOINT_DYNAMO, REGION_DYNAMO))[m
[32m+[m[32m                .build();[m
[32m+[m[32m        DynamoDB dynamoDB = new DynamoDB(client);[m
[32m+[m
[32m+[m[32m        Table table = dynamoDB.getTable("Heroes_Table");[m
[32m+[m
[32m+[m[32m        Item hero = new Item()[m
[32m+[m[32m                .withPrimaryKey("id", "1")[m
[32m+[m[32m                .withString("name", "Wonder Woman")[m
[32m+[m[32m                .withString("universe", "DC Comics")[m
[32m+[m[32m                .withNumber("films", 59);[m
[32m+[m
[32m+[m[32m        Item hero2 = new Item()[m
[32m+[m[32m                .withPrimaryKey("id", "2")[m
[32m+[m[32m                .withString("name", "Jessica Jones")[m
[32m+[m[32m                .withString("universe", "Marvel")[m
[32m+[m[32m                .withNumber("films", 39);[m
[32m+[m
[32m+[m[32m        Item hero3 = new Item()[m
[32m+[m[32m                .withPrimaryKey("id", "3")[m
[32m+[m[32m                .withString("name", "Mystique")[m
[32m+[m[32m                .withString("universe", "Marvel")[m
[32m+[m[32m                .withNumber("films", 52);[m
[32m+[m
[32m+[m[32m        Item hero4 = new Item()[m
[32m+[m[32m                .withPrimaryKey("id", "4")[m
[32m+[m[32m                .withString("name", "Superman")[m
[32m+[m[32m                .withString("universe", "DC Comics")[m
[32m+[m[32m                .withNumber("films", 6);[m
[32m+[m
[32m+[m[32m        Item hero5 = new Item()[m
[32m+[m[32m                .withPrimaryKey("id", "5")[m
[32m+[m[32m                .withString("name", "Wolverine")[m
[32m+[m[32m                .withString("universe", "Marvel")[m
[32m+[m[32m                .withNumber("films", 26);[m
[32m+[m
[32m+[m[32m        /* Insere item na tabela */[m
[32m+[m[32m        PutItemOutcome outcome = table.putItem(hero);[m
[32m+[m[32m        PutItemOutcome outcome2 = table.putItem(hero2);[m
[32m+[m[32m        PutItemOutcome outcome3 = table.putItem(hero3);[m
[32m+[m[32m        PutItemOutcome outcome4 = table.putItem(hero4);[m
[32m+[m[32m        PutItemOutcome outcome5 = table.putItem(hero5);[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/java/com/digitalinnovationone/heroesApi/config/HeroesTable.java b/src/main/java/com/digitalinnovationone/heroesApi/config/HeroesTable.java[m
[1mnew file mode 100644[m
[1mindex 0000000..96220fe[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/digitalinnovationone/heroesApi/config/HeroesTable.java[m
[36m@@ -0,0 +1,55 @@[m
[32m+[m[32mpackage com.digitalinnovationone.heroesApi.config;[m
[32m+[m
[32m+[m[32mimport com.amazonaws.client.builder.AwsClientBuilder;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.AmazonDynamoDB;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.AmazonDynamoDBClientBuilder;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.document.DynamoDB;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.document.Table;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.model.ScalarAttributeType;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.model.ProvisionedThroughput;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.model.KeyType;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.model.KeySchemaElement;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.model.AttributeDefinition;[m
[32m+[m[32mimport org.socialsignin.spring.data.dynamodb.repository.config.EnableDynamoDBRepositories;[m
[32m+[m[32mimport org.springframework.context.annotation.Configuration;[m
[32m+[m
[32m+[m[32mimport java.util.Arrays;[m
[32m+[m
[32m+[m[32mimport static com.digitalinnovationone.heroesApi.constants.HeroesConstant.ENDPOINT_DYNAMO;[m
[32m+[m[32mimport static com.digitalinnovationone.heroesApi.constants.HeroesConstant.REGION_DYNAMO;[m
[32m+[m
[32m+[m
[32m+[m[32m@Configuration[m
[32m+[m[32m@EnableDynamoDBRepositories[m
[32m+[m[32mpublic class HeroesTable {[m
[32m+[m[32m    public static void main(String[] args) throws NullPointerException {[m
[32m+[m
[32m+[m[32m        AmazonDynamoDB client = AmazonDynamoDBClientBuilder.standard()[m
[32m+[m[32m                .withEndpointConfiguration(new AwsClientBuilder.EndpointConfiguration(ENDPOINT_DYNAMO, REGION_DYNAMO))[m
[32m+[m[32m                .build();[m
[32m+[m
[32m+[m[32m        DynamoDB dynamoDB = new DynamoDB(client);[m
[32m+[m
[32m+[m[32m        String tableName = "Heroes_Table";[m
[32m+[m
[32m+[m[32m        try {[m
[32m+[m[32m            System.out.println("Criando tabela, aguarde...");[m
[32m+[m[32m            Table table = dynamoDB.createTable([m
[32m+[m[32m                    tableName,[m
[32m+[m[32m                    Arrays.asList(new KeySchemaElement("id", KeyType.HASH)[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    Arrays.asList(new AttributeDefinition("id", ScalarAttributeType.S)[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    new ProvisionedThroughput(5L, 5L));[m
[32m+[m[32m            table.waitForActive();[m
[32m+[m[32m            System.out.println("Sucesso " + table.getDescription().getTableStatus());[m
[32m+[m
[32m+[m[32m        }[m
[32m+[m[32m        catch (Exception e) {[m
[32m+[m[32m            System.out.println(e.getMessage());[m
[32m+[m[32m            System.out.println("Não foi possível criar a tabela");[m
[32m+[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/java/com/digitalinnovationone/heroesApi/constants/HeroesConstant.java b/src/main/java/com/digitalinnovationone/heroesApi/constants/HeroesConstant.java[m
[1mnew file mode 100644[m
[1mindex 0000000..b71b91e[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/digitalinnovationone/heroesApi/constants/HeroesConstant.java[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32mpackage com.digitalinnovationone.heroesApi.constants;[m
[32m+[m
[32m+[m[32mpublic class HeroesConstant {[m
[32m+[m
[32m+[m[32m    public static final String HEROES_ENDPOINT_LOCAL="/heroes";[m
[32m+[m[32m    public static final String ENDPOINT_DYNAMO = "http://localhost:8000";[m
[32m+[m[32m    public static final String REGION_DYNAMO= "us-east-1";[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/java/com/digitalinnovationone/heroesApi/controller/HeroesController.java b/src/main/java/com/digitalinnovationone/heroesApi/controller/HeroesController.java[m
[1mnew file mode 100644[m
[1mindex 0000000..d231801[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/digitalinnovationone/heroesApi/controller/HeroesController.java[m
[36m@@ -0,0 +1,64 @@[m
[32m+[m[32mpackage com.digitalinnovationone.heroesApi.controller;[m
[32m+[m
[32m+[m[32mimport com.digitalinnovationone.heroesApi.documents.Heroes;[m
[32m+[m[32mimport com.digitalinnovationone.heroesApi.repository.HeroesRepository;[m
[32m+[m[32mimport com.digitalinnovationone.heroesApi.service.HeroesService;[m
[32m+[m[32mimport org.springframework.http.HttpStatus;[m
[32m+[m[32mimport org.springframework.http.ResponseEntity;[m
[32m+[m[32mimport org.springframework.web.bind.annotation.*;[m
[32m+[m[32mimport reactor.core.publisher.Flux;[m
[32m+[m[32mimport reactor.core.publisher.Mono;[m
[32m+[m[32mimport lombok.extern.slf4j.Slf4j;[m
[32m+[m
[32m+[m[32mimport static com.digitalinnovationone.heroesApi.constants.HeroesConstant.HEROES_ENDPOINT_LOCAL;[m
[32m+[m
[32m+[m
[32m+[m[32m@RestController[m
[32m+[m[32m@Slf4j[m
[32m+[m
[32m+[m[32mpublic class HeroesController {[m
[32m+[m
[32m+[m[32m    HeroesService heroesService;[m
[32m+[m[32m    HeroesRepository heroesRepository;[m
[32m+[m
[32m+[m[32m    private static final org.slf4j.Logger log =[m
[32m+[m[32m            org.slf4j.LoggerFactory.getLogger(HeroesController.class);[m
[32m+[m
[32m+[m[32m    public HeroesController(HeroesService heroesService, HeroesRepository heroesRepository) {[m
[32m+[m[32m        this.heroesService = heroesService;[m
[32m+[m[32m        this.heroesRepository = heroesRepository;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @ResponseStatus(HttpStatus.OK)[m
[32m+[m[32m    @GetMapping(HEROES_ENDPOINT_LOCAL)[m
[32m+[m[32m    public Flux<Heroes> getAllItems() {[m
[32m+[m[32m    log.info("Heróis de todos os universos.");[m
[32m+[m[32m    return heroesService.findAll();[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @GetMapping(HEROES_ENDPOINT_LOCAL + "/{id}")[m
[32m+[m[32m    public Mono<ResponseEntity<Heroes>> findByIdHero(@PathVariable String id) {[m
[32m+[m[32m        log.info("Seleção de um herói pelo número id {}", id);[m
[32m+[m[32m        log.info(id,"id {} Herói inexistente");[m
[32m+[m[32m        return heroesService.findByIdHero(id)[m
[32m+[m[32m                .map((item) -> new ResponseEntity<>(item, HttpStatus.OK))[m
[32m+[m[32m                .defaultIfEmpty(new ResponseEntity<>(HttpStatus.NOT_FOUND));[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @PostMapping(HEROES_ENDPOINT_LOCAL)[m
[32m+[m[32m    @ResponseStatus(HttpStatus.CREATED)[m
[32m+[m[32m    public Mono<Heroes> createHero(@RequestBody Heroes heroes) {[m
[32m+[m[32m        log.info("Criação de um novo herói na tabela {} com número id {}", heroes.getName(), heroes.getId());[m
[32m+[m[32m        return heroesService.save(heroes);[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @DeleteMapping(HEROES_ENDPOINT_LOCAL + "/{id}")[m
[32m+[m[32m    @ResponseStatus(code = HttpStatus.OK)[m
[32m+[m[32m    public Mono<HttpStatus> deleteByIdHero(@PathVariable String id) {[m
[32m+[m[32m        heroesService.deleteByIdHero(id);[m
[32m+[m[32m        log.info("Remoção de herói pelo número id {}", id);[m
[32m+[m[32m        return Mono.just(HttpStatus.OK);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/java/com/digitalinnovationone/heroesApi/documents/Heroes.java b/src/main/java/com/digitalinnovationone/heroesApi/documents/Heroes.java[m
[1mnew file mode 100644[m
[1mindex 0000000..ca76bf7[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/digitalinnovationone/heroesApi/documents/Heroes.java[m
[36m@@ -0,0 +1,75 @@[m
[32m+[m[32mpackage com.digitalinnovationone.heroesApi.documents;[m
[32m+[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.datamodeling.DynamoDBAttribute;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.datamodeling.DynamoDBHashKey;[m
[32m+[m[32mimport com.amazonaws.services.dynamodbv2.datamodeling.DynamoDBTable;[m
[32m+[m[32mimport org.springframework.data.annotation.Id;[m
[32m+[m
[32m+[m[32mimport lombok.Data;[m
[32m+[m[32mimport lombok.Setter;[m
[32m+[m[32mimport lombok.Getter;[m
[32m+[m[32mimport lombok.NoArgsConstructor;[m
[32m+[m
[32m+[m[32m@SuppressWarnings("unused")[m
[32m+[m[32m@Data[m
[32m+[m[32m@Getter[m
[32m+[m[32m@Setter[m
[32m+[m[32m@NoArgsConstructor[m
[32m+[m[32m@DynamoDBTable(tableName = "Heroes_Table")[m
[32m+[m
[32m+[m[32mpublic class Heroes {[m
[32m+[m[32m    public Integer getId() {[m
[32m+[m[32m        return id;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void setId(Integer id) {[m
[32m+[m[32m        this.id = id;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getName() {[m
[32m+[m[32m        return name;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void setName(String name) {[m
[32m+[m[32m        this.name = name;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getUniverse() {[m
[32m+[m[32m        return universe;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void setUniverse(String universe) {[m
[32m+[m[32m        this.universe = universe;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public Integer getFilms() {[m
[32m+[m[32m        return films;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void setFilms(Integer films) {[m
[32m+[m[32m        this.films = films;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Id[m
[32m+[m[32m    @DynamoDBHashKey (attributeName = "id")[m
[32m+[m[32m    private Integer id;[m
[32m+[m
[32m+[m[32m    @DynamoDBAttribute (attributeName = "name")[m
[32m+[m[32m    private String name;[m
[32m+[m
[32m+[m[32m    @DynamoDBAttribute (attributeName = "universe")[m
[32m+[m[32m    private String universe;[m
[32m+[m
[32m+[m[32m    @DynamoDBAttribute (attributeName = "films")[m
[32m+[m[32m    private Integer films;[m
[32m+[m
[32m+[m
[32m+[m[32m    public Heroes(Integer id, String name, String universe, Integer films) {[m
[32m+[m[32m        this.id = id;[m
[32m+[m[32m        this.name = name;[m
[32m+[m[32m        this.universe = universe;[m
[32m+[m[32m        this.films = films;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/src/main/java/com/digitalinnovationone/heroesApi/repository/HeroesRepository.java b/src/main/java/com/digitalinnovationone/heroesApi/repository/HeroesRepository.java[m
[1mnew file mode 100644[m
[1mindex 0000000..1d5d66d[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/digitalinnovationone/heroesApi/repository/HeroesRepository.java[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32mpackage com.digitalinnovationone.heroesApi.repository;[m
[32m+[m
[32m+[m[32mimport com.digitalinnovationone.heroesApi.documents.Heroes;[m
[32m+[m[32mimport org.socialsignin.spring.data.dynamodb.repository.EnableScan;[m
[32m+[m[32mimport org.springframework.data.repository.CrudRepository;[m
[32m+[m[32mimport org.springframework.stereotype.Repository;[m
[32m+[m
[32m+[m
[32m+[m[32m@Repository[m
[32m+[m[32m@EnableScan[m
[32m+[m[32mpublic interface HeroesRepository extends CrudRepository<Heroes, String> {[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/java/com/digitalinnovationone/heroesApi/service/HeroesService.java b/src/main/java/com/digitalinnovationone/heroesApi/service/HeroesService.java[m
[1mnew file mode 100644[m
[1mindex 0000000..99ae319[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/digitalinnovationone/heroesApi/service/HeroesService.java[m
[36m@@ -0,0 +1,40 @@[m
[32m+[m[32mpackage com.digitalinnovationone.heroesApi.service;[m
[32m+[m
[32m+[m[32mimport com.digitalinnovationone.heroesApi.documents.Heroes;[m
[32m+[m[32mimport com.digitalinnovationone.heroesApi.repository.HeroesRepository;[m
[32m+[m[32mimport org.springframework.stereotype.Service;[m
[32m+[m[32mimport reactor.core.publisher.Flux;[m
[32m+[m[32mimport reactor.core.publisher.Mono;[m
[32m+[m
[32m+[m[32m@Service[m
[32m+[m[32mpublic class HeroesService {[m
[32m+[m
[32m+[m[32m    private final HeroesRepository heroesRepository;  //Criação de método[m
[32m+[m
[32m+[m
[32m+[m[32m    public HeroesService(HeroesRepository heroesRepository) {[m
[32m+[m[32m        this.heroesRepository = heroesRepository;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public Flux<Heroes> findAll(){[m
[32m+[m
[32m+[m[32m        return Flux.fromIterable(this.heroesRepository.findAll());[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public Mono<Heroes> findByIdHero(String id){[m
[32m+[m
[32m+[m[32m        return  Mono.justOrEmpty(this.heroesRepository.findById(id));[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public Mono<Heroes> save(Heroes heroes){[m
[32m+[m
[32m+[m[32m        return  Mono.justOrEmpty(this.heroesRepository.save(heroes));[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m    public void deleteByIdHero(String id) {[m
[32m+[m[32m        heroesRepository.deleteById(id);[m
[32m+[m[32m        Mono.just(true);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/resources/application.properties b/src/main/resources/application.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..0030be2[m
[1m--- /dev/null[m
[1m+++ b/src/main/resources/application.properties[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32maws_access_key_id=""[m
[32m+[m[32maws_secret_access_key=""[m
[32m+[m[32mamazon.dynamodb.endpoint=http://localhost:8000[m
[32m+[m[32mspring.autoconfigure.exclude=org.springframework.boot.autoconfigure.jdbc.DataSourceAutoConfiguration[m
[32m+[m[32mspringdoc.swagger-ui.path=/swagger-ui-heroes-reactive-api.html[m
[32m+[m[32mspring.main.allow-bean-definition-overriding=true[m
[32m+[m
[1mdiff --git a/src/test/java/com/digitalinnovationone/heroesApi/HeroesApiApplicationTests.java b/src/test/java/com/digitalinnovationone/heroesApi/HeroesApiApplicationTests.java[m
[1mnew file mode 100644[m
[1mindex 0000000..ff66b00[m
[1m--- /dev/null[m
[1m+++ b/src/test/java/com/digitalinnovationone/heroesApi/HeroesApiApplicationTests.java[m
[36m@@ -0,0 +1,77 @@[m
[32m+[m[32mpackage com.digitalinnovationone.heroesApi;[m
[32m+[m
[32m+[m[32mimport com.digitalinnovationone.heroesApi.repository.HeroesRepository;[m
[32m+[m[32mimport org.junit.Test;[m
[32m+[m[32mimport org.springframework.beans.factory.annotation.Autowired;[m
[32m+[m[32mimport org.springframework.test.web.reactive.server.WebTestClient;[m
[32m+[m[32mimport org.springframework.boot.test.autoconfigure.web.reactive.AutoConfigureWebTestClient;[m
[32m+[m[32mimport org.springframework.boot.test.context.SpringBootTest;[m
[32m+[m[32mimport org.junit.runner.RunWith;[m
[32m+[m[32mimport org.springframework.http.MediaType;[m
[32m+[m[32mimport org.springframework.test.annotation.DirtiesContext;[m
[32m+[m[32mimport org.springframework.test.context.junit4.SpringRunner;[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mimport static com.digitalinnovationone.heroesApi.constants.HeroesConstant.HEROES_ENDPOINT_LOCAL;[m
[32m+[m
[32m+[m[32m@RunWith(SpringRunner.class)[m
[32m+[m[32m@SpringBootTest[m
[32m+[m[32m@AutoConfigureWebTestClient[m
[32m+[m[32m@DirtiesContext[m
[32m+[m
[32m+[m
[32m+[m[32mpublic class HeroesApiApplicationTests {[m
[32m+[m
[32m+[m	[32m@Autowired[m
[32m+[m	[32mWebTestClient webTestClient;[m
[32m+[m
[32m+[m	[32m@Autowired[m
[32m+[m	[32mHeroesRepository heroesRepository;[m
[32m+[m
[32m+[m
[32m+[m	[32m@Test[m
[32m+[m	[32mpublic void getOneHeroById(){[m
[32m+[m
[32m+[m		[32mwebTestClient.get().uri(HEROES_ENDPOINT_LOCAL.concat("/{id}"),"5")[m
[32m+[m				[32m.exchange()[m
[32m+[m				[32m.expectStatus().isOk()[m
[32m+[m				[32m.expectBody();[m
[32m+[m
[32m+[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m	[32m@Test[m
[32m+[m	[32mpublic void getOneHeroNotFound(){[m
[32m+[m
[32m+[m		[32mwebTestClient.get().uri(HEROES_ENDPOINT_LOCAL.concat("/{id}"),"36")[m
[32m+[m				[32m.exchange()[m
[32m+[m				[32m.expectStatus().isNotFound();[m
[32m+[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m
[32m+[m	[32m@Test[m
[32m+[m	[32mpublic void deleteHero(){[m
[32m+[m
[32m+[m		[32mwebTestClient.delete().uri(HEROES_ENDPOINT_LOCAL.concat("/{id}"),"4")[m
[32m+[m				[32m.accept(MediaType.APPLICATION_JSON)[m
[32m+[m				[32m.exchange()[m
[32m+[m				[32m.expectStatus().isNotFound()[m
[32m+[m				[32m.expectBody(Void.class);[m
[32m+[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m	[32m@Test[m
[32m+[m	[32mpublic void getAllHero(){[m
[32m+[m
[32m+[m		[32mwebTestClient.get().uri(HEROES_ENDPOINT_LOCAL)[m
[32m+[m				[32m.accept(MediaType.APPLICATION_JSON)[m
[32m+[m				[32m.exchange()[m
[32m+[m				[32m.expectStatus().isOk()[m
[32m+[m				[32m.expectBody();[m
[32m+[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m[32m}[m
