#include <stdio.h>
#include <stdlib.h>

/*
Fazer um programa em C para calcular a contribuição para a Segurança Social,
IRS e o sindicato a partir do salário bruto, 
que é um atributo de entrada.
• SS – 11,5%
• IRS - 25%
• Sindicato – 0,5 %
O programa deve imprimir o valor das contribuições e o valor do salário líquido.
*/

main(){
	
	int salario=0;
	float  ss=(11.5/100);
	float  irs=(25/100);
	float  sindicato=(0.5/100);
	printf(" Por favor digite seu salário bruto!");
	scanf("%i",&salario);
	
	ss=(salario*0.115);
	irs=(salario*0.25);
	sindicato=(salario*0.05);

	printf("\nO valor do  ss  é : %.2f", ss);
	printf("\nO valor do  irs é: %.2f", irs);
	printf("\nO valor do  salario com sindicato é: %.2f", sindicato);
	printf(" O valor liquido é: %2.f",(salario-irs-ss-sindicato));

	
}
