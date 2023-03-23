#include <stdio.h>
#include <stdlib.h> //função rand
#include <time.h> //necessária para usar a função time
#include <locale.h>
/*
Exercício 3
Crie uma função em C, do tipo void, que gere um número aleatório entre 0 e 50 e devolva a
informação se o número é par ou ímpar.
*/

void InformarNumero(){
	int num = (rand()%50+1);
	int soma = num%2;

	if (soma==0){
        printf("O número informado é PAR: %i ", num);
    }
    else{
        printf("O número informado é IMPAR: %i ", num);
    }
}
void main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	InformarNumero();
}

