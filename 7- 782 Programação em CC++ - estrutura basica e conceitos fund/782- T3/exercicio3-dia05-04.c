#include <stdio.h>
#include <stdlib.h>

/*
Exercício 3
Crie um algoritmo que leia o preço anterior e preço atual de  1 artigo básico e determine a 
atxa de inflação desse artigo.  */

main(){
	float precoantigo=0, novopreco=0, taxainflacao=0;
	printf("Qual o preco antigo?");
	scanf("%f", &precoantigo);
	printf("Qual o novo preco?");
	scanf("%f", &novopreco);
	
	taxainflacao=((novopreco-precoantigo)/precoantigo)*100;
	
	printf("A taxa de inflacao foi %.1f", taxainflacao);
}

