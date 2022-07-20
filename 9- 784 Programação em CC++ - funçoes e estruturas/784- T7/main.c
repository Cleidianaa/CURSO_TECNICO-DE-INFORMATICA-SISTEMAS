#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
Exercício 3
Crie um programa em C que preencha uma matriz 5x5, de forma aleatória com os valores “1”, “X” ou “2”.
Sabendo que o “1” corresponde a vitória, o “X” a empate e o “2” a derrota,
apresentar uma contagem final das vitórias, empates e derrotas.
*/

main(){
	setlocale(LC_ALL,"Portuguese");
	char matriz[5][5];
	int i= 0, coluna=0, num=0,vitoria=0,empate=0,derrota=0;
	srand(time(NULL));
	printf("Valores da matriz:\n");
	for(i=0;i<5;i++){
		for(coluna=0;coluna<5;coluna++){
			num=rand()%3;
			switch(num){
				case 0:
					matriz[i][coluna]='1';
					break;
				case 1:
					matriz[i][coluna]='X';
					break;
                case 2:
					matriz[i][coluna]='2';
					break;
			}
			printf("%c\t",matriz[i][coluna]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++){
		for(coluna=0;coluna<5;coluna++){
            if(matriz[i][coluna] == '1'){
                vitoria++;
            }
            else if(matriz[i][coluna] == 'X'){
                empate++;
            }
            else if(matriz[i][coluna] == '2'){
                derrota++;
            }
        }
    }
    printf("Total de Vitórias: %i\n", vitoria);
    printf("Total de Empates: %i\n", empate);
    printf("Total de Derrotas: %i\n", derrota);
}

