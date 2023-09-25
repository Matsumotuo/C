#include <stdio.h>
#include <locale.h>

//Escreva um algoritmo que mostre o resultado dos primeiros 20 termos da série: 1/1 + 3/2 + 5/4 + 7/8 +... Resultado: 6.00.

int main(){

    int i;
    float soma, numerador, denominador;
    numerador = 1;
    denominador = 1;
    soma = 0;

    for (i = 1; i < 20; i++)
    {
        soma += numerador / denominador;
        numerador += 2;//para somar + 2 no numerador
        denominador *= 2;//para multiplicar mais 2 para o denominador   
    }
    


    printf("o resutado é %.2f",soma);

    return 0;
} 