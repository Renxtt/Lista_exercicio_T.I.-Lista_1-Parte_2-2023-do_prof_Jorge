#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {

char nm[40],sex[40];
int id;
setlocale(LC_ALL,"portuguese");

printf("Digite seu nome: ");
scanf("%s", &nm);
printf("Digite sua idade: ");
scanf("%d", &id);
printf("Digite seu seggs: ");
scanf("%s", &sex);


if(strcmp(sex, "M")==0){
        printf("\n\nSeu nome �: %s\nSua idade �: %d\nE seu genero �: masculino\n\n", nm,id);
}
else if(strcmp(sex, "F")==0){
        printf("\n\nSeu nome �: %s\nSua idade �: %d\nE seu seggs �: Feminino\n\n", nm,id);
}


return 0;

}
