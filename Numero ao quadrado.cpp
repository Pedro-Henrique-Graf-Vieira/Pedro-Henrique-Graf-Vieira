#include <stdio.h>
#include <math.h>

int numero;
int quadrado;

main(){
	printf("Qual e o numero inteiro?\n");
	scanf("%i", &numero);
	
	quadrado = powf(numero, 2);
	
	printf("O numero %i ao quadrado e: %i", numero, quadrado);
	
	
}
