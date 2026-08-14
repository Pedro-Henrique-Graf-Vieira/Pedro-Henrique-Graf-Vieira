#include<stdio.h>
#include<math.h>

float distancia, consumo, preco, pedagios, passageiros, quantidade_combustivel, combustivel, custo_total, custo_passageiro;
 
main(){
	printf("Qual e a distancia que sera percorrida em KM?\n");
	scanf("%f", &distancia);
	
	printf("Qual o consumo por KM/L?\n");
	scanf("%f", &consumo);
	
	printf("Qual e o preco do combustivel?\n");
	scanf("%f", &preco);
	
	printf("Valor dos pedagios?\n");
	scanf("%f", &pedagios);
	
	printf("Numero de passageiros:");
	scanf("%f", &passageiros);
         	
	quantidade_combustivel = distancia / consumo;
	combustivel = quantidade_combustivel * preco;
	custo_total = combustivel + pedagios;
	custo_passageiro = custo_total / passageiros;
	
	printf("A quantidade de combustivel necessaria sera de:%.1f\nO custo do combustivel sera de:%.2f\nO custo total da viagem de:%.2f\nE o custo por passageiro de:%.2f", quantidade_combustivel, combustivel, custo_total, custo_passageiro);
	
	
	
}
