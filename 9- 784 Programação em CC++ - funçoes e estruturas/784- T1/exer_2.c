#include <stdio.h>
#include <stdlib.h>


/*Exercício 2
Crie uma função em C, do tipo void, que receba um valor float e uma percentagem de desconto e
apresente o valor do desconto.*/

// produto com 10% de desconto

void Calcular_Produto(float produto, float porcentagem){
	float produtoPorcentagem = produto * (porcentagem/100);
    printf("Valor do Desconto: %.2f", produtoPorcentagem);
}

void main() {
	float produto=0;
	float porcentagem=0;
	printf("Digite o valor:");
	scanf("%f",&produto);

	printf("Digite o desconto:");
	scanf("%f",&porcentagem);
	Calcular_Produto(produto, porcentagem);
}

