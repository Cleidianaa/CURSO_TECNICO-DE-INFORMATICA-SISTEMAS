#include <stdio.h>
#include <stdlib.h>

main() {
	float kms=0,horas=0,media=0;
	printf("Digite o valor em kms:");
	scanf("%f",&kms);
	printf("Digite o valor em horas:");
	scanf("%f",&horas);
	media=(kms/horas);
	printf("A media foi : %.2f",media);
}
