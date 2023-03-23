#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Qual é o  resultado da soma do teste 1  e do teste  2, apresente:*/
main(){
	float teste1, teste2, resultado;
	printf(" Digite o valor do teste1? ");
	scanf("%f", &teste1);
	printf("Digite o valor do teste2?");
	scanf("%f", &teste2);
	
	resultado=teste1 + teste2;
	
	
	printf(" O resultado é %f ", resultado);
}



