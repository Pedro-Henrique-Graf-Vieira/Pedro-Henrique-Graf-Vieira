#include<stdio.h>

int Quantidade;
float ValorTotal;

int main(void){
	printf("Qual e a quantidade de macas?\n");
	scanf("%i", &Quantidade);
	
	if(Quantidade >= 12 ){
		ValorTotal = Quantidade  * 1;
	}
	else{
		ValorTotal = Quantidade * 1.30;
	}
	printf("O valor a ser pago e de:%.2f", ValorTotal);
	
	
	
	
	
	return 0;
}
