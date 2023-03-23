#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Exercício 3 Crie  um  algoritmo  que  leia  o  preço  anterior  e  preço atual de 1artigo  básico  e  
determine  a  taxa  de inflação desse artigo.
*/

 main() {
	float precoanterior, precoatual, inflacao;
	printf("Por favor digite o preco do artigo anterior:");
	fflush(stdin);
	scanf("%f", &precoanterior);
	printf(" Por favor digite o preco do artigo atual:");
	fflush(stdin);
	scanf("%f", &precoatual);
	
	inflacao=((precoanterior-precoatual)/precoanterior)*100;
	
	printf("O valor dos dois artigos %.2f",inflacao);
		

}


