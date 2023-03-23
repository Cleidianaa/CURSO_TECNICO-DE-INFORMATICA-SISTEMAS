#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
2. Criar um programa em C para preencher cada um dos arrays indicados abaixo:
A
100  99  98  97
0    1   2    3 ... … 99
B
200  198    196  194
0     1      2    3 ... … 99
C
10  20  30  40
0   1   2   3 ... … 99
D
10  12   14  16
0    1    2   3 ... … 9
a) Mostrar os dados.

*/
main() {
	setlocale(LC_ALL,"Portuguese");
	int A[100];
	int B[100];
	int C[100];
	int D[10];
	int i=0;
	int soma = 0;

    soma = 0;
    for(i= 100; i > 0; i--){
		A[soma] = i;
		soma++;
    }
    for(i = 0; i < 100; i++){
		printf(" \n O valor da posição %i é :%i",i, A[i]);
    }
    soma= 0;
    for(i= 200; i > 100; i--){
		A[soma] = i;
		soma++;
    }
    for(i= 0; i< 100; i++){
		printf(" \n O valor da posição %i é :%i",i, A[i]);
    }
    for(i= 1; i <= 100; i++){
		C[i-1] = i*10;
    }
    for(i= 0; i < 100; i++){
		printf(" \n O valor da posição %i é :%i",i, C[i]);
    }
    soma = 0;
    for(i= 10; i <= 28; i+=2){
		D[soma] =i;
		soma++;
    }
    for(i = 0; i < 10; i++){
		printf(" \n O valor da posição %i é :%i",i,D[i]);
    }
}
