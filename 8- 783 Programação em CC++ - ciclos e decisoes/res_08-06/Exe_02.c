#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Exercício 2
Crie um programa que escreva no ecrã os números de 1 a 100 e os respetivos quadrados. O resultado
do programa deve ser:
Saída:
1 1
2 4
3 9
4 16
5 …
...
100 10000 */

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num=1;
    while (num<=100){
    printf("\n %.0f\t%.0f",num,pow(num,2));
    num++;
    }
}
