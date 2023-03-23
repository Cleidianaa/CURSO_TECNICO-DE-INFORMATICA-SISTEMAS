#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/*
Crie um programa em C que cumprimente o utilizador solicitando a hora atual.
Se a hora estiver entre 8 e 11 escrever “Bom dia.”,
entre 12 e 19 “Boa tarde”, outra hora “Boa noite” */

int main(){
    setlocale(LC_ALL,"Portuguese");
    int time=0;
    fflush(stdin);
    printf(" Digite a hora: ");
    scanf("%i", &time);

    if((time>8) && (time<11)){
        printf(" Bom Dia!! ", &time);
    }
    else if((time>=12) && (time<=19)){
        printf(" Boa Tarde!! ", &time);
    }
    else{
        printf(" Boa Noite!! ", &time);

    }

}
