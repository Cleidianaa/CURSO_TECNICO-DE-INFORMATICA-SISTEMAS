#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Escreva um programa em C para uma empresa de aluguer de automóveis, que imprima o
montante devido por cada cliente. O montante devido depende dos quilómetros efetuados,
do número de dias que durou o aluguel e do tipo de carro alugado.
Os Volkswagen custam 30€ por dia e 1,20€ por quilómetro.
Os Toyota custam 35€ por dia e 1,50€ por quilómetro.
Os Mercedes custam 60€ por dia e 2,50€ por quilómetro.
Os primeiros 75 quilómetros são
gratuitos, independentemente do tipo de carro alugado
*/


void main(){
    setlocale(LC_ALL,"Portuguese");
    float dias, km, modelo;

    printf("\tInforme quantos dias  alugou o carro:\n");
    scanf("%f", &dias);
    printf("\tQuantos km você rodou:\n");
    scanf("%f", &km);
    printf("\tInforme de 1 à 3 para cada modelo, sendo que o \n\tVOLKSWAGEN =1\n\tTOYOTA =2\n\tMERCEDES =3\n");
    printf("\tQual a modelo do carro:\n");
    scanf("%f", &modelo);

if ((km>75 && modelo>=1 && modelo<=3)||(km<=75 && modelo>=1 && modelo<=3)){
    if (modelo==1 && km>75){
        printf("\tO valor a pagar do aluguel vai ser: %.2f euros\n",(((km-75)*1.20)+dias*30));
        }
        else if(modelo==2 && km>75){
        printf("\tO valor a pagar do aluguel vai ser: %.2f euros\n",(((km-75)*1.50)+dias*35));
        }
        else if(modelo==3 && km>75){
        printf("\tO valor a pagar do aluguel vai ser: %.2f euros\n",(((km-75)*2.50)+dias*60));
        }
        else if(modelo==1 && km<=75){
        printf("\tO valor a pagar do aluguel vai ser: %.2f euros\n",((km*1.20)+dias*30));
        }
        else if(modelo==2 && km<=75){
        printf("\tO valor a pagar do aluguel vai ser: %.2f euros\n",((km*1.50)+dias*35));
        }
        else{
        printf("\tO valor a pagar do aluguel vai ser: %.2f euros\n",((km*2.50)+dias*60));
            }
}

}

