#include<stdio.h>
#define SUCESSO 0

    int main(int argc, char ** argv){
    int numero, fatorial = 1, i;
    float soma_inversos = 0;
printf("Insira dois numeros para saber o inverso das suas fatorais: ");
scanf("%i", &numero);
    for ( i = 1; i <= numero; i++){
        fatorial *= i;
        soma_inversos += 1.0 / fatorial;
    }
printf("A soma do inverso dos fatoriais eh: %f", soma_inversos);

    return SUCESSO;
}