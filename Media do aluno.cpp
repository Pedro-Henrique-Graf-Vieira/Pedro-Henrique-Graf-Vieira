#include<stdio.h>

float nota1, nota2, nota3, nota4;
float media;

int main(void){
	printf("Digite a primeira nota:");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota:");
	scanf("%f", &nota2);
	
	printf("Digite a terceira nota:");
	scanf("%f", &nota3);
	
    printf("Digite a quarta nota:");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if(media >= 6){
		printf("Parabens voce foi aprovado e a sua media foi de:%.1f", media);
	}
	else{
		printf("Voce nao foi aprovado a sua media foi de:%.1f", media);
	}
	
	
	
	
	
	
	
	return 0;
}
