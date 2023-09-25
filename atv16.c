#include <stdio.h>

/*Escreva um algoritmo que forneça quantos números devem existir em sequência a partir do 1 (1, 2, 3,4,...) /para que a sua soma ultrapasse o valor 100 o mínimo possível.*/

int main(){

    int num, soma;
    num = 0; //Total acumulado da sequência
    soma = 0; //Número atual da sequência

    while(soma <=100)// Continue enquanto a soma total não ultrapassar 100
    {   
        num++; // Vá para o próximo número
        soma += num; 
        
    }

        printf("O resultado é igual a %d", num);

    return 0;
}