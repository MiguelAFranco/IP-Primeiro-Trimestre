#include<stdio.h>
#define SUCESSO 0

    int main(int argc, char ** argv){
    int a, b, c, d, e, soma;
printf("Insira cinco numeros para soma-los: \n");
scanf("%i %i %i %i %i", &a, &b, &c, &d, &e);
soma= a + b + c + d + e;
printf("O resultado da soma eh: %i", soma);

     return SUCESSO;
}


