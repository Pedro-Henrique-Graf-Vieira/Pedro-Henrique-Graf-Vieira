#include <stdio.h>
#include <math.h>

float celsius;
float fahrenheit;

main(){
	printf("Qual e a temperatura em Fahrenheit?\n");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) * (5.0 / 9.0);
	
	printf("A temperatura em Celsius e:%.1f", celsius);
	
	
	
	
	
}
