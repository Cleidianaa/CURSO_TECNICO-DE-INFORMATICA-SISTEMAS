#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
4. Escrever um programa em C que:
a) Gere todo o conjunto A de 5 elementos inteiros entre 100 e 200;
b) Verificar se a soma dos elementos é um valor par ou ímpar.
c) Criar um 2º vetor obtido a partir do anterior que resulte no dobro dos valores do 1º.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
    int arrayA[5];
    int arrayB[5];
    int soma = 0;

    for(int indice = 0; indice < 5; indice++)
    {
        arrayA[indice] = (rand()%100+100);
    }

    for(int indice = 0; indice < 5; indice++)
    {
        soma += arrayA[indice];
        printf("O valor da posição %i é :%i \n",indice, arrayA[indice]);
        arrayB[indice] = arrayA[indice] * 2;
    }

    if(soma % 2 == 0)
    {
        printf("O valor da soma é par \n");
    }
    else
    {
        printf("O valor da soma é impar \n");
    }
    printf(" \n\n\n");

    for(int indice = 0; indice < 5; indice++)
    {
        printf("O valor da posição %i é :%i \n",indice, arrayB[indice]);
    }
}
