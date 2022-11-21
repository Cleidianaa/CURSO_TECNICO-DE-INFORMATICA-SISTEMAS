import java.io.FileWriter;
import java.io.PrintWriter;
import java.io.IOException;

public class EditarNomes {
    private String path;
    private boolean anexarfich = false;

    public EditarNomes(String fichpath) {
        path = fichpath;
    }

    public EditarNomes(String fichpath, boolean anexardado) {

        path = fichpath;
        anexarfich = anexardado;
    }

    public void EditarNoFich(String txtLinha) throws IOException {

        FileWriter escreve = new FileWriter(path, anexarfich);
        PrintWriter imprimeLinha = new PrintWriter(escreve);

        imprimeLinha.printf("%s\n", txtLinha);

        imprimeLinha.close();

    }

}