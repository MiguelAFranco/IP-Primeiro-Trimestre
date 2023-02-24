#include<stdio.h>
#define SUCESSO 0

      int main(int argc, char ** argv){
      int dia;
printf("Insira o numero do dia da semana:\n");
scanf("%i", &dia);
   switch (dia){
      case  1:
         printf("Correspondente ao domingo");
      break;
      case  2:
         printf("Correspondente a segunda-feira");
      break;
      case  3:
         printf("Correspondente a terca-feira");
      break;
      case  4:
         printf("Correspondente a quarta-feira");
      break;
      case  5:
         printf("Correspondente a quinta-feira");
      break;
      case  6:
         printf("Correspondente a sexta-feira");
      break;
      case  7:
         printf("Correspondente a sabado");
      break;
      default:
         printf("Dia da semana invalido");
      break;
   }

      return SUCESSO;
}