#include <stdio.h>
#include <stdlib.h>


main() {
	float precoanterior, precoatual, inflacao;
	printf(" Por favor digite o preco do artigo anterior \n");
	scanf(" %f ", &precoanterior);
	printf(" Por favor digite o preco do artigo atual \n");
	scanf(" %f ", &precoatual);
	
	inflacao=((precoanterior-precoatual)/precoanterior)*100;
	
	printf( " O valor dos dois artigos \n");
	
	

}