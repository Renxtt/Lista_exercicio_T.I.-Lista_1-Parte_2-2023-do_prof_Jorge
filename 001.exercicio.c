#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int nub,nub2,nub3;
	
	printf("Qual é o seus trés Número dando espaço entre eles?: ");
	scanf("%d %d %d", &nub, &nub2, &nub3);
	
	if(nub>nub2&&nub>nub3){
		printf("O maior Numero é %d", nub);	
	}else if(nub2>nub&&nub2>nub3){
		printf("O maior Numero é %d", nub2);	
	}else if(nub3>nub&&nub3>nub2){
		printf("O maior Numero é %d", nub3);
	}
	
	return 0;
}
