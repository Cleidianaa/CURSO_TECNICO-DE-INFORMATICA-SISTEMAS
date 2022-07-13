#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*
Exercício 4
Elabore um programa que permite efetuar operações de crédito ou débito numa conta bancária. O
programa deverá perguntar qual o saldo inicial da conta e qual a operação que o utilizador pretende
efetuar (débito ou crédito), assim como o montante a debitar, atualizando o saldo da conta sempre
que se efetue uma operação. No final deverá devolver o saldo da conta.
Opcão        Menu           Cálculo
D               Débito          saldo-montante
C               Crédito         saldo+ montante
S                Sair
*/



int main(){
    setlocale(LC_ALL, "Portuguese");
    float saldo=0, montante=0;
    char operacao;
     printf("Digite o valor do saldo inicail:");
        scanf("%f",&saldo);

    do {
        fflush(stdin);
        printf("\n Digite  a sua opção. (d/D)ébito - (c/C)rédito - (s/S)air:");
        scanf("%c",&operacao);
        switch(operacao){
            case 'd':
            case 'D':
                printf("\nDigite montante a dabitar:");
                scanf("%f", &montante);
                saldo-=montante;
                break;
            case 'c':
            case'D':
                printf("\nDigite montante a dabitar:");
                scanf("%f", &montante);
                saldo+=montante;
                break;
            case's':
            case'S':
                break;
                default:
                printf("\nOpção inválida.");

        }
    }while(operacao!='s' && operacao!='S');
        printf("O saldo da conta é %.2f", saldo);
}
