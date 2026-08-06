#include <stdio.h>

int latao;
float cobre;
float zinco;

main(){
	printf("Quantidade total de latao:\n");
	scanf("%i", &latao);
	
	cobre = latao * 0.7;
	zinco = latao * 0.3;
	
	printf("A quantidade exata de cobre e zinco necessarias sao respectivamente de:\n %f\n %f", cobre, zinco);
	
	
}
