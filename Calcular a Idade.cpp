#include <stdio.h>

int idade;
int ano1 = 2026;
int ano2;
int subtracao;

main(){
	printf("\nQual ano voce nasceu?:\n");
	scanf("%i", &ano2);
	subtracao = ano1 - ano2;
	printf("\nSua idade e:%i\n", subtracao);
		
}
