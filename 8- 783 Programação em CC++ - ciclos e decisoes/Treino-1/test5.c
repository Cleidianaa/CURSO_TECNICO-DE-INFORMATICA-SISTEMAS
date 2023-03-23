#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Pretende-se: Desenvolver um programa em C que gere um número aleatório entre 0 e 100.
O utilizador vai ter 5 tentativas para adivinhar o número. A cada tentativa informa se o número está abaixo, acima ou se acertou.
Se acertou o programa termina e deve dar a possibilidade de jogar outra vez.
Se esgotadas as tentativas e não adivinhar mostra o número gerado e deve dar também a possibilidade de jogar oura vez.
*/

int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int numS=0,numE=0,contador=0,soma=1;
    numS=(rand()%100);

    while(soma==1){
        do{
           contador++;
           printf(" Digite um número\n");
           scanf("%i", &numE);
           if(numE==numS){
               printf(" Parabéns!!!!!\n");
               break;
           }
           else if(numE<numS){
               printf(" Número Menor\n");
           }
           else if(numE>numS){
               printf(" Número Maior\n");
           }
        }
        while(numE!=numS && contador<5);
        printf("Número Sorteado: %i \n",numS);
        contador=0;
        numS=(rand()%100);

        printf(" Deseja Jogar Novamente?\n 1- Sim\n 2- Não\n ");
        scanf("%i", &soma);
    }
}
