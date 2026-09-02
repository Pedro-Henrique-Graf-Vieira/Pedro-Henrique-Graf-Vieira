#include<stdio.h>
char time1[100], time2[100];
int gols1, gols2;


main(){
	printf("\nDigite o nome do time 1:\n");
	fflush(stdin);
	fgets(time1, 100, stdin);
	
	
	printf("Quantos gols o primeiro time fez?\n");
	scanf("%i", &gols1);
	
	printf("\nDigite o nome do time 2:\n");
	fflush(stdin);
	fgets(time2, 100, stdin);
	
	printf("Quantos gols o segundo time fez?\n");
	scanf("%i", &gols2);
	
	if (gols1 > gols2){
		printf("O vencedor e %s", time1);
	}else if(gols2 > gols1){
		printf("O vencedor e %s", time2);
	}else{
		printf("O jogo deu empate");
	}
	
	
	return 0;
}
