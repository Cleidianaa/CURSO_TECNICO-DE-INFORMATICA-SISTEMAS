import java.io.IOException;
import java.io.FileReader;
import java.io.BufferedReader;

public class texNomes {
    private String path;
    public texNomes(String ficheiropath) {
        path = ficheiropath;
    }

    public String[] abrirFicheiro() throws IOException {
        FileReader fch = new FileReader(path);
        try (BufferedReader txtLer = new BufferedReader(fch)) {
            int numLinhas = lerLinhas();
            String[] txtData = new String[numLinhas];

            int i;
            for (i = 0; i < numLinhas; i++) {
                txtData[i] = txtLer.readLine();
            }
            txtLer.close();
            return txtData;
        }

    }
    int lerLinhas() throws IOException {
        FileReader fchLer = new FileReader(path);
        BufferedReader bfr = new BufferedReader(fchLer);
        String aLinha = bfr.readLine();
        int numaLinhas = 0;

        while (aLinha != null) {
            aLinha = bfr.readLine();
            numaLinhas++;
        }
        bfr.close();
        return numaLinhas;
    }

}