import java.io.IOException;

public class FichasDeNomes {

    public static void main(String[] args) throws Exception {
        String fichNome = "C:\\Users\\PC Multimedia\\OneDrive\\TECNICOA DE INFORMATICA – SISTEMAS\\20- 791 Programação em JAVA - avançada\\Java-T4\\ArquivosdeTexto";

        /*********************************************/
        /********** Escrever no ficheiro *********/
        /*********************************************/
        try {
            EditarNomes dados = new EditarNomes(fichNome,  true);
            dados.EditarNoFich("Para informar  outra linha");

        } catch (IOException e) {

            System.out.println(e.getMessage());
        }
        try {
            texNomes ficheiro = new texNomes(fichNome);
            String[] asLinhas = ficheiro.abrirFicheiro();

            int i;
            for (i = 0; i < asLinhas.length; i++) {
                System.out.println(asLinhas[i]);
            }
        }
        catch (IOException e) {

            System.out.println(e.getMessage());
        }

        System.out.println("---- Seu Texto foi  anexado com sucesso-----");
    }
}

