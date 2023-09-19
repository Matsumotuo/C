#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	int i, termina, tabuada, comec;
	
	printf("Mostrar a tabuada de: ");
	scanf("%d", &tabuada);
	
	printf("Começar por: ");
	scanf("%d", &comec);
	
	printf("Terminar em: ");
	scanf("%d", &termina);
		
	for(i = comec; i <= termina; i++){
		printf(" %d * %d = %d \n",comec, i, tabuada*i);
	}
		
	return 0;
	
}
