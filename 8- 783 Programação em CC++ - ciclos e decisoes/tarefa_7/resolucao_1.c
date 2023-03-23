#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício 1
Faça um programa que mostre no ecrãos números naturais entre 0(zero)e 100.
Crie três versões desse programa, cada uma usando uma estrutura de repetição diferente.
*/
// for é mais usado para contadores.

int main(){
    setlocale(LC_ALL, "Portuguese");
    int contador=0;
    //while
    while (contador<=100){
        printf("\n%i", contador);
        contador++;
    }

    // do while
    system("pause");
    system("cls");
    contador=0;
    do{
        printf("\n%i", contador);
        contador++;
    }while(contador<=100);


    // for
    system("pause");
    system("cls");
    for(contador=0; contador<=100;contador++){
        printf("\n%i", contador);
    }

}
