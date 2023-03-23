#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 3
Crie uma programa em C, que gere 20 números aleatórios (entre 0 e 50), e os armazene num array.
Será solicitado ao utilizador um número entre 0 e 50 por forma a verificar se o mesmo se encontra no
array. Se sim informa em que posição(ões) senão escreve que o número não existe.

*/

main(){
	setlocale(LC_ALL,"Portuguese");
	int array[20], num=0;
	int existe=0;
	srand(time(NULL));
	for(num=0; num<20; num++){
        array[num]= rand()% 50+1;
        printf("\nInforme um número: ");
        scanf("%i", &array[num]);
       if(array[num]==num){
        printf("\nO Numero informando encotra-se dentro do array %i", (num+1));
        existe=1;
       }

    }
    if(existe== 0){

        printf("O Número não existe no  array.");
    }

}
