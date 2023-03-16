#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){

	setlocale(LC_ALL,"portuguese");
	
	float temp_fr, temp_cl;
		
	printf("Qual é a temperatura em Fahrenheit: ");
	scanf("%f", &temp_fr);
	
	temp_cl = ((temp_fr-32) /9) *5;
	
	printf("%.2f Fahrenheit em Celsius é %.2f", temp_fr, temp_cl);
	
	return 0;
}
