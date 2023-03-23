#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h> //para função time()
/*Exercício3
Eis um exemplo para gerar um número aleatório entre 0 e 15:
main () {
srand(time(NULL));
int a=(rand()%15);
printf("%i",a);}
Faça  um  programa  que  gere  e mostre números aleatórios entre  0  (zero)  e  15.
 O programadeve gerar números até que o número 0 (zero) seja sorteado. */

int main() {
    setlocale(LC_ALL,"Portuguese");
        int num;
        printf(" Gerando números de 0 á  15: \n");
        srand(time(NULL));
        for(num!=0; num<16;num++){
            printf("%d ", rand() % 16);
    }

}
