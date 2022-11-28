import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

public class App extends Application{
  
    public static void main(String[] args) throws Exception {
      launch(args); // Isto serve para lançar a aplicação 

    }

    @Override
    public  void start(Stage primaryStage) throws Exception { // configurar a minha janela da app
      FXMLLoader fxmlLoader = new FXMLLoader(getClass().getResource("layout.fxml"));
      Parent raiz = fxmlLoader.load();
      Scene tela = new Scene(raiz);

      primaryStage.setTitle("Formulário");
      primaryStage.setScene(tela);
      primaryStage.show();
   
    }


};
   