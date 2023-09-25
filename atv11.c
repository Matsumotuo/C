#include <stdio.h>
// Escreva um algoritmo que escreva os 10 primeiros termos da série 1, 3, 9, 27,
int main(){

    int num, i;
    num = 1;
    
    for (i = 1; i <= 10; i++)
    {
        printf(" %d ", num*= 3);
    }

    return 0;
}