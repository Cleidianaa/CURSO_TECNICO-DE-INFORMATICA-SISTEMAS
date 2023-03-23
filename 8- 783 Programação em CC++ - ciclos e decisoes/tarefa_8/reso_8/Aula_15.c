#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Exercício
Crie um programa que gere 3 números aleatórios no intervalo [1:7].
Caso a saída
corresponda a 3 setes o programa acumula 100 créditos, se 2 setes 50 créditos, um
sete 25 créditos, 3 iguais diferentes de sete, 15 créditos, nenhuma das anteriores
retira 20 créditos.
O programa inicia com 100 créditos e termina quando o nº de
créditos for zero ou o utilizador decida interromper, devendo apresentar o número
de créditos obtidos.

*/

 main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int num1, num2, num3, soma=100, sair=1;

    while(sair==1){
        num1= (rand()%8);
        num2= (rand()%8);
        num3= (rand()%8);

        printf("Números Sorteados: %i %i %i \n",num1, num2, num3);

        if(num1==7 && num2 ==7 && num3 ==7){
            soma += 100;
        }else if(num1 ==7 && num2 ==7 || num1 ==7 && num3 ==7 || num2 ==7 && num3 ==7){
            soma += 50;
        }else if(num1 ==7 || num2 ==7 || num3 ==7){
            soma += 25;
        }else if(num1 == num2 && num1 == num3 && num2 == num3){
            soma += 15;
        }else{
            soma -= 20;
        }
        printf("Saldo Atual: %i \n",soma);

        if(soma <= 0){
            break;
        }
        printf("Deseja Jogar Novamente?\n");
        printf("1 - Sim\n");
        printf("2 - Não\n");
        scanf("%i", &sair);
    }
    printf("Saldo Final: %i \n",soma);
    printf("Número de créditos obtidos: %i \n",soma -100);
}
