#include<stdio.h>
#include<math.h>

float salario_bruto;
float percentual_iinss;
float percentual_iir;
float salario_liquido;
float desconto_iinss;
float desconto_iir;

main(){
	
	printf("Qual e o salario bruto?\n");
	scanf("%f", &salario_bruto);
 	
 	printf("Qual e o percentual do IINSS?\n");
 	scanf("%f", &percentual_iinss);
 	
 	printf("Qual e o percentual do IIR?\n");
 	scanf("%f", &percentual_iir);
 	
 	desconto_iinss = (salario_bruto * percentual_iinss) / 100;
 	desconto_iir = (salario_bruto * percentual_iir) / 100;
 	
 	salario_liquido = salario_bruto - (desconto_iinss + desconto_iir);
 	
 	printf("O desconto do IINSS foi de: %.2f\nO desconto do IIR foi de: %.2f\nO salario liquido e de: %.2f", desconto_iinss, desconto_iir, salario_liquido);
 	
	
	return 0;
}
