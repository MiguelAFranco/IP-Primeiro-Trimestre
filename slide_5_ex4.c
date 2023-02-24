#include<stdio.h>
#define SUCESSO 0
int main(int argc, char ** argv)
{
        int numero1, numero2, resultado;
        char sinal;
printf("Insira dois numeros:\n");
scanf("%i %i", &numero1, &numero2);
printf("Digite a operacao desejada: (+ - * /)\n");
scanf(" %c", &sinal);
    switch (sinal) {
        case '+':
            resultado = numero1 + numero2;
            printf("O resultado da soma eh: %i", resultado);
        break;
        case '-':
            resultado = numero1 - numero2;
            printf("O resultado da subtracao eh: %i", resultado);
        break;
        case '*':
            resultado = numero1 * numero2;
            printf("O resultado da multiplicacao eh: %i", resultado);
        break;
        case '/':
            resultado = numero1 / numero2;
            printf("O resultado da divisao eh: %i", resultado); // fiz a divisão inteira pois não fois especificado nem o tipo de variável nem a operação com a /
        break;
        default:
            printf("operador invalido");
        break;
    }
    
    return SUCESSO;
}