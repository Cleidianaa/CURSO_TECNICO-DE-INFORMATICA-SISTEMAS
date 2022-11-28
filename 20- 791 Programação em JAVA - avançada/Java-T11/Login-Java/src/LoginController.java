import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import java.io.IOException;
import javafx.scene.Node;


public class LoginController {
    private Stage Palco;
    private Scene Cena;
    private Parent  Raiz;

    public void mudarlogin (ActionEvent event) throws IOException{
        Raiz = FXMLLoader.load(getClass().getResource("Login1.fxml"));
        Palco = (Stage)((Node)event.getSource()).getScene().getWindow();
        Cena = new Scene(Raiz);
        Palco.setScene(Cena);
        Palco.show();

    }

    public void mudarformulario (ActionEvent event) throws IOException{
        Raiz = FXMLLoader.load(getClass().getResource("layout.fxml"));
        Palco = (Stage)((Node)event.getSource()).getScene().getWindow();
        Cena = new Scene(Raiz);
        Palco.setScene(Cena);
        Palco.show();

    }

    @FXML
    private ResourceBundle resources;

    @FXML
    private URL location;

    @FXML
    private Button btnLogin;

    @FXML
    private TextField txtSenhar;

    @FXML
    private TextField txtUtilizador;

    @FXML
    void fazerlogin(ActionEvent event) {
        String utilzador = txtUtilizador.getText();
        String senha = txtSenhar.getText();

        if(utilzador.equals("Cleidiana Barbosa")&& senha.equals("123450001")){
            System.out.println("Login efectuado com sucesso!");
        } else{
            System.out.println("Utilizador ou Senha inválidos");
        }
    }

    @FXML
    void initialize() {
        assert btnLogin != null : "fx:id=\"btnLogin\" was not injected: check your FXML file 'Untitled'.";
        assert txtSenhar != null : "fx:id=\"txtSenhar\" was not injected: check your FXML file 'Untitled'.";
        assert txtUtilizador != null : "fx:id=\"txtUtilizador\" was not injected: check your FXML file 'Untitled'.";

    }
    

}
 

