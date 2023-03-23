import java.net.URL;
import java.util.ResourceBundle;
import javax.swing.JOptionPane;
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
    private TextField txtEndereço;

    @FXML
    private TextField txtSenhar;

    @FXML
    private TextField txtUtilizador;

    @FXML
    void fazerlogin(ActionEvent event) {
        String utilzador = txtUtilizador.getText();
        String endereço =txtEndereço.getText();
        String senha = txtSenhar.getText();

        if(utilzador.equals("Cleidiana Barbosa")&& endereço.equals("Santo Antonio") && senha.equals("123450001")){
            System.out.println("Login efectuado com sucesso!");
            JOptionPane.showMessageDialog(null, "Dados Enviados com Sucesso!");
        } else{
            System.out.println("Utilizador ou Senha inválidos");
            JOptionPane.showMessageDialog(null, "Dados Errados, Por favor corrigir!");
        }

    }

    @FXML
    void initialize() {
        assert btnLogin != null : "fx:id=\"btnLogin\" was not injected: check your FXML file 'layout.fxml'.";
        assert txtEndereço != null : "fx:id=\"txtEndereço\" was not injected: check your FXML file 'layout.fxml'.";
        assert txtSenhar != null : "fx:id=\"txtSenhar\" was not injected: check your FXML file 'layout.fxml'.";
        assert txtUtilizador != null : "fx:id=\"txtUtilizador\" was not injected: check your FXML file 'layout.fxml'.";

    }

}
