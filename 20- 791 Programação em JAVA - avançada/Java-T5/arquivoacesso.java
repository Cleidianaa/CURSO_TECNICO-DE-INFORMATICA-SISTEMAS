import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class arquivoacesso {

    public static void ler(String path) throws IOException {

        BufferedReader buffler = new BufferedReader(new FileReader(path));
        String linha = ""; 

        while(true){
            if ( linha != null){
                System.out.println(linha);
            } else {
            break;}
            linha=buffler.readLine();

        }
        buffler.close();
    }

    public static void escrever(String path) throws IOException{
        BufferedWriter buffEscreve =  new BufferedWriter(new FileWriter(path) );
        String linha = "";
       try ( Scanner insere = new Scanner(System.in)){
        System.out.println("Escreva aqui");
        linha = insere.nextLine();

       }
       System.out.println("\n Voce insewriu a seguimte frase:");
        buffEscreve.append(linha + "\n");
        buffEscreve.close();




    }
    
}
