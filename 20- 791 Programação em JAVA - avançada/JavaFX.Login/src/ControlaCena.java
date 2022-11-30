import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.TextField;
import java.io.IOException;
import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;
import javax.swing.JOptionPane;

public class ControlaCena {

    @FXML
    private ResourceBundle resources;

    @FXML
    private URL location;

    @FXML
    private TextField txtSenha;

    @FXML
    private TextField txtUsuario;

    private Stage Palco;
    private Scene Cena;
    private Parent Raiz;

    public void mudarParaCena1(ActionEvent event) throws IOException{

        Raiz = FXMLLoader.load(getClass().getResource("Cena1.fxml"));
        Palco = (Stage)((Node)event.getSource()).getScene().getWindow();
        Cena = new Scene(Raiz);
        Palco.setScene(Cena);
        Palco.show();
    }


    public void mudarParaCena2(ActionEvent event) throws IOException{
        if(txtUsuario.getText().equals("Cleidiana") && txtSenha.getText().equals("123456")){
            Raiz = FXMLLoader.load(getClass().getResource("Cena2.fxml"));
            Palco = (Stage)((Node)event.getSource()).getScene().getWindow();
            Cena = new Scene(Raiz);
            Palco.setScene(Cena);
            Palco.show();
        }
        else{
            JOptionPane.showMessageDialog(null, "Usuário ou Senha incorreto!");
        }
    }

    public void enviar(ActionEvent event) throws IOException{
        JOptionPane.showMessageDialog(null, "Enviados com Sucesso!");
    }

    @FXML
    void initialize() {
        assert txtSenha != null : "fx:id=\"txtSenha\" was not injected: check your FXML file 'Cena1.fxml'.";
        assert txtUsuario != null : "fx:id=\"txtUsuario\" was not injected: check your FXML file 'Cena1.fxml'.";

    }

}
