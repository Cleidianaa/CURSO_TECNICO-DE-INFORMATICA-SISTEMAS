#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 2
Crie uma função em C, do tipo void, que receba um caracter. Valida se é F/f ou M/m e escreve
feminino ou masculino ou inválido.*/

int main(){
    setlocale(LC_ALL,"");
    char sexo;
    printf("Escreva (M)Masculino OU (F)Feminino:");
	scanf("%s", &sexo);
	ValidarSexo(sexo);
}
void ValidarSexo(char sexo){
    switch(sexo){
        case'M':
        case 'm':
            printf("Masculino");
            break;
        case'F':
        case'f':
            printf("Feminino");
            break;
        default:
            printf("Sexo Inválido!!");
            break;
    }
}


