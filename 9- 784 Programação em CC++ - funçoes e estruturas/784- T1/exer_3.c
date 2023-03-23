#include <stdio.h>
#include <stdlib.h> //função rand
#include <locale.h>

/*
Exercício 1
Crie uma função em C, do tipo void, que receba 3 números e apresente o maior.
*/

int main(void){
      setlocale(LC_ALL,"Portuguese");
      int a,b,c;
      printf("\nDigite um valor para A:");
      scanf("%i",&a);
      printf("\nDigite um valor para B:");
      scanf("%i",&b);
      printf("\nDigite um valor para C:");
      scanf("%i",&c);

      printf("O maior entre todos é: %i\n", Maior(a,b,c));
      return(0);
}
int Maior(int a, int b, int c){
  return(a>b?a:b>c?b:c);
  if(a>b)
    return(a);
  else if(b>c)
    return(b);
  else
    return(c);
}


