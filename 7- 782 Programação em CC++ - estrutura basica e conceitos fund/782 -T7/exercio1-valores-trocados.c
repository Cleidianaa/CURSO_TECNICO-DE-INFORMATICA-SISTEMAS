#include <stdio.h>
#include <stdlib.h>

/*
Exercício 1 
Crie um programa em C que leia dois valores para as variáveis A e B. Efetue a troca dos valores, para 
que a variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da variável A. 
Apresente os valores trocados. */

main() {
	float variavelA=0, variavelB=0;
	
	printf(" Digite o valor da variavelA: ");
	scanf("%f", &variavelA);
	printf(" Digite o valor da variavelB: ");
	scanf("%f", &variavelB);
	printf(" Os valores atribuidos foram: variavelA: %.2f: variavelB: %.2f:\n\n", variavelA, variavelB);

	printf("\n Os valores trocados ficaram assim: variavelA %.2f: ",variavelB);
	printf("\n Os valores trocados ficaram assim: variavelB %.2f: ",variavelA);
	
	
}
