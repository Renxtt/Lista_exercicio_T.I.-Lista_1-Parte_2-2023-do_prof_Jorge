#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

main(void){
	setlocale(LC_ALL,"portuguese");
	
	float tabu, loc, loc2,  resu;
	
	printf("Insirá o Número que você quer colocar a sua Tabuada: ");
	scanf("%f", &tabu);
	
	loc2=1;
	while(loc2<=50){
		resu=loc2*tabu;
		printf("\n%.1f * %.1f = %.1f",loc2,tabu, resu);
		Sleep(25);
		loc2=loc2+1;			
	}
	
	
	
	return 0;
}
