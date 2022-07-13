#include <stdio.h>
#include <stdlib.h>

/*

main() {
	float kms=0,horas=0,media=0;
	printf("Digite o valor em kms:");
	scanf("%f",&kms);
	printf("Digite o valor em horas:");
	scanf("%f",&horas);
	media=(kms/horas);
	printf("A media foi : %.2f",media);
}

*/

main() {
	float area, base, altura;
	printf("programa para calcular area do triagulo\n");
	ffush(stdin);
	printf("Digite a base do triangulo \(cm\)");
	scanf("%f", &base);
	ffush(stdin);
	printf("Digite a altura do triagulo \(cm\)");
	scanf("%f", &altura);
	area=(base*altura)/2;
	printf("para um trinâgulo com base %.2f, sua area sera %.3f cm2.\n",base,altura,area);
}
