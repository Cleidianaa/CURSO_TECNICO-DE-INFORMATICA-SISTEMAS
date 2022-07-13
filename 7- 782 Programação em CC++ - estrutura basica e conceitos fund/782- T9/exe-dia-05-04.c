#include <stdio.h>
#include <stdlib.h>

/* Exercício 2
Implemente um programa que leia quantos minutos por dia um aluno pode estudar. Calcule e escreva 
ao final de 90 dias quanto tempo em horas ele estudou. */

 main() {
	float dias=0, horas=0, minutos=0;
	
	printf(" Informe quantos minutos ele estudou no dia:");
	scanf("%f", &minutos);
	
	horas=(minutos*90)/60;
	
	printf( "\nO total de horas que ele estudou no periodo de 90 dias e: %.2f",horas);
}
