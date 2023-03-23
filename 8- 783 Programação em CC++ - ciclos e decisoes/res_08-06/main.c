#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Exercício 1
Crie um programa que vá solicitando ao utilizador números inteiros. O programa termina quando o
número inserido for o número “zero”.
 Como saída deve apresentar a soma dos números inseridos e
quantos números foram inseridos.*/
/*
int main(){
    setlocale(LC_ALL, "Portuguese");
   int num-1, soma, contador=-1;

   while (num!=0){
    printf(" Digite  um número inteiro:");
    scanf("%i", &num);
    soma+=num;
    contador++;
   }
   printf("A soma dos números é %i", soma);
   printf("\nForam inseridos %i números." , contador);
}
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, soma, contador=-1;

    do{
        printf(" Digite um número interio:");
        scanf("%i",&num);
        soma+=num;
        contador++;
    }while(num!=0);

    printf("A soma dos números é %i", soma);
    printf(" \nForam inseridos %i números .", contador);

}
