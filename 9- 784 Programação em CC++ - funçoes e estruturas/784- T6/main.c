#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
-Criar um programa em C com uma estrutura de menu idêntica à abaixo apresentada:
*** Notas de Alunos ***
1- Recolha de notas
2- Mostrar todas as notas
3- Mostrar a média das notas
4- Alterar uma nota(indicando a posição)
5- Mostrar a(s) nota(s) mais alta(s)
6- Mostrar os aprovados (nota >=10)
7- Mostrar os reprovados (nota <10)
0- Sair
Notas:
1.O array tem 10 elementos e é do tipo float.
2.As notas situam-se entre 0 e 20.
*/

main(){
	setlocale(LC_ALL,"Portuguese");
	float array[10] = {0,0,0,0,0,0,0,0,0,0};
	int opcao=0;

	do{
		system("cls");
		printf("\n*** Notas de Alunos ***\n");
		printf("\n1 - Recolha de notas");
		printf("\n2 - Mostrar todas as notas");
		printf("\n3 - Mostrar a média das notas");
		printf("\n4 - Alterar uma nota(indicando a posição)");
		printf("\n5 - Mostrar a(s) nota(s) mais alta(s)");
		printf("\n6 - Mostrar os aprovados (nota >=10)");
		printf("\n7 - Mostrar os reprovados (nota <10)");
		printf("\n8 - Mostart em  Ordem Crescente as notas");
		printf("\n0 - Sair");
		printf("\n\nDigite a sua opção:");
		scanf("%i",&opcao);
		switch(opcao){
			case 0:
				printf("\nFim do programa.");
				break;
			case 1:
				InformarValores(array);
				break;
			case 2:
				EscreverValores(array);
				break;
			case 3:
				MostrarMedia(array);
				break;
            case 4:
				AlterarNota(array);
				break;
            case 5:
				MaiorNota(array);
				break;
            case 6:
				MostrarAprovados(array);
				break;
            case 7:
				MostrarReprovados(array);
				break;
            case 8:
				MostrarCrescente(array);
				break;
			default:
				printf("\nOpção inválida.");
				sleep(2);
		}
	}while(opcao!=0);
}
// 1 - Recolha de notas
void InformarValores(float v[]){
    printf("*** RECOLHER NOTAS ***\n");
	for(int i= 0; i< 10; i++){
        int valido= 0;
		do{
            printf("As notas situam-se entre 0 e 20.\n");
		    printf("Informe a nota para o %iª aluno: ",(i+1));
            scanf("%f",&v[i]);

            if(v[i] >= 0 && v[i] <= 20){
                valido= 1;
            }
            else{
                printf("Nota Inválida \n");
            }
		}while(valido!= 1);
	}
	system("pause");
}
// 2 - Mostrar todas as notas
void EscreverValores(float v[]){
    printf("*** MOSTRAR TODAS AS NOTAS ***\n");
	for(int i= 0; i< 10; i++){
		printf("\n%iª aluno: %.2f\n",(i+1),v[i]);
	}
	system("pause");
}
// 3 - Mostrar a média das notas
void MostrarMedia(float v[]){
    printf("*** MOSTRAR MÉDIA ***\n");
	float soma= 0;
	for(int i= 0; i< 10; i++){
		soma +=v[i];
	}
    printf("Média: %.2f \n", soma/10);
	system("pause");
}

// 4 - Alterar uma nota(indicando a posição)
void AlterarNota(float v[]){
    printf("*** ALTERAR NOTA ***\n");
	int num=0;
	printf("\nDigite o aluno:");
	scanf("%i",&num);

    if (num>= 1 && num<= 10){
        int valido= 0;
		do{
            printf("As notas situam-se entre 0 e 20.\n");
		    printf("\nDigite a nova nota: ");
            scanf("%f",&v[num-1]);

            if(v[num-1] >= 0 && v[num-1] <= 20){
                valido= 1;
            }
            else{
                printf("Nota Inválida \n");
            }
		}while(valido!= 1);
    }
	else{
		printf("\nO aluno indicado não existe na lista.\n");
	}
	system("pause");
}

// 5 - Mostrar a(s) nota(s) mais alta(s)
void MaiorNota(float v[]){
    printf("*** MAIOR NOTA ***\n");
    float maior= 0;
	for(int i = 0; i < 10; i++){
		if(v[i] > maior){
            maior= v[i];
        }
	}
	for(int i= 0; i< 10; i++){
		if(v[i] == maior){
            printf("\n%iª aluno: %.2f\n",(i+1),v[i]);
        }
	}
	system("pause");
}
// 6 - Mostrar os aprovados (nota >=10)
void MostrarAprovados(float v[]){
    printf("*** MOSTRAR OS APROVADOS ***\n");

	for(int i= 0; i< 10; i++){
		if(v[i] >= 10){
            printf("\n%iª aluno: %.2f - APROVADO\n",(i+1),v[i]);
        }
	}

	system("pause");
}

// 7 - Mostrar os reprovados (nota <10)
void MostrarReprovados(float v[]){
    printf("*** MOSTRAR OS REPROVADOS ***\n");

	for(int i= 0; i< 10; i++){
		if(v[i]< 10){
            printf("\n%iª aluno: %.2f - REPROVADO\n",(i+1),v[i]);
        }
	}
	system("pause");
}

// 8 - Ordenar em Cresente as notas
void MostrarCrescente(float array[]){
    printf("*** NOTAS ORDENADAS CRESENTE ***\n");
    float resto;
    for(int j= 0; j< 10; j++){
        for(int i= j + 1; i< 10; i++){
          if(array[i] < array[j]){
            resto=array[i];
            array[i]=array[j];
            array[j]=resto;
          }
        }
    }
    for(int i= 0; i< 10; i++){
		printf("\n%iª Nota: %.2f\n",(i+1),array[i]);
	}

    system("pause");
}
