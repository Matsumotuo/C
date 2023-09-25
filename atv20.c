#include <stdio.h>
#include <locale.h>

/* Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário (a senha válida éo número 2009).
Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deveser mostrado na tela e deve ser solicitada uma nova senha até
que ela seja válida.
Caso contrário deveser mostrado na tela a mensagem "ACESSO PERMITIDO" junto com um número de vezes que a senhafoi informada.*/

int main(){

    int senha, tentativas;
    tentativas = 0;

    do
    {
        printf("Informe a senha: ");
        scanf("%d", &senha);

        if ( senha != 2009)
        {
            printf("\n ACESSO NEGADO \n");
        }
        
        tentativas++;

    } while (senha != 2009);

    printf("# ACESSO PERMITIDO #");
    printf(" \n A senha foi informada %d \n", tentativas);

    return 0;
}