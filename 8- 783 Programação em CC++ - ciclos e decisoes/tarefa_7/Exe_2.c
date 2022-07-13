#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/*
Exercício 2
Faça  um  programa  que  solicite  ao utilizador um  valor  positivo.
O  programa deverá repetir a solicitação caso o utilizador forneça um valor inválido (negativo).
Quando o utilizador fornecer um valor válido, mostre uma mensagem de texto confirmando o valor digitado.
  */

int main() {
    setlocale(LC_ALL,"Portuguese");
    int num= 0;
    do{
       printf(" Por favor digite um número positivo: \n");
       scanf("%i",&num);
    }
	while(num< 0);
    printf("Valor Válido: %i \n", num);
}
