#include<stdio.h>
#define SUCESSO 0

    int main(int argc, char ** argv){
    float peso, altura, pesoIdeal;
    char sexo;
printf("Insira sua altura, peso e sexo (masculino e feminino(M F)):\n");
scanf("%f %f %c", &altura, &peso, &sexo);
    if (sexo == 'F'){
        pesoIdeal = (62.1 * altura) - 44.7;
        } else if(sexo == 'M'){
        pesoIdeal = (72.7 * altura) - 58;
            } else{
            printf("caracter para sexo invalido");
            }
    if (peso < pesoIdeal){
        printf("Voce esta abaixo do peso");
        } else if( peso > pesoIdeal ){
            printf("Voce esta acima do peso");
            } else{
                printf("Voce no peso ideal");
    }

    return SUCESSO;
}