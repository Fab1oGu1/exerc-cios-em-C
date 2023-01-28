# exerc-cios-em-C
Exercícios de linguagem C (graduação UNA - Ciência da Computação).

1) Em linguagens de programação estruturadas, tal como a linguagem C/C++ temos a possibilidade de organizar as informações a serem manipuladas sob dois aspectos: organização homogênea e organização heterogênea. No viés homogêneo, todas as informações, possuidoras de um único tipo de dados, estão dispostas em uma estrutura denominada vetor. E, por sua vez, no viés heterogêneo, as informações, podendo possuir tipagens distintas, estão armazenadas em estruturas de dados denominadas como “struct”.

Com base nisso, suponha que é necessário armazenar informações relacionadas à veículos, totalizando, no máximo, 10 veículos. Para cada veículo, deverão ser fornecidos os seguintes dados:

- marca do veículo

- modelo - ano de fabricação

- placa (formato XXX-YYYY; onde X denota as letras e Y denota os números da placa).

O sistema deverá oferecer, ao usuário, as seguintes funcionalidades:

- Listar os veículos cadastrados;

- Inserir um novo veículo;

- Listar os veículos filtrando-se por ano de fabricação;

- Listar os veículos com o ano de fabricação acima de um certo valor especificado pelo usuário

. - Listar os veículos filtrando-se pelo modelo.

O sistema deverá armazenar os veículos ordenados pelo ano de fabricação, ou seja, ao inserir um novo veículo, este deve ser inserido em ordem crescente de ano de fabricação.

Referência DEITEL, P. J.; DEITEL, H. C: Como Programar. 6. ed. São Paulo: Pearson Prentice Hall, 2011. [Recurso eletrônico, Biblioteca Virtual Universitári


2) Para a realização desta atividade, suponha a necessidade de cadastrar clientes de uma loja. Por ser uma loja nova e com produtos inovadores, pouco se sabe do mercado a ser atingido, sendo assim, não se sabe a quantidade de clientes poderão ser cadastrados. Estima-se, inicialmente, em 10 clientes. Cada cliente terá os seguintes
campos:

- nome (suponha um nome com, no máximo, 30 caracteres)

- ano de nascimento

- montante de gastos realizados no mês (quanto o clinte pagou em suas compras dentro do mês corrente)

Para tanto, o sistema deverá oferecer as seguintes funcionalidades:

- incluir um novo cliente

- remover cliente - atualizar o montante de compras do cliente realizadas no mês corrente

- zerar todos os montantes de compras por ocasião da virada de mês

- listar o cliente melhor comprador

- exibir um montante de compras de um cliente específico.

O programa deverá, ainda, prever a situação que a quantidade de clientes a ser cadastrados supere a previsão inicial. Neste caso, quando o espaço de memória destinado a receber dados dos clientes estiver cheia, deve-se ampliar esse espaço - sempre em blocos de 10.

Poste o código, implementado em C, em seu portfólio.

Bons Estudos!

Referência DEITEL, P. J.; DEITEL, H. C: Como Programar. 6. Ed. São Paulo: Pearson Prentice Hall, 2011. [Recurso eletrônico, Biblioteca Virtual Universitária]

GARCIA, F. D. Ponteiro em C: Alocação Dinâmica de Memória. Publicado em 08/01/2016. Disponível em <https://www.embarcados.com.br/ponteiro-em-c-alocacao-dinamica/>. Acesso em 05/07/2019.