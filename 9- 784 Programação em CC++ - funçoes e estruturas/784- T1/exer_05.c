#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 3
Crie uma função em C, do tipo void, que gere um número aleatório entre 10 e 50 e devolva a
informação se o número é divisível por 5.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	Num_Aleatorio();
}
void Num_Aleatorio(){
	int i= 10 +(rand()%40+1);
	int soma=i % 5;

	if(soma==0){
        printf("O valor sorteado %i é divisível por 5",i);
    }
    else{
        printf("O valor sorteado %i não é divisível por 5",i);
    }
}

