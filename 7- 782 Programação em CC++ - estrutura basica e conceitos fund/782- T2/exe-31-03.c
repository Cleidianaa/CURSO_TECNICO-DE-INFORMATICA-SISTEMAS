#include <stdio.h>
#include <stdlib.h>


main() {
	float area, base, altura;
	printf("programa para calcular area do triagulo\n");
	ffush(stdin);
	printf("digite a base do triangulo: \(cm\)");
	scanf("%f", &base);
	ffush(stdin);
	printf("digite a altura do triagulo \(cm\)");
	scanf("%f", &altura);
	area=(base*altura)/2;
	printf("para um trinâgulo com base %.2f, sua area sera %.3f cm2.\n",base,altura,area);
}

/*

main(){
	float peso=0,altura=0, imc=0;
	printf("Qual o peso?");
	scanf("%f",&peso);
	printf("Qual a altura ?");
	scanf("%f",&altura);
	imc=peso/(altura*altura);
	
	
}
*/
