#include<stdio.h>
#define SUCESSO 0

    int main(int argc, char ** argv){
    int a, b, c, media;
printf("Insira o valor das tres notas para calcular a nota ponderada: \n");
scanf("%i %i %i", &a, &b, &c);
media= (a*3 + b*3 + c*4) / 10;
printf("O valor da media eh: %i", media);

    return SUCESSO;
}