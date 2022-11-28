import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;

public class NewController {

    @FXML
    private ResourceBundle resources;

    @FXML
    private URL location;

    @FXML
    private Button btnClicar;

    @FXML
    void AcaoDoBotao(ActionEvent event) {
        System.out.println("Clicou...");
        


    }

    @FXML
    void initialize() {
        assert btnClicar != null : "fx:id=\"btnClicar\" was not injected: check your FXML file 'Newcontroller.fxml'.";

    }

}
