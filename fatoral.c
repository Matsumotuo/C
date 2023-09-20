// Escreva um algoritmo que calcule o fatorial de um número positivo qualquer. Por exemplo, se onúmero for 5, o resultado será 120 (5 * 4 * 3 * 2 * 1 = 120). É importante obsevar que o fatorial donúmero 0 é igual a 1.
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale (LC_ALL, "portuguese");

    int i,num;
    int fatorial = 1;


    printf("Escreva o número que deseja fatorar: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        printf("%d! = %d \n", num, fatorial *= i);
    }
    
    return 0;
}