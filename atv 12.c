#include <stdio.h>
#include <locale.h>

//Escreva um algoritmo que mostre o resultado da série: 1/100 + 2/99 + 3/98 + 4/97 + ... + 100/1.Resultado: 423.93

int main(){

    int i;
    float numerador, denominador, soma;
    numerador = 1;
    denominador = 100;
    soma = 0;


    for (i = 1; i <= 100; i++)
    {
        soma += numerador /denominador;
        numerador++;
        denominador--;
    }
    
    printf("O resultado é de %.2f", soma);

    return 0;
}