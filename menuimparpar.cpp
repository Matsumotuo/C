#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "portuguese");
		
	int opcao, num,quantpar,quantimpar,sair;
	quantpar = 0;
	quantimpar = 0;
	
	do{
		printf("\n  # MENU PRICIPAL # \n");
		printf("\n [1] Digitar n�mero par [1] \n");
		printf("\n [2] Digitar n�mero �mpar [2]\n");
		printf("\n [3] Sair [3] \n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1: 
				do{
					printf("Informe n�mero par: ");
					scanf("%d", &num);
				}while(num % 2 != 0);
				quantpar++;
				break;		
			case 2:
				do{
					printf("Informe n�mero impar: ");
					scanf("%d", &num);
				}while(num % 3 != 0);
				quantimpar++;
				break;
				
		}
		
	}while(opcao != 3);
	
	printf(" A quantidade de n�meros pares � de %d e a de �mpares � %d ",quantpar,quantimpar);
	
	
	return 0;
}
