import java.io.File; 
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class lerCSVFile{

    public static void main(String[] args) throws Exception{}

    private String path;

    public lerCSVFile(String CSVpath) {
        path = CSVpath;
    }

    public   lerCSVFile() {

        List<List<String>> grava = new ArrayList<>();
        try(Scanner ler = new Scanner(new File(path));) {
            while (ler.hasNextLine()){
                grava.add(getGravaALinha(ler.nextLine()));
            }

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        System.out.println(grava.toString());      
      
    }

    private List<String> getGravaALinha(String linha){
        List<String> valor = new ArrayList<String>();

        try(Scanner  linhaScanner = new Scanner(linha)){
            linhaScanner.useDelimiter(";");
            while(linhaScanner.hasNext()){
                valor.add(linhaScanner.next());
            }
        }
        return valor;
    }

}
