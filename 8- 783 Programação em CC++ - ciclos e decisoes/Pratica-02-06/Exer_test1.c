#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício Prático
Uma empresa pretende atribuir um bónus de Natal aos seus colaboradores,
em função da idade, antiguidade (nº de anos de serviço) e nº de filhos calculado da seguinte forma:
-> 5 € por cada ano acima dos 45 anos de idade.
-> 10 € por ano de serviço, até 10 anos, e 20 € por cada ano a mais.
-> 25 € por filho, num máximo até 3 filhos. Acima de 3 filhos receberá sempre 75 €.
-> Validações:
o A idade deve estar compreendida entre 18 e 65.
o A Antiguidade não pode ser maior que a idade.
o O nº de filhos não pode ser um número negativo.
*/
/*
int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade, anos_servico, num_filhos, total;
    printf(" Qual sua idade: \n");
    scanf("%i", &idade);
    printf(" Quantos  anos de serviços: \n");
    scanf("%i", &anos_servico);
    printf(" Quantos filhos você tem: \n");
    scanf("%i", &num_filhos);
    if((idade>=18 && idade <=65) && (idade>anos_servico) && (num_filhos>=0)){

    if(idade>45){
            total+=(idade-45)*5;
    }
    if(anos_servico<=10){
        total+=(anos_servico*10);
    }
    else{
        total+=100+(anos_servico-10)*20;
    }
    if(num_filhos<=3){
        total+=(num_filhos*25);
    }
    else{
        total+=75;
    }
    printf(" O valor da prenda de NATAL é %i:", total);
}
else{
    printf(" DADOS INVALIDOS!");
}

}
*/

main() {
    setlocale(LC_ALL,"");
    int idade=0, antiguidade=0, nfilhos=0, bonus=0;
    printf("Por favor indique a idade do empregado:\t");
    scanf("%i",&idade);
    printf("Por favor indique os anos de serviço:\t");
    scanf("%i",&antiguidade);
    printf("Por favor indique o número de filhos:\t");
    scanf("%i",&nfilhos);

    if((idade>=18&&idade<=65)&&(antiguidade<idade)&&(nfilhos>=0)){
    if(idade>=45){
    bonus+=(idade-45)*5;
    printf("\n\t\tBonus de idade é: %i", bonus);
    }
    switch(antiguidade){
    case 0 ... 10:
    bonus+=(antiguidade*10);
    break;
    default:
    bonus+=(10*10)+(antiguidade-10)*20;
    break;
    }
    printf("\n\t\tBonus de idade + Antiguidade é: %i", bonus);
    switch (nfilhos){
    case 0 ... 3:
    bonus+=nfilhos*25;
    break;
    default:
    bonus+=75;
    break;
    }
    printf("\n\t\tO bonus que irá receber é: \t%i", bonus);
    }
    else{
    printf("\n\t\t\tOs dados introduzidos não são válidos !!!.");
    }
}


