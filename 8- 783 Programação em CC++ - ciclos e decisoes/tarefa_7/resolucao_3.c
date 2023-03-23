#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
Exercício3
Eis um exemplo para gerar um número aleatório entre 0 e 15:
#include <stdio.h>
#include <stdlib.h>
 main () {srand(time(NULL));
 int a=(rand()%15);printf("%i",a);
 }
 Faça um programa que gere e mostre números aleatórios entre  0(zero) e 15.
 O programa deve gerar números até que o número 0(zero) seja sorteado.*/

 main(){
     setlocale(LC_ALL,"Portuguese");
     int num=0;
     srand(time(NULL));
     do{
        num=rand()%16;
        printf("%i\t"num,)
     }while(num!=0);

 }
