import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class App extends Application {


    public static void main(String[] args) throws Exception {
      launch( ); // Isto serve para lançar a aplicação 

    }

    @Override
    public  void start(Stage primaryStage) throws Exception { // configurar a minha janela da app

      primaryStage.setTitle(" Aula do Bruno");// Configuração do titulo
      Button botao = new Button("Entrar");// Adiciono um botão a minha app e configuro o texto nele
      botao.setOnAction(new EventHandler<ActionEvent>() { // configurar a acção que o botão fara

        @Override
        public void handle(ActionEvent event){ // metodo acção
          System.out.println("Bem Vindo"); // Evento do que acontece quanto eu carrego no botao
        }
        
      });


    StackPane raiz = new StackPane(); // Criar um objeto que sera o painel da minha app
    raiz.getChildren().addAll(botao); // inserir o botão no painel 
    primaryStage.setScene(new Scene(raiz,300, 250)); // configurar as medidas do painel
    primaryStage.show();

  }


}
   