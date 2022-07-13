#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício5 O Vasco distribui a sua mesada da seguinte forma:
 10% saúde,
 25% educação,
 30% alimentação,
 10% vestuário;
 5% lazer,
 20% outros.
 Crie um algoritmo que leia a renda mensal líquida, calcule e escreva o valor aplicado a cada item acima citado. */

void main(){
   setlocale(LC_ALL, "Portuguese");
   float saude, educacao, alimentacao, vestuario, lazer, outros, mesada;
       printf("\n Digite o valor total da sua mesada? ");
       scanf("%f", &mesada);

        saude=mesada*0.1;
        educacao=mesada*0.25;
        alimentacao=mesada*0.30;
        vestuario=mesada*0.10;
        lazer=mesada*0.05;
        outros=mesada*0.20;

        printf("\n O valor de 10%% para saúde é: %.2f:", saude);
        printf("\n O valor de 25%% para educação é: %.2f",educacao);
        printf("\n O valor de 30%% para alimentação é: %.2f",alimentacao);
        printf("\n O Valor de 10%% para vestuário é: %.2f",vestuario);
        printf("\n O Valor de 5%% para lazer é: %.2f", lazer);
        printf("\n O valor de 20%% outros, gastos a parte é: %.2f", outros);


}
