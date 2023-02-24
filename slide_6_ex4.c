#include<stdio.h>
#define SUCESSO 0

    int main(int argc, char ** argv){
    int numero_termos , termo_atual, antecessor, i;
    termo_atual = 1;
    antecessor = 1;
printf("Insira a quantidade de termos da serie de Fibonacci que deseja: ");
scanf("%i", &numero_termos);
    if (numero_termos >= 1){
        printf("1\n");
    } for (i = 2; i <= numero_termos; i++){
        printf("%i \n", termo_atual);
            termo_atual += antecessor;
            antecessor = termo_atual - antecessor;
    }

    return SUCESSO;
}