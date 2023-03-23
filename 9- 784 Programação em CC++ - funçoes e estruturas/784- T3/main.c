#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 1
Crie uma programa em C, que receba 5 números inteiros e os armazene num array. Crie um 2º array
com os mesmos valores do 1º. Mostre os valores.

*/

main() {
	setlocale(LC_ALL,"Portuguese");
    int vetor[5], num;

    printf("Indique valor para a %iª posição:",(num+1));
    for(num=0;num<5;num++){
    scanf("%i", &vetor[num]);
    }
    for(num=4;num>=0;num--){
        printf("\nValor para a %iª posição: %i",(num+1),vetor[num]);
		sleep(2);
    }

}
