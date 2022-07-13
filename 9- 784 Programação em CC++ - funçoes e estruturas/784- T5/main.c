#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
1. Dado o array VET, inteiro de 20 posições, desenvolver um programa em C para cada
um dos itens abaixo:
a) preenchê-lo com o valor do (índice+1).
b) preenchê-lo com os números inteiros 1, 2, 3, ..., 20; mostrar os dados.
c) preencher VET(i ) com 10, se i é ímpar, e com 20 se for par; mostrar os dados.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	int vet[20],i=0;
	// alinea A)
	printf("Alinea A)\n");
	for(i=0;i<20;i++){
		vet[i]=+1;
		printf("%i - ",vet[i]);
	}
	// alinea B)
	printf("\nAlinea B)\n");
	for(i=0;i<20;i++){
		vet[i]=(i+1);
		printf("%i - ",vet[i]);
	}
	// alinea C)
	printf("\nAlinea C)\n");
	for(i=0;i<20;i++){
		if(i%2==0){
			vet[i]=10;
		}
		else{
			vet[i]=20;
		}
		printf("%i - ",vet[i]);
	}
}
