#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int soma, num1=1,num2= 1;
    printf("Insira o tamanho do lado em unidades de *: ");
    scanf("%d",&soma);
    printf("\n");

    while(num1<= soma){

    while(num2<= soma){
      printf("*******(10) *(01) \n");
        printf("*(09) **(02) \n");
        printf("*(08) **(03) \n");
        printf("*(07) **(04) \n");
        printf("*(06) **(05) \n");
        printf("*(05) **(06) \n");
        printf("(04) ***(07) \n");
        printf("(03) ***(08) \n");
        printf("(02) ***(09) \n");
        printf("(01) ***(10) \n");
    num2++;
}

    printf("\n");

    num1++;
    num2 = 1;
}
}
