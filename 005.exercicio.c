#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL,"portuguese");
	
	float pre, v, tx,tem;
	
	
	printf("Qual � o Valor de Tempo de atrazo: ");
	scanf("%f", &tem);
	printf("Qual � O valor da presta��o a se pagar: ");
	scanf("%f", &v);
	tx=1000;
	pre=v+(v*(tx/100)*tem);
	printf("\n\n\n\n\nTempo: %.2f\n\nValor: %.2f\n\nPresta��o: %.2f", tem, v, pre);
	return 0;
	
}
