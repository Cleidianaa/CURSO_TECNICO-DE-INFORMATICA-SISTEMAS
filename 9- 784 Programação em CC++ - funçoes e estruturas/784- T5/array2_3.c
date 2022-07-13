#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
3. Escrever um programa em C que:
a) Gere todo o conjunto A de 10 elementos inteiros entre 10 e 20;
b) Construa e imprima um outro conjunto B formado da seguinte maneira:
→ os elementos de índice par têm o valor de A dividido por 4;
→os elementos de índice ímpar têm o valor de A multiplicado por 2.

*/

main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
    float arrayA[10];
    float arrayB[10];

    // alinea A)
	printf("Alinea A)\n");
    for(int i=0; i<10; i++){
        arrayA[i] =(rand()%10+10);
    }
    for(int i=0; i<10; i++){
        printf("%i - %.2f\n",i, arrayA[i]);
    }
    // alinea B)
	printf("\nAlinea B)\n");
    for(int i= 0; i<10; i++){
        if(i%2==0){
            arrayB[i] = arrayA[i]/4;
        }
        else{
            arrayB[i] = arrayA[i]*2;
        }
    }
    for(int i= 0; i<10; i++){
        printf("%i - %.2f \n",i, arrayB[i]);
    }
}
