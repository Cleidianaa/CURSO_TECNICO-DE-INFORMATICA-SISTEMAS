#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/*
Crie um programa em C que gere um nº entre 0 e 2.
Se 0 escrever “ZERO”, se 1 escreve “UM”, se 2 escrever “DOIS”.
*/

main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int num =0;
    num = (rand()%2);

       switch(num)
      {
            case 0:
                    printf("ZERO\n");
                    break;
            case 1:
                    printf("UM\n");
                    break;
            case 2:
                    printf("DOIS\n");
                    break;
      }
  }
