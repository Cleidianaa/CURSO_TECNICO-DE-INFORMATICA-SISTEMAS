/*
Exercício 5
Numa empresa trabalhamos, há tabelas com o quanto foi gasto em cada mês. Para 
fechar o balanço do primeiro trimestre, precisamos somar o gasto total. 
Sabendo que, em janeiro, foram gastos 15.000 euros, em fevereiro, 23.000 euros, e, 
em março, 17.000 euros, faça um programa que calcule e imprima o gasto total no 
trimestre e a média mensal de gastos. Siga esses passos:
• Crie uma classe chamada BalancoTrimestral com um bloco main, como nos 
exemplos anteriores;
• Dentro do main (o “miolo” do programa), declare uma variável inteira 
chamada gastosJaneiro e inicialize-a com 15.000;
• Crie também as variáveis gastosFevereiro e gastosMarco, inicializando-as com 
23.000 e 17.000, respetivamente. Utilize uma linha para cada declaração;
• Crie uma variável chamada gastosTrimestre e inicialize-a com a soma das 
outras três variáveis;
• Crie uma variável chamada mediaPorMes e inicialize-a com a divisão 
de gastosTrimestre por três.
• Imprima a variável gastosTrimestre.
*/
class BalancoTrimestral{
	public static void main(String[] args) {
		double gastodeJaneiro = 15000;
		double gastosFevereiro = 23000;
		double gastosMarco = 17000;
		double gastosTrimestre =gastodeJaneiro+gastosFevereiro+gastosMarco;
		double mediaPorMes=gastosTrimestre/3;
		 
		System.out.println( "Os gastos Trimestral são de: " + gastosTrimestre);
		
	}
}