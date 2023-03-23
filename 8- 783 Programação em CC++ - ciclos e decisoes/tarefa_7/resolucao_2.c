#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 2
Faça um programa que solicite ao utilizadorum valor positivo.
O programa deverá repetir a solicitação caso o utilizador forneça um valor inválido (negativo).
Quandoo utilizador fornecer um valor válido, mostre uma mensagem de texto confirmando o valor digitado.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero=0;
    do{
        printf(" Informe um número positivo:");
        scanf("%i",&numero);
    }while(numero<=0);
    printf("\nO número positivo válido é %i",numero);
}
