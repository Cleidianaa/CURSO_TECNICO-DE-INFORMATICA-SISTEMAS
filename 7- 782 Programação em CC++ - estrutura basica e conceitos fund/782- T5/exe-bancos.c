#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
Escreva algoritmos e codifique em C/C++ os exercícios que se seguem :Exercício  
1Pretende-se calcular o montante total disponível ao fim de um ano de dois depósitos bancários feitos,
no  mesmo  dia,  em  bancos  diferentes,  
sabendo  que  o  juro  num  banco  é  de  9%  e  no  outro  é  de  7%. Teste para depósitos de 100,00 € e 50,00 €
respectivamente. O valor obtido é de 162,50€.
*/

 main() {
 	float  banco1,  banco2, deposito1, deposito2;
 	printf("Informe o valor do deposito banco1!");
 	scanf("%f", &deposito1);
 
 	printf(" Informe o segundo deposito,  banco2!");
 	scanf("%f", &deposito2);
 	
 	banco1=deposito1 + (deposito1 *0.09);
 	banco2=deposito2 + (deposito2 *0.07);
 	
 	printf(" Seu posito com juros de 9%%, sera %.2f", banco1);
 	printf("Seu posito com juros de 7%, sera  %.2f", banco2);
 	printf(" O valor total obtido e de: %.2f ", (banco1 + banco2));
 	 

}
