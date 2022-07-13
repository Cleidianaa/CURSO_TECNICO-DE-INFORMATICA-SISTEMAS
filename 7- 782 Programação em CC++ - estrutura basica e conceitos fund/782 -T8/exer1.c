#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício1
Ler o valor do raio de um círculo e calcular a área desse círculo.
A=PI x raio^2 */


void main(){
    setlocale(LC_ALL, "Portuguese");
    float raio, area, pi=3.14;
    printf(" Qual o círculo da raio? ");
    scanf("%f", &raio);

    area=(pi*(raio*raio));

    printf("\nO a área deste círculo é: %.2f", area);
}
