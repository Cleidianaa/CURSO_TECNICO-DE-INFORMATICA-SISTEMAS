/*
Exercício 2
Escreva um programa em que leia dois valores para as variáveis A e B, e 
efetuar as trocas dos valores de forma que a variável A passe a possuir o valor da 
variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores 
trocados. 
Lembrando que temos de ter 3 variáveis para que uma haja como variável de 
armazenamento, ou seja, para evitar que o valor original de A se perca é necessário 
associar a uma outra variável (denominada usualmente de variável auxiliar) tal valor, 
estabelecer uma associação de A com o valor em B e, por último, associar B ao valor 
"salvo" na variável auxiliar.
*/
class Exer02{
	public static void main(String[] args) {//Efetuei 3 variáveis, e C é a variável auxiliar.
		int A, B, C;
		A=5;
		B=10;
		C=0;
		
		System.out.println( "Valor Original de A: " + A);
		System.out.println( "Valor Original de B: " + B);
		
		C = A;
		A = B;
		B = C;
		 
		System.out.println( "Mostrar o Valor  auxiliar de A: " + A);
		System.out.println( "Mostrar o Valor auxiliar de B: " + B);
	}
}