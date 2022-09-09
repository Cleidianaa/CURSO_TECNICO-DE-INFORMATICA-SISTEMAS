/*
Exercício 4
Faça um programa, da sua escolha, que utilize os operadores lógicos.
Informe sua idade, e se é maior ou menor de idade:
*/
class Exer04{
  public static void main(String[] args) {
    int ano=2022;
    int resto4=0;
    int resto100=0;
    int resto400=0;
	
    resto4 = ano % 4;
    resto100 = ano % 100;
    resto400 = ano % 400;

    if(resto4 == 0 && resto100 == 0)
    {
      System.out.println("Ano "+ano+" é Bissexto");
    }
    else if(resto400== 0)
    {
       System.out.println("Ano "+ano+" é Bissexto");
    }
    else
    {
      System.out.println("Ano "+ano+" Não é Bissexto");
    }
  }
}