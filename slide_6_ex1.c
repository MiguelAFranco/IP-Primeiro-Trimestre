#include<stdio.h>
#define SUCESSO 0

    int main(int argc, char ** argv){
    int numero, fatorial, i;
fatorial = 1;
printf("Insira um numero para ter seu fatorial: ");
scanf("%i", &numero);
    for ( i = numero; i >= 1; i--){
        fatorial *= i;
    }
printf("o fatorial do numero eh: %i", fatorial);

    return SUCESSO;
}