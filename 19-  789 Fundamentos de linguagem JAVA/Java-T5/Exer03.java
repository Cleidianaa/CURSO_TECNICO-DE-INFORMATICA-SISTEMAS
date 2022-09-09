/*
Exercício 3
Escrever um programa que leia o nome de um aluno e as notas das três provas que ele 
obteve no semestre. No final informar o nome do aluno e a sua média (aritmética). 
MEDIA = nota1 + nota2 + nota3 / 3 
*/
public class Exer03{
	public static void main(String[] args){
		String aluno = "Cleidiana Barbosa";
		double nota1=5.4;
		double nota2=7.5;
		double nota3=9.2;
		double media=( nota1 + nota2 + nota3)/3;
		
		System.out.println( "A nota1 do " + aluno +" 'é : " + nota1);
		System.out.println( "A nota2 do " + aluno +" 'é : " + nota2);
		System.out.println( "A nota3 do " + aluno +" 'é : " + nota3);
		System.out.println( "Média aritmética do(a) " + aluno +" 'é : " + media);
	}
}