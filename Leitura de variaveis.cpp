#include <stdio.h>
int a,b,c,menor,medio,maior;
main(){
	printf("Digite o primeiro valor:\n");
	scanf("%i", &a);
	printf("Digite o segundo valor:\n");
	scanf("%i", &b);
	printf("Digite o terceiro valor:\n");
	scanf("%i", &c);
	if( (a<b) && (a<c) ){
		menor = a;
	} else if( (b<a) && (b<c) ){
		menor = b;
	}else{
		menor = c;
	} 
	if(menor == a){
		if(b<c){
			medio = b;
			maior = c;
		}else{
			medio = c;
			maior = b;
		}
	}else if(menor == b){
		if(a<c){
			medio = a;
			maior = c;
		}else{
			medio = c;
			maior = a;
		}
	}else{
		if(a<b){
			medio = a;
			maior = b;
		}else{
			medio = b;
			maior = a;
		}
	}
	printf("\nMenor: %i", menor);
	printf("\nMedio: %i", medio);
	printf("\nMaior: %i", maior);
	
}
