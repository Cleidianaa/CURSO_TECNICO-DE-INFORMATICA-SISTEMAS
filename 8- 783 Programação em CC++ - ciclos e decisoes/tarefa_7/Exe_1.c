#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/*Exercício 1
Faça um programa que mostre no e crãos números naturais entre 0 (zero) e 100.
 Crie três   versões   desse   programa,   cada   uma   usando   uma   estrutura   de   repetição diferente.*/

 int main(){
    setlocale(LC_ALL,"Portuguese");
        float num=0;
        while (num<=100){
        printf("\n Números Naturais %.0f",num,pow(num,1));
        num++;
    }
}
