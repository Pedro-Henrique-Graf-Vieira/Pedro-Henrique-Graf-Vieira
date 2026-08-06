#include <stdio.h>

float valor;
float comissao;

main(){
	printf("Qual e o valor total da venda?\n");
	scanf("%f", &valor);
	
	comissao = valor * 0.05;
	
	printf("A comissao total do vendedor sera de:%f", comissao);
	
	
}
