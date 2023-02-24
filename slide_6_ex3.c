#include<stdio.h>
#define SUCESSO 0

   int main(int argc, char ** argv){
   int numero, maior, menor, vazio;
vazio = 0;
printf("Insira quantos numeros quiser, termine com 0: \n");
scanf("%i", &numero);
   if (numero != 0){
      maior = numero;
      menor = numero;
      }else{
        printf("voce nao digitou nenhum numero");
        vazio = 1;
         } while (numero != 0){
         if (numero > maior){
            maior = numero;
               } else if(numero < menor){
               menor = numero;
               }
               scanf("%i", &numero);
               }
   if (vazio != 1){
      printf("O maior numero eh: %i \ne o menor eh: %i", maior, menor);
   }
    
   return SUCESSO;
}