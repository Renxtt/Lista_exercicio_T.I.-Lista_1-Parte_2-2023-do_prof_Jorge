#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int nub,nub2,nub3;
	
	printf("Qual � o seus tr�s N�mero dando espa�o entre eles?: ");
	scanf("%d %d %d", &nub, &nub2, &nub3);
	
	if(nub>nub2&&nub>nub3){
		printf("O maior Numero � %d", nub);	
	}else if(nub2>nub&&nub2>nub3){
		printf("O maior Numero � %d", nub2);	
	}else if(nub3>nub&&nub3>nub2){
		printf("O maior Numero � %d", nub3);
	}
	
	return 0;
}
