#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

int main(void) {
  int opcao;
  system("clear");
  printf("\nMERCOSUL - COMPARATIVO DE INFLAÇÕES 2021\n\n");
  //PARTE 1 ---------------------------------ESCOLHER PAÍSES
  do {
    printf("\nEscolha o PRIMEIRO país para comparar: \n");
    printf("  Brasil     -   (Digite 1)\n");
    printf("  Argentina  -   (Digite 2)\n");
    printf("  Uruguai    -   (Digite 3)\n");
    printf("  Paraguai   -   (Digite 4)\n");
    printf("  Outro      -   (Digite 5)\n");
    printf("  Sair       -   (Digite 6)\n");
    scanf("%d", &opcao);
    }while(opcao<1 || opcao>6);

    opcaoPais_1(opcao);

  do {
    printf("\nEscolha o SEGUNDO país para comparar: \n");
    printf("  Brasil     -   (Digite 1)\n");
    printf("  Argentina  -   (Digite 2)\n");
    printf("  Uruguai    -   (Digite 3)\n");
    printf("  Paraguai   -   (Digite 4)\n");
    printf("  Outro      -   (Digite 5)\n");
    printf("  Sair       -   (Digite 6)\n");
    scanf("%d", &opcao);
    }while(opcao<1 || opcao>6);

    opcaoPais_2(opcao);
    system("clear");
    //PARTE 2 ---------------------------------COMPARAR
    do {
      printf("\nCOMPARAR:\n");
      printf("\tTrimestre por Trimestre     -   (Digite 1)\n");
      printf("\tInflação Acumulada (Anual)  -   (Digite 2)\n");
      printf("\tSair                        -   (Digite 3)\n");
      scanf("%d", &opcao);
  
    }while(opcao < 0 || opcao > 5);
  
    opcaoComparar(opcao);
    
  return 0;
}