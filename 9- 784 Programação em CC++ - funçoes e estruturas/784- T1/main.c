#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*Exercício 1
Crie uma função em C, do tipo void, que receba a nota final de um aluno (entre 0 e 20) e escreva
“Aprovado” (Se maior do que 12), “Exame” (Entre 10 e 12), “Reprovado” (Se menor do que 10).
 */

void mediaAluno( float nota){
    printf("");
}
int Nota(float nota){
    return(nota);
}
main(){
    float nota;

    printf("Digite a nota do aluno: ");
    scanf(" %f", &nota);

    if(nota > 20 || nota < 0){
    printf("\nNota inválida!!\n\n");
    }
    else if( nota <10){
    printf("\nReprovado!!\n\n");
    }else if(nota >=10 && nota<=12 ){
    printf("\n Exame...\n");
    }
    else if(nota >12){
    printf("\n Aprovado!!\n");
    }
}
