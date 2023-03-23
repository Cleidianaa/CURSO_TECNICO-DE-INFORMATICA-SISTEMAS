#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Exercício 2 
Pretende -se determinar a classificação final de um aluno */
 main() {
 	
 	float teste1=0, teste2=0, trab=0, media=0;
 	printf("Digite  a nota do 1. teste:");
 	scanf("%f", &teste1);
 	printif("Digite a nota do 2. teste:");
 	scanf("%f", &teste2);
 	printf("Digite a nota do trabalho:");
 	scanf("%f", &trab);
 	
 	media=((teste1*0.035)+(teste2*0.35)+(trab*0.30));
 	
 	printf("A media e %.2f", media);
	
	
}
