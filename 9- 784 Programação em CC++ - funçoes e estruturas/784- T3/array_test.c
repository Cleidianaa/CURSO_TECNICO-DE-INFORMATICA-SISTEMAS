#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 3
Crie uma programa em C, que gere 20 números aleatórios (entre 0 e 50), e os armazene num array.
Será solicitado ao utilizador um número entre 0 e 50 por forma a verificar se o mesmo se encontra no array.
Se sim informa em que posição(ões) senão escreve que o número não existe.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));

    int array[20];
    int numero;
    int existe = 0;

    for(int i = 0; i < 20; i++){
        array[i] = (rand()%50+1);
    }

    printf("\n Digite um número entre 0 e 50: ");
    scanf("%i", &numero);

    for(int i = 0; i < 20; i++)
    {
        if(numero == array[i])
        {
            printf("\n Valor encontrado na posição %i",i);
            existe = 1;
        }
    }

    if(existe == 0)
    {
        printf("\n Número não existe");
    }
}
