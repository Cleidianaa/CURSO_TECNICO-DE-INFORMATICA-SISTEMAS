#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
2. Criar um programa em C para preencher cada um dos arrays indicados abaixo:
A
10   9   8   7
 0   1   2   3 ... … 9
B
20   18     16  14
 0    1      2   3 ... … 9
C
10  15   20  25
 0   1   2    3 ... … 9
D
1    3  5   7
0    1  2   3 ... … 9
a) Mostrar os dados
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	int arrayA[10];
	int arrayB[10];
	int arrayC[10];
	int arrayD[10];
	int i=0;
	int soma=0;

    // alinea A)
    printf("Alinea A)\n");
    soma=0;
    for(i=10; i>0; i--){
		arrayA[soma] =i;
		soma++;
    }
    for(i= 0; i<10; i++){
		printf("%i -",i, arrayA[i]);
    }
    // alinea B)
    printf("\nAlinea B)\n");
    soma= 0;
    for(i=20; i>1; i-=2){
		arrayA[soma] = i;
		soma++;
    }
    for(i=0; i<10; i++){
		printf("%i -",i, arrayA[i]);
    }
   // alinea C)
    printf("\nAlinea C)\n");
    soma=0;
    for(i=10; i<=55; i+=5){
		arrayC[soma] = i;
		soma++;
    }
    for(i=0; i<10; i++){
		printf("%i -",i,arrayC[i]);
    }
   // alinea D)
    printf("\nAlinea D)\n");
    soma= 0;
    for(i=1; i<=19; i+=2){
		arrayD[soma] = i;
		soma++;
    }
    for(i=0; i<10; i++){
		printf("%i -",i, arrayD[i]);
    }
}
