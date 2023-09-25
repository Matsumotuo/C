#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "portuguese");

    int opcao;

    printf("\n# MENU PRINCIPAL # \n");
    printf("[1]Inserir \n");
    printf("[2]Excluir \n");
    printf("[3]Copiar \n");
    printf("[4]Sair \n");
    scanf("%d", &opcao);

    do
    {
        switch (opcao)
        {
        case 1: 
            printf("[1]Inserir \n");
            scanf("%d", &opcao);
            break;
        case 2: 
            printf("[2]Excluir \n");
            scanf("%d", &opcao);
            break;
        case 3: 
            printf("[3]Copiar \n");
            scanf("%d", &opcao);
            break;
        case 4: 
            printf("Volter sempre :) \n");
            scanf("%d", &opcao);
            break;        
        default:
            break;
        }
    } while (opcao != 5);
    
    
    return 0;
}