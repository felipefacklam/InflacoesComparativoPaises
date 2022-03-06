#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"
//VARIÁVEIS
  char br[]="Brasil",ar[]="Argentina",uy[]="Uruguay",py[]="Paraguai";
  float inflacao_br[4]={6.09, 11.11, 13.62, 16.91};
  float inflacao_ar[4]={7.92, 9.98, 6.27, 11.30};
  float inflacao_uy[4]={12.26, 8.90, 9.40, 12.56};
  float inflacao_py[4]={6.95, 10.90, 14.75, 15.92};
  struct dados_do_pais{
  char nome[10];
  float inflacao[4];
  };
  struct dados_do_pais pais_1, pais_2;

  //PAIS_1
  void opcaoPais_1(int opcao){
    switch(opcao){
    case 1 :
      //BRASIL 
      strcpy(pais_1.nome, br);
      strcpy(pais_1.inflacao, inflacao_br);
    break;
    
    case 2 :
      //ARGENTINA
      strcpy(pais_1.nome, ar);
      strcpy(pais_1.inflacao, inflacao_ar);
    break;

    case 3 :
      //URUGUAI
      strcpy(pais_1.nome, uy);
      strcpy(pais_1.inflacao, inflacao_uy);
    break;

    case 4 :
      //PARAGUAI
      strcpy(pais_1.nome, py);
      strcpy(pais_1.inflacao, inflacao_py);
    break;

    case 5 :
      //NOVO PAIS
      while (getchar() != '\n'); //limpa 'lixo' dos scansf anteriores
      printf("\nInforme o nome do País: ");
      fgets(pais_1.nome, 10, stdin);
      for (int i = 0; i < 4; i++){
        printf("Informe a infalação(%) do %dº Trimestre de 2021: ", i+1);
        scanf("%f", &pais_1.inflacao[i]);
      }
    break;

    case 6 :
      //EXIT
      printf("Programa encerrado.");
      system("clear");
      exit(0);
    break;  
    }
  }
  //PAIS_2
  void opcaoPais_2(int opcao){
    switch(opcao){
    case 1 :
      //BRASIL 
      strcpy(pais_2.nome, br);
      strcpy(pais_2.inflacao, inflacao_br);
    break;
    
    case 2 :
      //ARGENTINA
      strcpy(pais_2.nome, ar);
      strcpy(pais_2.inflacao, inflacao_ar);
    break;

    case 3 :
      //URUGUAI
      strcpy(pais_2.nome, uy);
      strcpy(pais_2.inflacao, inflacao_uy);
    break;

    case 4 :
      //PARAGUAI
      strcpy(pais_2.nome, py);
      strcpy(pais_2.inflacao, inflacao_py);
    break;

    case 5 :
      //NOVO PAIS
      while (getchar() != '\n'); //limpa 'lixo' dos scansf anteriores
      printf("\nInforme o nome do País: ");
      fgets(pais_2.nome, 10, stdin);
      for (int i = 0; i < 4; i++){
        printf("Informe a inflação(%) do %dº Trimestre de 2021: ", i+1);
        scanf("%f", &pais_2.inflacao[i]);
      }
    break;

    case 6 :
      //EXIT
      printf("Programa encerrado.");
      system("clear");
      exit(0);
    break;
    }
  }
  //CASE 1 - CALCULA DIFERENÇA TRI/TRI
  float diferencaPorTri(float *vet, float *vet_2, int tamanho){
    for(int i=0; i<4; i++){
      vet[i] = vet[i] - vet_2[i];
      printf("\n%dº Trimestre: \n", i+1);
      printf("%s teve inflação de %.2f%% em relação a(ao) %s.\n", pais_1.nome, vet[i], pais_2.nome);
      }
  }
  // ESCOLHE COMO COMPARAR COM SWITCH CASE
  void opcaoComparar(int opcao){
    switch (opcao){
      case 1 : //CADA CASE CHAMA UMA FUNÇÃO
      diferencaPorTri(&pais_1.inflacao, &pais_2.inflacao, 4);
      exit(0);
      break;
      
      case 2 :
      calcAcum(&pais_1.inflacao, &pais_2.inflacao, 4);
      break;

      case 3 :
        system("clear");
        printf("Programa encerrado.");
        exit(0);
      break;
    }
  }

  void calcAcum(float *vet, float *vet_2, int tamanho){
    float numIndice_1=1, numIndice_2=1, inflaAcum_1, inflaAcum_2, dif_acum;
    //CALCULA PAIS_2 ----------------------------------
    //converte para num indice
    for (int i = 0; i < tamanho; i++){
      vet[i] = (vet[i]/100) + 1;
      numIndice_1 *= vet[i];    
    }
    inflaAcum_1 = (numIndice_1 - 1)*100;
    //CALCULA PAIS_2 ----------------------------------
    //converte para num indice
    for (int i = 0; i < tamanho; i++){
      vet_2[i] = (vet_2[i]/100) + 1;
      numIndice_2 *= vet_2[i];    
    }
    inflaAcum_2 = (numIndice_2 - 1)*100;
    system("clear");
    //PRINTA ACUMULADO ANUAL DE CADA PAIS
    /*printf("\nAcumulado anual do(a) %s: %2.f%%\n", pais_1.nome, inflaAcum_1);
    printf("Acumulado anual do(a) %s: %2.f%%\n", pais_2.nome, inflaAcum_2);*/
    dif_acum = inflaAcum_1 - inflaAcum_2; //calcula diferença
    printf("%s teve inflação de %.2f%% em relação a(ao) %s.\n", pais_1.nome, dif_acum, pais_2.nome);
    }




