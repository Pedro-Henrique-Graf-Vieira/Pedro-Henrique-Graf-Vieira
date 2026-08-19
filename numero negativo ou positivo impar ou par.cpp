#include<stdio.h>
#include<math.h>

int num;

main(){
	printf("Digite um numero:");
	scanf("%i", &num);
	
	if(num > 0){
		printf("Este numero e positivo");
	}
	else{
		printf("Este numero e negativo");
	}
	if(num % 2 == 0){
		printf(" e par");
	}
	else{
		printf(" e impar");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
