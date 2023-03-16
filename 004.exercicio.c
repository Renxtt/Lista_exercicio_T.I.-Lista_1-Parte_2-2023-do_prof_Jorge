#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	float pi, r, d,area;
	
	printf("Qual é o Raio: ");
	scanf("%f", &r);
	
	
	
	pi=3.14;
	area=pi*(pow(r,2));
	printf("%.2f", area);
	
}
