#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
Exercício 3
Crie um programa em C que gere um número aleatório entre 0 e 1. Se sair 0 escrever
“Cara”, se 1 escreve “Coroa”.
*/

 main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int num;
    num=(rand()%2);
    switch(num){
        case 0:
            printf("Cara\n");
            break;
        case 1:
            printf("Coroa\n");
            break;

    }

 }
