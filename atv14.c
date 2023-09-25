#include <stdio.h>

//Escreva um algoritmo que mostre o resultado dos primeiros 50 termos da série: 1000/1 - 997/2 + 994/3- 991/4 + ... Resultado: 685.30

int main(){

    int i;
    float soma, numerador, denominador;
    numerador = 1000;//definir o valor do numerador ou denominador para a conta dar certo
    denominador = 1;
    soma = 0;

    for (i = 1; i <= 50; i++)
    {
        if (i % 2 != 0)//é modulo de 2, para que seja um numero impar diferente de 0
        {
            soma += numerador/denominador;
        }
        else{
            soma -= numerador/denominador;
        }
        numerador -= 3;
        denominador += 1;
    }
    
    printf("Resultado eh de %.2f", soma);

    return 0;
}