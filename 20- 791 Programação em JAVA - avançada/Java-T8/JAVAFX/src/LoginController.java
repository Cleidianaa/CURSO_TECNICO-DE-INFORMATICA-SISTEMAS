import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;

public class LoginController {

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

        if(utilzador.equals("Cleidiana.Babrosa")&& senha.equals("123450001")){
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
