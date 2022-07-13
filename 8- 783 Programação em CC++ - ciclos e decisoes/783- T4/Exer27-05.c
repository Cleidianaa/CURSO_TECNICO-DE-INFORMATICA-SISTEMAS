#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
1. Pretende-se desenvolver, em C, um programa que calcule a hora e o minuto de
chegada de um determinado voo. É solicitado ao utilizador a hora de partida, minuto de
partida, hora da duração, minuto da duração e apresente a hora e minuto de chegada.
As horas de partida e duração devem ser validadas e os valores situam-se entre 0 e 23,
enquanto que os minutos de partida e duração estão compreendidos entre 0 e 59. O
programa deve ainda informar se o voo chega no próprio dia ou no dia seguinte.
Hora Partida    Minuto Duração
Minuto Partida  Hora Chegada
Hora Duração    Minuto Chegada
Horas: 0 e 23
Minutos 0 e 59 */

 main(){
    setlocale(LC_ALL,"Portuguese");
    int h_part, m_part, h_dura, m_dura, h_chega, m_chega;
    printf(" 00   000  000    00   000    00   000   00000   00    \n");
    printf("0  0  0    0  0  0  0  0  0  0  0  0  0    0    0  0   \n");
    printf("0000  000  000   0  0  0 0   0  0  000     0    0  0   \n");
    printf("0  0  0    0 0   0  0  0     0  0  0 0     0    0  0   \n");
    printf("0  0  000  0  0   00   0      00   0  0    0     00    \n");

    printf(" PARTIDA \n");
    printf(" Hora: ");
    scanf("%i",&h_part);
    printf(" Minuto: ");
    scanf("%i",&m_part);

    printf(" DURAÇÃO DO VOO \n");
    printf(" Hora:");
    scanf("%i", &h_dura);
    printf(" Minuto:\n");
    scanf("%i", &m_dura);

    h_chega=h_dura+h_part;
    m_chega=m_dura+m_part;

if((h_part<0 || h_part<=23 && (h_dura<0 || h_dura<=23) && (m_part<0 && m_part<=59) && m_dura <0 || m_dura<=59)){
    if (h_chega<=23 && m_chega<=59){
        printf(" Chegada  %i Horas: %i Minutos \n Chegou no mesmo dia!", h_chega, m_chega);
    }
    else if(h_chega>23 && m_chega>59){
        printf(" Chegada %i Horas: %i Minutos  \n Chegou no dia seguinte", h_chega-23, m_chega-60);
        }
    else if (h_chega>23 && m_chega<=59){
        printf(" Chegada %i Horas:  %i Minutos \n Seu voo chegou no dia seguinte", h_chega-24, m_chega);
        }
    else if (h_chega<=23 && m_chega>59){
        printf(" Chegada %i Horas:  %i Minutos \n Seu voo chegou no mesmo dia", h_chega+1, m_chega-60);
        }
}
else{
        printf("DADOS INVALIDOS!");
        }

}
