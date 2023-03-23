#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
Exercício 1
Crie um programa em C que preencha uma matriz 10x10, de forma aleatória com números entre 0 e 20,
e mostre os elementos da diagonal esquerda, os elementos da diagonal direita,
a soma dos elementos da diagonal esquerda e a soma dos elementos da diagonal direita.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	int matriz[10][10];
	int i=0, coluna=0, somad=0, somae=0;
	srand(time(NULL));

	printf("Valores da matriz:\n");
	for(i= 0; i< 10; i++){
		for(coluna = 0; coluna< 10; coluna++){
			matriz[i][coluna]=(rand()%20+1);;
			printf("%i\t",matriz[i][coluna]);
		}
		printf("\n");
	}
	printf("\nValores da diagonal esquerda:\n");
	for(i=0;i<10;i++){
        somae+= matriz[i][i];
		printf("%i\t",matriz[i][i]);
	}
	printf("\nValores da diagonal direita:\n");
	for(i=0;i<10;i++){
	    somad += matriz[i][9-i];
		printf("%i\t",matriz[i][9-i]);
	}
	printf("\n\nSoma da diagonal direita: %i \n", somae);
	printf("\nSoma da diagonal direita: %i \n", somad);
}
