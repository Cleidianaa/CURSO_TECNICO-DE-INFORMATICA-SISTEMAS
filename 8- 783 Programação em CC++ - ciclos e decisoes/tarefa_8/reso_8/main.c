#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
Exercício 1
Crie um programa que gere um número aleatório no intervalo [0;200] e solicite ao
utilizador para adivinhar o número. Caso o utilizador acerte, imprima uma
mensagem dando os parabéns e termina o programa. Caso o valor que o utilizador
indique esteja incorreto, o programa deverá mostrar uma das seguintes mensagens:
• Quase a arder! (caso o valor correto esteja a 5 unidades ou menos do valor
fornecido pelo utilizador).
• Muito Quente (caso o valor correto esteja de 6 a 10 unidades do valor fornecido).
• Quente (caso o valor correto esteja de 11 a 20 unidades do valor fornecido).
• Frio (caso o valor correto esteja de 21 a 30 unidades do valor fornecido).
• Muito Frio (caso o valor correto esteja de 31 a 50 unidades do valor fornecido).
• Gelado (caso o valor correto esteja de 51 a 75 unidades do valor fornecido).
• Congelado! (caso o valor correto esteja a mais de 75 unidades do valor fornecido).
->Deve dar oportunidade de repetir o programa.*/


int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int numS=0, numE=0, sair=1;
    numS=(rand()%201);

    while(sair==1){
        do{
           printf("Digite um número\n");
           scanf("%i", &numE);
           int soma=0;

           if(numE > numS){
               soma = numE - numS;
           }
           else{
               soma = numS - numE;
           }
           if(numE == numS){
               printf("Parabéns!!!\n");
               break;
           }
           else if(soma<= 5){
               printf("Quase a arder!\n");
           }
           else if(soma>= 6 && soma <= 10){
               printf("Muito Quente!\n");
           }
           else if(soma>= 11 && soma <= 20){
               printf("Quente!\n");
           }
           else if(soma>= 21 && soma <= 30){
               printf("Frio!\n");
           }
           else if(soma>= 31 && soma <= 50){
               printf("Muito Frio!\n");
           }
           else if(soma>= 51 && soma <= 75){
               printf("Gelado!\n");
           }
           else if(soma> 75){
               printf("Congelado!\n");
           }
        }
        while(numE!= numS);
        printf("Número Sorteado: %i \n",numS);
        numS=(rand()%201);

        printf("Deseja Jogar Novamente?\n");
        printf("1 - Sim\n");
        printf("2 - Não\n");
        scanf("%i", &sair);

    }
}
