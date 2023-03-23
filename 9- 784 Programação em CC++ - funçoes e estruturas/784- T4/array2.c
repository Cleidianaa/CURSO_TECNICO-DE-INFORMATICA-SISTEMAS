#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
3. Escrever um programa em C que:
a) Gere todo o conjunto A de 100 elementos inteiros entre 0 e 20;
b) Construa e imprima um outro conjunto B formado da seguinte maneira:
→ os elementos de índice par têm o valor de A dividido por 2;
→os elementos de índice ímpar têm o valor de A multiplicado por 3.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
    float A[100];
    float B[100];

    for(int i= 0; i< 50; i++){
        A[i] = (rand()%20+1);
    }
    for(int i= 0; i < 50; i++){
        printf(" \n O valor da posição %i é :%.2f",i, A[i]);
    }
    for(int i= 0; i < 50; i++){
        if(i% 2== 0){
            B[i] = A[i]/ 2;
        }
        else{
            B[i] = A[i]* 3;
        }
    }
    for(int i= 0; i< 50; i++){
        printf(" \n O valor da posição %i é :%.2f",i, B[i]);
    }
}
