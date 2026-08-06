#include <stdio.h>
#include <math.h>

float celsius;
float fahrenheit;

main(){
	printf("Qual e a temperatura em Celsius?\n");
	scanf("%f", &celsius);
	
	fahrenheit = (9 * celsius + 160) / 5;
	
	printf("A temperatura em Fahrenheit e:%.1f", fahrenheit);
	
	
	
	
	
}
