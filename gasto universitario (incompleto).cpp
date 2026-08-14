#include<stdio.h>
#include<math.h>

float aluguel, alimentacao, transporte, internet, lazer, material_academico;
float gasto_mensal, gasto_anual, gasto_diario, percentual_aluguel;

main(){
	
	printf("Valor do aluguel:");
	scanf("%f", &aluguel);
	
	printf("Valor gasto para alimentacao: ");
	scanf("%f", &alimentacao);
	
	printf("Valor gasto para transporte: ");
	scanf("%f", &transporte);
	
	printf("Valor da internet: ");
	scanf("%f", &internet);
	
	printf("Valor gasto em lazer: ");
	scanf("%f", &lazer);
	
	printf("Valor gasto em materiais academicos: ");
	scanf("%f", &material_academico);
	
	gasto_mensal = aluguel + alimentacao + transporte + internet + lazer + material_academico;
	gasto_anual = gasto_mensal * 12;
	gasto_diario = gasto_mensal / 30;
	percentual_aluguel = (aluguel / gasto_mensal) * 100;
	
	printf("O gasto mensal sera de:%.2f\nO gasto anual sera de:%.2f\nO gasto medio diario de:%.2f\nO percentual do aluguel em cima dos gastos gerais vai ser de:%.1f%%", gasto_mensal, gasto_anual, gasto_diario, percentual_aluguel);
	
	
	
	
	
	
	return 0;
}
