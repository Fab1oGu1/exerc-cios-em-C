#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define max 10

typedef struct {
  char letras[max];
  int numeros;
}
placas_de_veiculos;

typedef struct {
  char marca[max], modelo[max];
  int ano_de_fabricacao;
  placas_de_veiculos placas;
  int contador;
}
dados_do_veiculo;

dados_do_veiculo veiculo[max] = {0};

int main() {

  int cont = 0, escolha = 0, x = 0, ano_fabricacao = 0, cont2 = 0;
  veiculo[x].contador = 0;
  char modelo[max];

  strcpy(veiculo[x].marca, "NULL");
  strcpy(veiculo[x].modelo, "NULL");
  strcpy(veiculo[x].placas.letras, "NULL");
  veiculo[x].placas.numeros = 0;
  veiculo[x].ano_de_fabricacao = 0;

  do {
    printf("----------------- Menu -------------------------------\n\n");
    printf("Escolha: 1 = Inserir novo veiculo \n 2 = Listar os veiculos cadastrados \n 3 = Listar os veiculos filtrando-se por"
      "ano de fabricacao e/ou Listar os veiculos com o ano de fabricação acima de um certo valor especificado pelo usuario"
      "\n 4 = Listar os veiculos filtrando-se pelo modelo \n 5 = Sair : \n\n");
    scanf("%d", & escolha);

    switch (escolha) {
    case 1:
      if (veiculo[x].contador <= 9) {
        veiculo[x].contador = x;

        printf("A placa de um carro eh no seguinte formato xxx-yyyy, onde x denota as letras e y os numeros: \n");
        printf("\n\n Digite a marca do veiculo: ");
        scanf("%s%*c", & veiculo[x].marca);
        printf("\n Digite o modelo do veiculo: ");
        scanf("%s%*c", & veiculo[x].modelo);
        printf("\n Digite o ano de fabricacao do veiculo: ");
        scanf("%d%*c", & veiculo[x].ano_de_fabricacao);
        printf("\n PLACA - digite as letras: \n");
        scanf("%s%*c", & veiculo[x].placas.letras);
        printf("\n Agora, digite os numeros: \n");
        scanf("%d", & veiculo[x].placas.numeros);

        x++;

      } else {
        printf("O limite de cadastro é de 10 carros.");
      }
      break;
      system("cls");

    case 2:
      for (int i = 0; i < x; i++) {
        printf("\n\n Marca [%d]: %s ", i, veiculo[i].marca);
        printf("\n Modelo [%d]: %s ", i, veiculo[i].modelo);
        printf("\n Ano de fabricacao[%d]: %d ", i, veiculo[i].ano_de_fabricacao); 
        printf("\n Placa [%d]: %s-%d \n", i, veiculo[i].placas.letras, veiculo[i].placas.numeros);

      }
      break;

    case 3:

      printf("Digite o ano: \n\n");
      scanf("%d", & ano_fabricacao);
      for (int i = 0; i < x; i++) {
        if (veiculo[i].ano_de_fabricacao >= ano_fabricacao) {
          printf("\n\n Marca [%d]: %s ", i, veiculo[i].marca);
          printf("\n Modelo [%d]: %s ", i, veiculo[i].modelo);
          printf("\n Ano de fabricacao[%d]: %d ", i, veiculo[i].ano_de_fabricacao);
          printf("\n Placa [%d]: %s-%d \n", i, veiculo[i].placas.letras, veiculo[i].placas.numeros);

          cont2++;
        }
      }

      if (cont2 == 0) {
        printf("\nNao existe veiculos com esse ano = %d de fabricacao\n", ano_fabricacao);
      } else {
        cont2 = 0;
      }

      break;

    case 4:

      printf("\n Digite o modelo: \n");
      scanf("%s", & modelo);

      for (int i = 0; i < x; i++) {
        if (strcmp(veiculo[i].modelo, strlwr(modelo)) == 0) {
          printf("\n\n Marca [%d]: %s ", i, veiculo[i].marca);
          printf("\n Modelo [%d]: %s ", i, veiculo[i].modelo);
          printf("\n Ano de fabricacao[%d]: %d ", i, veiculo[i].ano_de_fabricacao);
          printf("\n Placa [%d]: %s-%d \n", i, veiculo[i].placas.letras, veiculo[i].placas.numeros);

          cont2++;
        }
      }

      if (cont2 == 0) {
        printf("\n Nao foi encontrado o modelo = %s", modelo);
      } else {
        cont2 = 0;
      }

      break;

    default:
      printf("\n\n Digite uma opcao valida.\n\n");
    }

  }
  while (escolha != 5);

  return 0;
}