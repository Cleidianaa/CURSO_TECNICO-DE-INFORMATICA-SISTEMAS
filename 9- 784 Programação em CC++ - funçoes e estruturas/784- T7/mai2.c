#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
Exercício 2
Crie um programa em C que preencha uma matriz 3x3, de forma aleatória com os valores “O” ou “X.
Contar quantas linhas, colunas, diagonais existem preenchidas com o mesmo caracter.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	char matriz[3][3];
	int i=0, coluna=0, num=0;
	srand(time(NULL));
	printf("Valores da matriz:\n");
	for(i=0;i<3;i++){
		for(coluna=0;coluna<3;coluna++){
			num=rand()%2;
			switch(num){
				case 0:
					matriz[i][coluna]='O';
					break;
				case 1:
					matriz[i][coluna]='X';
					break;
			}
			printf("%c\t",matriz[i][coluna]);
		}
		printf("\n");
	}
    int totalLinhas= 0;
    for(int i= 0; i< 3; i++){
        if(matriz[i][0] == matriz[i][1] &&
           matriz[i][0] == matriz[i][2] &&
           matriz[i][1] == matriz[i][2]){
            totalLinhas++;
        }
    }
    printf("Quantidade de Linhas: %i\n",totalLinhas);
    int totalColunas= 0;
    for(int i= 0; i< 3; i++){
        if(matriz[0][i] == matriz[1][i] &&
           matriz[0][i] == matriz[2][i] &&
           matriz[1][i] == matriz[2][i]){
            totalColunas++;
        }
    }
    printf("Quantidade de Colunas: %i\n",totalColunas);
    int totalDiagonal= 0;

    if(matriz[0][0] == matriz[1][1] &&
       matriz[0][0] == matriz[2][2] &&
       matriz[1][1] == matriz[2][2]){
        totalDiagonal++;
    }

    if(matriz[0][2] == matriz[2][2] &&
       matriz[0][2] == matriz[2][0] &&
       matriz[2][2] == matriz[2][0]){
        totalDiagonal++;
    }

    printf("Quantidade de Diagonal: %i\n",totalDiagonal);
}
