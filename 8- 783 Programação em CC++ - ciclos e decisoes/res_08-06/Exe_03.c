#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Exercício 3
Programa para calcular a área de um círculo (A = π . r2).
Desta vez, se o utilizador introduzir um valor
negativo para o raio, o programa volta a pedir um valor para o raio e só depois calcula a área.
*/


int main(){
    setlocale(LC_ALL, "Portuguese");

    float raio=0;
    do{
        printf("Qual o valor do raio?");
        scanf("%", &raio);
    }while(raio<=0);

    printf(" A área do círculo é %.2f", (3.14*pow(raio,2)));

}
