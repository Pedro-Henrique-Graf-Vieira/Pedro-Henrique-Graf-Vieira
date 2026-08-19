#include<stdio.h>
#include<math.h>

float numero, modulo;

main(){
	printf("Informe um numero:");
	scanf("%f", &numero);
	
	if(numero < 0){
		modulo = numero * (-1);
		printf("O modulo do numero e:%.0f", modulo);
	
	}
	else{
		printf("O modulo do numero e:%.0f", numero);
	}
	

	
	return 0;
}
