#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Desafio 3. Crie um programa em C que recebe uma nota (entre 0.0 e 10.0) e checa se você passou direto, ficou de recuperação ou foi reprovado na matéria.
A regra é a seguinte:
Nota 7 ou mais:  passou direto
Entre 4 e 7:     tem direito de fazer uma prova de recuperação
Abaixo de 4:     reprovado direto
*/
int main(){
    setlocale(LC_ALL,"Portuguese");
    float tes1, tes2, tes3, tes4, media;
    printf(" Por favor digite suas  quatros NOTAS: ");
    scanf("%f %f %f %f", &tes1, &tes2, &tes3, &tes4);

    media=((tes1+tes2+tes3+tes4)/4);

if(media>=0 && media<=10){
    if(media>=7){
        printf("Passou direto!\n");
    }
    else if(media>=4 && media<=7){
        printf(" Tem direto de fazer uma prova de recuperação!\n");
    }
    else if(media<4){
        printf(" Reprovado direto!\n");
    }

    }

else{
    printf(" Dados invalidos!");
}
}
