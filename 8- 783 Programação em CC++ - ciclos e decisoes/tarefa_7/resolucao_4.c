#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
Exercício 4
Faça um programa que gere e exiba, por extenso, números aleatórios entre 0 (zero) e15.
O programa deve gerar os números até que o número 15 seja sorteado.
O programadeve mostrartambém, no final, a quantidade de números gerados
*/


 int main(){
     setlocale(LC_ALL,"Portuguese");
     int num=0, contador=-1;
     srand(time(NULL));
     do{
        num=rand()%16;
        switch(num){
            case 0:
                printf("\nO nº gerado foi o zero.");
                break;
            case 1:
                printf("\nO nº gerado foi o um.");
                break;
            case 2:
                printf("\nO nº gerado foi o dois.");
                break;
            case 3:
                printf("\nO nº gerado foi o três.");
                break;
            case 4:
                printf("\nO nº gerado foi o quatro.");
                break;
            case 5:
                printf("\nO nº gerado foi o cinco.");
                break;
            case 6:
                printf("\nO nº gerado foi o seis.");
                break;
            case 7:
                printf("\nO nº gerado foi o sete.");
                break;
            case 8:
                printf("\nO nº gerado foi o oito.");
                break;
            case 9:
                printf("\nO nº gerado foi o nove.");
                break;
            case 10:
                printf("\nO nº gerado foi o dez.");
                break;
            case 11:
                printf("\nO nº gerado foi o onze.");
                break;
            case 12:
                printf("\nO nº gerado foi o doze.");
                break;
            case 13:
                printf("\nO nº gerado foi o treze.");
                break;
            case 14:
                printf("\nO nº gerado foi o quatoze.");
                break;
            default:
                printf("\nO nº gerado foi o quinze.");
        }
     }while(num!=15);
     printf("Foram sorteados %i números.", contador);
 }
