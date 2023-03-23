#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
A revista MyHouse especializada na venda de artigos para casa, indica as medidas em polegadas. O senhor Y, 
antes de fazer a sua encomenda pretende saber as correspondentes medidas em milimetros.
Crie um programa em C para o efeito e teste-o sabendo que 12.3 polegadas correspondem a 312.42 mm (1in.=25.4mm).
*/
/*
main() { 
	float mm, polegada;
		printf("Digite o valor que pretende converter em polegadas");
		scanf("%f", &polegada);
		mm=polegada*25.4;
		printf("O valor de %.2f polegadas em mm é de %.2f mm", polegada, mm);
	}
	
*/
/*

main() {
	float polegadas=0, milimetros=0;
	float const FATOR=25.4;
	printf("Qual o valor em polegadas?");
	scanf("%f", &polegadas);
	milimetros=(polegadas*FATOR);
	printf("%.2f polegadas correspondem a %.2f milimetros", polegadas,milimetros);
}

*/
/*
int main(){
    float rodizio,pessoas;
    float const FATOR=15;
    float const FATOR2=(10/100);

    printf("Digite o valor do valor do rodizio?");
    scanf("%f", &pessoas);

    rodizio=(FATOR*pessoas+FATOR2);

    printf("O valor final da conta é igual %f", rodizio);

}
*/
main(){
    int pessoas=0;
    float valorconta=0, valorcomissao=0, valorfinal=0;
    printf("Quantas pessoas participaram no rodizio?");
    scanf("%f", &pessoas);
    //valor da conta
    valorconta=(pessoas*15);
    //valor da comissão
    valorconta=(valorconta*0.1);
    // valor final 
    valorfinal=(valorconta+valorcomissao);

    printf("O valor da conta e %.2f", valorconta);
    printf("\nO valor da comissao e %.2f", valorcomissao);
    printf("\nO total da conta com a comissao e %.2f", valorfinal);

}

