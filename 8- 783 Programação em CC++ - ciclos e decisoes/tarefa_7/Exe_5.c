#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
/*
Exercício 5
Faça  um  programa  que  permita  ao utilizador fornecer  diversos  valores  positivos.
O programa deverá  parar  de  solicitar  valores  quando  o utilizador fornecer  um  valor negativo.
No final, o programa deverá informar a soma dos valores lidos.
Obs.: o valor negativo(último valor entrado)não deve entrar na conta da soma.
*/

  int main(){
    setlocale(LC_ALL,"Portuguese");
    int num= 0, soma=0;
    do{
       printf(" Por favor digite um número positivo\n");
       scanf("%i",&num);
       if(num> 0){
           soma = soma + num;
       }
    }
	while(num> 0);
    printf(" Valor Total: %i \n", soma);
}
