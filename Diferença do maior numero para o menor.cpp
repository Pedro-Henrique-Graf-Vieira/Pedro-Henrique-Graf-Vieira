#include<stdio.h>

int num1, num2, diferenca;

int main(void){
	printf("Digite o primeiro numero:");
	scanf("%i", &num1);
	
	printf("Digite o segundo numero");
	scanf("%i", &num2);
	
	if(num1 > num2){
		diferenca = num1 - num2;
	}
	else{
		diferenca = num2 - num1;
	}
	printf("A diferenca do maior numero para o menor e de:%i", diferenca);
	
	
	return 0;
}
