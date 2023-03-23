#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Excercicio 1 
Pretende-se calculcar o montante totoal dispon+ivel ao fim de um ano de dpois dep�sitos banc�rios feitos,
no memso dia,  em bancos diferentes , sabendo que o juro num banco � de 9% e no outro � de 7%.
Teste para dep�sitos de 100,00  e  50,00 respectivamente. o valor obtido � de 162.50 .
*/

main() {
	float depositoA=0, depositoB=0, jurosA=0,jurosB=0;
	float const pjA=0.09, pjB=0.07;
	
	printf("Digite o valor do deposito para o banco A:");
	scanf("%f", &depositoA);
	printf("Digite o valor do deposito para o banco B:");
	scanf("%f",&depositoB);
	
	jurosA=(depositoA*pjA);
	jurosB=(depositoB*pjB);
	
	printf("O valor obtido e %.2f", (depositoA+jurosA+depositoB+jurosB));

}
