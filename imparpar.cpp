#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "portuguese");
		
	int opcao, num,quantpar,quantimpar;
	quantpar = 0;
	quantimpar = 0;
	
	do{
		printf("\n  # MENU PRICIPAL # \n");
		printf("\n [1] Digitar número par [1] \n");
		printf("\n [2] Digitar número ímpar [2]\n");
		printf("\n [3] Sair [3] \n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1: 
				do{
					printf("Informe número par: ");
					scanf("%d", &num);
				}while(num % 2 != 0);
				quantpar++;
				break;		
			case 2:
				do{
					printf("Informe número impar: ");
					scanf("%d", &num);
				}while(num % 2 == 0);
				quantimpar++;
				break;
				
		}
		
	}while(opcao != 3);
	
	printf(" A quantidade de números pares é de %d e a de ímpares é %d ",quantpar,quantimpar);
	
	
	return 0;
}