#include<stdio.h>
#define SUCESSO 0
      int main(int argc, char ** argv){
      int a, b, c, ehTriangulo;
printf("Insira tres comprimentos:\n");
scanf("%i %i %i", &a, &b, &c);
ehTriangulo = a < b + c && b < a + c && c < a + b;
   if (ehTriangulo == 0){
      printf("Eh impossivel formar um triangulo com esses valores");
      } else{
         printf("Eh possivel formar um triangulo com esses valores");
         }

   return SUCESSO;
}