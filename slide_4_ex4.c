#include<stdio.h>
#define SUCESSO 0

    int main(int argc, char ** argv){
    int salarioAt, porcAum;
    int salarioAum;
printf("Insira o valor atual do salario do funcionario: \n");
scanf("%i", &salarioAt);
printf("Insira o valor da porcentagem do aumento: \n");
scanf("%i", &porcAum);
salarioAum= salarioAt + (salarioAt/100)*porcAum;
printf("O valor do salario com aumento eh %i:", salarioAum);

    return SUCESSO;
}
