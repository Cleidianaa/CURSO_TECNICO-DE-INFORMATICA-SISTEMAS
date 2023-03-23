#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 2
Recorrendo à estrutura do while crie um ciclo para escrever a seguinte sequência de
números:
1, 3, 5, 7, 9, 11, 13, 15, 17, 19
*/

 void main(){
    setlocale(LC_ALL,"Portuguese");
    int num=1;

    while(num<=20){
            printf("%d ",num);
            num=num+2;
    }

}
