#include<stdio.h>
#define SUCESSO 0

    int main(int argc, char ** argv){
    int Fahr;
    float Celsius;
    for ( Fahr = 50; Fahr <= 150; Fahr += 1){
    Celsius = (Fahr-32) / 1.8;
    printf("Se F = %i entao C = %.1f \n",Fahr, Celsius);
    }

    return SUCESSO;
}