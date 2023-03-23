#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Exercício 5
Crie um programa em C que gere um número aleatório entre 0 e 2.
Se sair 0 escrever “Derrota”, se 1 escreve “Empate”, se 2 “Vitória”.
*/

int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int num;
    num=(rand()%3);
        switch(num){
            case 0:
                printf("Derrota\n");
                break;
            case 1:
                printf("Empate\n");
                break;
            case 2:
                printf("Vitória");
                break;
    }
}
