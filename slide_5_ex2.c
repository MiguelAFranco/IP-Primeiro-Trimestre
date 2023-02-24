#include<stdio.h>
#define SUCESSO 0

    int main(int argc, char ** argv){
    int numero1, numero2;
printf("Insira dois numeros para saber qual o maior: \n ");
scanf("%i %i", &numero1, &numero2);
  if (numero1 > numero2){
    printf("O maior eh: %i", numero1);
    } else if(numero2 > numero1){
      printf("O maior eh: %i", numero2);
      } else{
        printf("Os numeros sao iguais");
        }

    return SUCESSO;
}