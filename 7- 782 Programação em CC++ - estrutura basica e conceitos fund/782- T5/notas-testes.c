#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
Exercício  2Pretende-se  determinar 
a  classificação  final  de  um  aluno  sabendo  que  a  avaliação  consiste  em  2 testes e um trabalho.
Para a determinação da média sabe-se que cada teste tem umpeso de 35%e o trabalho um peso de 30%.
*/

main(){
	float teste1, teste2, trabalho, notafinal;
	printf(" Por favor digite o resultado do teste1");
	scanf("%f", &teste1);
	
	printf(" Por favor digite o resultado do teste2");
	scanf("%f", &teste2);
	
	printf("Digite a nota do trabalho");
	scanf("%f", &trabalho);
	
	notafinal=(teste1*0.35) + (teste2*0.35) + (trabalho*0.30);
	
	printf("Nota final somada mais trabalho e: %.2f", notafinal);
		
	
}
