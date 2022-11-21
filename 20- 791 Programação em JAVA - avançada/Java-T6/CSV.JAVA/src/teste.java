
import java.io.File; 
import java.io.FileNotFoundException;
import java.io.PrintWriter;

public class teste {
    public static void main(String[] args ) throws Exception{
        String Sucesso ="teste.csv";
         /********** Escrever no ficheiro *********/
        try (PrintWriter escreve = new PrintWriter(new File (Sucesso ))) {
            StringBuffer dados = new StringBuffer();

            dados.append("ID");
            dados.append(";");
            dados.append("Nome");
            dados.append(";");
            dados.append("Nasc");
            dados.append("\n");

            dados.append("001");
            dados.append(";");
            dados.append("Cleidiana");
            dados.append(";");
            dados.append("12/06/1986");
            dados.append("\n");

            dados.append("002");
            dados.append(";");
            dados.append("Ana");
            dados.append(";");
            dados.append("20/11/1980");
            dados.append("\n");

            dados.append("003");
            dados.append(";");
            dados.append("António");
            dados.append(";");
            dados.append("20/11/1989");
            dados.append("\n");

            dados.append("004");
            dados.append(";");
            dados.append("Enrique");
            dados.append(";");
            dados.append("01/05/1975");
            dados.append("\n");

            escreve.write(dados.toString());
            escreve.close();
            System.out.println("Dados execultados com Sucesso!");

       } catch (FileNotFoundException e){

        System.out.println(e.getMessage());
        
       }

       /*teste testecsv = new teste();
       testecsv.lerCSVFile();*/
    }


}
 