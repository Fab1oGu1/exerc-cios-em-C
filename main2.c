#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define NOME 30

typedef struct clientes {
  char nome[NOME];
  int anoNascimento;
  float gastosMes;
  int contador;

}
cliente;

cliente cli[NOME] = {0};

int main() {
  cliente * ptr_cli;
  int escolha = 0, tamanho, posicao;
  posicao = 0;
  float melhor_comprador = 0, novo_gasto = 0;
  int ler = 0;
  cli[posicao].contador = 0;
  char nome[NOME];
  char atualizar_gastos;
  int i = 0;

  do {
    printf("**********MENU DE ESCOLHA**********");
    printf("\n\n 1 = incluir um novo cliente \n 2 = remover cliente \n 3 = exibir cliente especifico \n"
      " 4 = zerar gastos \n 5 = melhor comprador \n 6 = atualizar montante de gastos \n 7 = Sair \n\n");
    scanf("%d", & escolha);

    switch (escolha) {

    case 1:
      printf("\n Quantos clientes quer adicionar? \n");
      scanf("%d", & tamanho);

      for (int i = 0; i < tamanho; i++) {
        printf("\n Entre com o nome: ");
        scanf("%s", cli[i].nome);
        printf("\n Entre com o ano de nascimento: ");
        scanf("%d", & cli[i].anoNascimento);
        printf("\n Entre com os gastos desse mes: ");
        scanf("%f", & cli[i].gastosMes);
      }

      printf("\n Deseja adicionar mais 10 clientes? \n 0 = nao e 1 = sim\n");
      scanf("%d", & ler);

      if (ler == 1) {
        ptr_cli = & cli[posicao];
        ptr_cli = (cliente * ) malloc(10 * sizeof(cliente));

        for (i = 0; i < 10; i++) {
          printf("\n Entre com o nome: ");
          scanf("%s", cli[i].nome);
          printf("\n Entre com o ano de nascimento: ");
          scanf("%d", & cli[i].anoNascimento);
          printf("\n Entre com os gastos desse mes: ");
          scanf("%f", & cli[i].gastosMes);
        }
      } else if (ler == 0) {
        break; // Voltar ao menu
      }

      break;
      system("cls");

    case 2: // Nao sei se está correto.

      printf("\n Digite o nome do cliente que deseja remover: \n\n");
      scanf("%s%*c", nome);

      for (i = 0; i <= NOME; i++) {
        if (strcmp(nome, cli[i].nome) == 0) {
          posicao = i;

          for (int j = i; i < posicao - 1; j++) {
            cli[j] = cli[j + 1];
          }
          posicao--;
        }

      }

      printf("\n Cliente %s foi deletado(a)\n", nome);

      break;
      system("cls");

    case 3:
      //Exibir clientes:
      printf("\n Digite o nome do cliente que deseja visualizar: \n");
      scanf("%s%*c", nome);

      for (i = 0; i <= 30; i++) {
        if (strcmp(nome, cli[i].nome) == 0) {
          printf("\n Cliente encontrado! ");
          posicao = i;
        } else {
          posicao = -1;
        }

        if (posicao == i) {
          printf("\n Nome = %s", nome);
          printf("\n Ano de Nacimento = %d", cli[posicao].anoNascimento);
          printf("\n Gastos nesse mes = %f \n", cli[posicao].gastosMes);

        }
      }

      break;

    case 4:
      printf("\n Digite o nome do cliente que deseja zerar os gastos do mes: \n\n");
      scanf("%s%*c", nome);

      for (i = 0; i < 30; i++) {
        if (strcmp(nome, cli[i].nome) == 0) {
          posicao = i;
        }

        cli[posicao].gastosMes = 0;
      }

      printf("\n Os gastos do cliente %s foram deletados\n", nome);

      break;
      system("cls");

    case 5:

      for (i = 0; i < tamanho; i++) {
        if (cli[i].gastosMes > melhor_comprador) {
          melhor_comprador = cli[i].gastosMes;
        }

        printf("\n Melhor comprador:");
        printf("\n Nome = %s", cli[i].nome);
        printf("\n Ano de Nacimento = %d", cli[i].anoNascimento);
        printf("\n Gastos nesse mes = %f \n", melhor_comprador);
        printf("\n");
      }

      break;
      system("cls");

    case 6:

      printf("\n Digite o nome do cliente que deseja atualizar os gastos: \n");
      scanf("%s%*c", nome);

      for (i = 0; i <= tamanho; i++) {
        if (strcmp(nome, cli[i].nome) == 0) {
          printf("\n Cliente encontrado! ");
          posicao = i;
        } else {
          posicao = -1;
        }

        if (posicao == i) {
          printf("\n Nome = %s", nome);
          printf("\n Gastos nesse mes = %f \n", cli[posicao].gastosMes);
        }

        printf("\n Deseja acrescentar (digite ''+'') ou diminuir (digite ''-'') os gastos?\n");
        scanf("%s", & atualizar_gastos);

        if (atualizar_gastos == '+') {
          printf("\n Digite o valor que quer acrecentar: ");
          scanf("%f", & novo_gasto);
          novo_gasto += cli[posicao].gastosMes;
          break;
        } else if (atualizar_gastos == '-') {
          float x;
          printf("\n Digite o valor que quer abater: ");
          scanf("%f", & x);
          novo_gasto = cli[posicao].gastosMes - x;
          break;
        }

      }
      cli[posicao].gastosMes = novo_gasto; // Atualiza o valor na struct cliente

      printf("\n Novo gasto = %f\n", novo_gasto);
      printf("\n");
      break;
      printf("cls");

    default:
      printf("\n Opcao incorreta!");
      printf("\n");

    }

    free(ptr_cli);
    ptr_cli = NULL;

  }
  while (escolha != 7);

  return 0;
}