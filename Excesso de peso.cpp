#include<stdio.h>

float p, e , m;

main(){
	printf("Qual e o peso total dos peixes?\n");
	scanf("%f", &p);
	
	if( p > 50){
		e = p - 50;
		m = e * 4;
		printf("Teve um excesso de %.2fkg e Joao tera que pagar %.2f$ de multa", e, m);
	}
	else{
		printf("Nao houve excesso de peso");
	}
	return 0;
}
