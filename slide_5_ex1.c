#include<stdio.h>
#define SUCESSO 0

    int main(int argc, char ** argv){
    int numero, resto_divisao_2;
printf("Insira um numero para saber se eh par ou impar: ");
scanf("%i", &numero);
resto_divisao_2 = numero % 2;
  if (resto_divisao_2 == 0){
    printf("o numero eh par");
    } else{
      printf("o numero eh impar");
      }

    return SUCESSO;
}