#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Tarefa 01
Pretende-se  criar um programaem  C  que  faça  a  gestão de uma fila de  espera. Para  o efeito vamoster um array com 10
elementosdo tipo inteiro.
Notas:
Para  realizar  a  marcação  é  solicitado  ao  utilizador  o  nº  do  utente  (entre  1  e  999)  e colocado na 1ª posição livre (iguala zero).
A marcação de urgência colocao utente na posiçãoque o utilizador indicar.
A eliminação retirada lista o número do utente.
Utilize funções.
O registo das marcações deve estar sempre visível e passa a ter as seguintes opções:
Crie um menu com as seguintes opções:
-Realizar Marcação.
-Marcação de Urgência.
-Eliminar Marcação.
-Terminar o programa.
*/
  main(){
	setlocale(LC_ALL,"Portuguese");
	int vetor[10]={0,0,0,0,0,0,0,0,0,0};
	int opcao=9;
	do{
		system("cls");
		printf("\nClínica Quebra-Ossos\n");
		printf("\nRegisto de Marcações\n\n");
		for(int i= 0; i< 10; i++){
            printf("%i\t",i);
        }
        printf("\n");
		for(int i = 0; i< 10; i++){
            printf("%i\t",vetor[i]);
        }
		printf("\n----------------------------\n");
		printf("     Menu\n");
		printf("----------------------------\n");
		printf("\n1 –Realizar Marcação.");
		printf("\n2 –Marcação de Urgência.");
		printf("\n3 –Eliminar Marcação.");
		printf("\n9 -Terminar o programa.");
		printf("\n----------------------------\n");
		printf("\n\nDigite a sua opção:");
		scanf("%i",&opcao);
		switch(opcao){
			case 1:
				RealizaMarcacao(vetor);
				break;
			case 2:
				MarcacaoUrgencia(vetor);
				break;
			case 3:
				EliminarMarcacao(vetor);
				break;
            case 9:
				printf("\nFim do programa.");
				break;
			default:
				printf("\nOpção inválida.");
				sleep(2);
		}
	}while(opcao!=9);
}
// 1 - REALIZAR MARCAÇÃO
void RealizaMarcacao(int v[]){
    printf("*** REALIZAR MARCAÇÃO ***\n");
    int livre= 0;
	for(int i= 0; i < 10; i++){
        if (v[i] ==0){
            livre =1;
        }
        if(livre ==1){
            int utente= 0;
            int valido= 0;
            do{
                printf("O nº do utente situam-se entre 1 e 999.\n");
                printf("Digite o nº do utente\n");
                scanf("%i",&utente);
                if(utente >= 1 && utente <=999){
                    valido =1;
                    int existe= 0;
                    for(int i= 0; i< 10; i++){
                        if(v[i] ==utente){
                            existe=1;
                        }
                    }
                    if(existe ==1){
                        printf("Utente já possui marcação!\n");
                    }
                    else{
                        v[indice] = utente;
                    }
                }
                else{
                    printf("Nº do utente inválido \n");
                }
            }while(valido!= 1);
            break;
        }
	}
	if (livre ==0){
        printf("Todos os horários estão ocupados!\n");
    }
	system("pause");
}
// 2 - MARCAÇÃO DE URGÊNCIA
void MarcacaoUrgencia(int v[]){
	for(int indice = 0; indice < 10; indice++){
        int utente = 0;
        int valido = 0;
        do{
            printf("O nº do utente situam-se entre 1 e 999.\n");
            printf("Digite o nº do utente\n");
            scanf("%i",&utente);
            if(utente >= 1 && utente <= 999){
                int existe = 0;
                for(int i = 0; i < 10; i++){
                    if(v[i] == utente){
                        existe = 1;
                    }
                }
                if(existe== 1){
                    printf("Utente já possui marcação!\n");
                    valido = 1;
                }
                else{
                    int agenda= 999;
                    printf("O nº da agenda situam-se entre 0 e 9.\n");
                    printf("Digite o nº da agenda\n");
                    scanf("%i",&agenda);
                    if(agenda >= 0 && agenda <= 9){
                        valido = 1;
                        v[agenda] = utente;
                    }
                    else{
                        printf("Nº da agenda inválido \n");
                    }
                }
            }
            else{
                printf("Nº do utente inválido \n");
            }
        }while(valido!= 1);
        break;
	}
	system("pause");
}
// 3 - ELIMINAR MARCAÇÃO
void EliminarMarcacao(int v[]){
    int utente;
    int valido= 0;
    printf("*** ELIMINAR MARCAÇÃO ***\n");
    do{
        printf("O nº do utente situam-se entre 1 e 999.\n");
        printf("Digite o nº do utente\n");
        scanf("%i",&utente);
        if(utente >= 1 && utente <= 999){
            int existe = 0;
            for(int i = 0; i < 10; i++){
                if(v[i] == utente){
                    v[i] =0;
                    printf("Marcação Elimanda!\n");
                    valido=1;
                    existe=1;
                    break;
                }
            }
            if(existe== 0){
                printf("Utente não possui marcação!\n\n");
                valido = 1;
                break;
            }
        }
        else{
            printf("Nº do utente inválido \n");
        }
    }while(valido!= 1);
	system("pause");
}
