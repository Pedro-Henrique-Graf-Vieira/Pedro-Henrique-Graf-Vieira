#include <stdio.h>

int vara;
int varb;

main(){
	printf("Qual e o valor da variavel A?\n");
	scanf("%i", &vara);
	
	printf("Qual e o valor da variavel B?\n");
	scanf("%i", &varb);
	
	vara, varb = varb, vara;
	
	
	printf("O valor da variavel A e:%i \nO valor da variavel B e:%i", varb, vara);
	
	
	
	
	
}
