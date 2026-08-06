#include <stdio.h>

int quantidade;
float valor;
float total;

main(){
	printf("Quantidade do produto:");
	scanf("%i", &quantidade);
	
	printf("Qual e o valor unitario do produto?\n");
	scanf("%f", &valor);
	
	total = quantidade * valor;
	
	printf("O total a ser pago sera de:%f", total);
	
	
}
