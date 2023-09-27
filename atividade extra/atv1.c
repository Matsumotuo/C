#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float esfera, limpeza, cabo, quebrado;
    int quantidade;

    quantidade =0;
    esfera = 0; 
    limpeza = 0; 
    cabo = 0; 
    quebrado = 0;

    do
    {
        printf("\n [1] Necessita da esfera \n");
        printf("\n [2] Necessita de limpeza \n");
        printf("\n [3] Necessita troca de cabo ou conector \n");
        printf("\n [4] Quebrado ou inutilizado \n");
        scanf("%d", &quantidade);

        switch (quantidade)
        {
        case 1: esfera++; break;
        case 2: limpeza++; break;
        case 3: cabo++; break;
        case 4: quebrado++; break;
        default:
            break;
        }
    } while (quantidade != 0);
    
    quantidade = esfera + limpeza + cabo + quebrado;

    printf("Quantidade de mouses: %d",quantidade);
    printf("\n Necessita da esfera: %.0f (%.0f%%) ",esfera,  esfera/quantidade * 100);
    printf("\n Necessita da limpeza: %.0f (%.0f%%) ",limpeza,  limpeza/quantidade * 100);

    return 0;
}