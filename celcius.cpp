#include <stdio.h>
#include <locale.h>

int main(){
	
	//Escreva um algoritmo que calcule e mostre na tela uma tabela de valores de temperatura em Celsius eFarenheit. A faixa de temperaturas que deve ser mostrada é de 0 a 100 graus Celsius, em intervalos de5 graus.
	
	setlocale (LC_ALL, "portuguese");
	
	int i,cel, fah, tabela;
	
	printf("Qual valor de celcius para farenheit você quer passar: ");
	scanf("%d", &cel);
	
	for(i = cel; i <= 100; i = i + 5){
		printf("%d / %d \n",i, (i * 9/5) + 32);
	}
		
	return 0;
	
}
