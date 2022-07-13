#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exrcícios 1:
Dado o array VET, inteiro de 100 posições, desenvolver um programa em C para
cada um dos itens abaixo:
a) preenchê-lo com o valor inteiro 30; mostrar os dados.
b) preenchê-lo com os números inteiros 1, 2, 3, ..., 100; mostrar os dados.
c) preencher VET(i ) com 1, se i é ímpar, e com 0 se for par; mostrar os dados.
*/
 main() {
	setlocale(LC_ALL,"Portuguese");
	int vetor[100],i=0;

    printf("\nQuestão A");// (a)
	for(i =0; i< 100; i++){
		vetor[i] = 30;
    }
    for(i= 0; i < 100; i++){
		printf(" \n O valor da posição %i é :%i",i,vetor[i]);
    }

    printf("\nQuestão B");//(B)
    for(i= 0; i< 100; i++){
		vetor[i] = i+1;
    }
    for(i= 0; i< 100; i++){
		printf(" \n O valor da posição %i é :%i",i, vetor[i]);
    }

    printf("\nQuestão C");//(C)
    for(i= 0; i<100; i++){
	    if(i% 2 == 0){
            vetor[i] =0;
        }
        else{
            vetor[i] =1;
        }
    }
    for(i= 0; i < 100; i++){
		printf(" \n O valor da posição %i é :%i",i, vetor[i]);
    }
}
