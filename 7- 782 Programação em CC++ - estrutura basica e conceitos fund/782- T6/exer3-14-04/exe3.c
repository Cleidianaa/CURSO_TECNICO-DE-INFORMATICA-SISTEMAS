#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício3 Elabore  um  programa que leia a idade do pai e a idade do filho.
Calcular  e  escrever a  diferença  de idade entre ambos.*/

 main(){
     setlocale(LC_ALL, "Portuguese");
     int pai, filho, idade;
     printf("\n Qual a idade do pai? ");
     scanf("%i", &pai);
     printf("\n Qual a idade do filho? ");
     scanf("%i", &filho);

     idade=pai-filho;

     printf("\n A diferença idade é: %i anos", idade);

}
