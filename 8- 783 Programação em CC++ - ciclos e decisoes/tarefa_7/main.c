#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/*Exercício 1
Faça um programa que mostre no e crãos números naturais entre 0 (zero) e 100.
 Crie três   versões   desse   programa,   cada   uma   usando   uma   estrutura   de   repetição diferente.*/

int main() {
    setlocale(LC_ALL,"Portuguese");
    int num;
    do{
       printf("Números Naturais: %i \n", num);
       num++;
    }
	while(num<= 100);

}


