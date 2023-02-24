#include<stdio.h>
#define SUCESSO 0

    int main(int argc, char ** argv){
    float a, b, c, d, e, f, divisor, media;
printf("Insira seis numeros para calcular a media: \n");
scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
divisor= 6;
media= (a + b + c + d + e + f)/divisor;
printf("O resultado da media eh %f: \n", media);

    return SUCESSO;
}