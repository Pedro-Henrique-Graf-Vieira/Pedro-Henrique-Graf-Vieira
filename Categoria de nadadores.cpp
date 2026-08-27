#include<stdio.h>

int idade;

main(){
	printf("Qual e a idade do nadador?\n");
	scanf("%i", &idade);
	
	if( idade >= 18){
		printf("O nadador esta na categoria ->Adulto");
	}
	else if ( idade < 5){
		printf("O nadador esta na categoria ->Fraldinha");
	}
	else if ( idade >=5 && idade <= 7){
		printf("O nadador esta na categoria ->Pre-Mirim");
	} 
	else if ( idade >= 8 && idade <=11){
		printf("O nadador esta na categoria ->Mirim");
	}
	else if ( idade >= 12 && idade <= 13){
		printf("O nadador esta na categoria ->Infantil");
	}
	else if ( idade >= 14 && idade <= 17){
		printf("O nadador esta na categoria ->Juvenil");
	}
	return 0;
}
