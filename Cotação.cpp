#include <stdio.h>
 
 float br;
 float eua = 5.15; 
 float multiplicacao;
 
 main(){
 	printf("\nQual e o valor?\n", br);
    scanf("%f", br);
    multiplicacao = br * eua;
    printf("\nO valor em dolar e: %f\n", multiplicacao);
}
