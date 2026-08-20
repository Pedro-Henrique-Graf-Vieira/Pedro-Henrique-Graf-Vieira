#include<stdio.h>

char tipo;
int tanque;
float total;

int main(void){
	
	printf("Qual e o tipo do carro A-Alcool, G-Gasolina?\n");
	scanf("%c", &tipo);
	
	printf("Qual e a capacidade do tanque?\n");
	scanf("%i", &tanque);
	
	if(tipo == 'G'){
		total = 6.50 * tanque;
	}
	else{
		total = 4.50 * tanque;	
	}
	printf("O valor total sera de:%.2f", total);
	
	
	
	
	
	
	return 0;
}

