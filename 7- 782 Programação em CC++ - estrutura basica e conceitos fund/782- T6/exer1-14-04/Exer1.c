#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício1 Codifique em C um programa que
leia um número inteiro e escreva o seu próximo e o seu anterior.*/

main(){

  setlocale(LC_ALL, "POrtuguese");
  int num1,proximo,anterior;
  printf(" Por favor escreve  um número: ");
  scanf("%i", &num1);

  proximo=num1+1;
  anterior=num1-1;

  printf(" \nO número que você digitou foi: %i", num1);
  printf(" \nO próximo número é: %i ", proximo);
  printf(" \nO número anterior é: %i", anterior);



}
