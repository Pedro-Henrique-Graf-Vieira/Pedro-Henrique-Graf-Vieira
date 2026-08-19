#include<stdio.h>
#include<math.h>

float conta_de_luz;

main(){
	printf("Qual foi o seu gasto com a conta de luz?\n");
	scanf("%f", &conta_de_luz);
	
	if(conta_de_luz > 50){
		printf("Voce esta gastando muito");
	}
	else{
		printf("Seu gasto foi normal");
	}
	
	
	return 0;
}
