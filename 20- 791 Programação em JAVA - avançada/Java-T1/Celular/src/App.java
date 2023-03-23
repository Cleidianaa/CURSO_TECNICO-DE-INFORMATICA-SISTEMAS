public class App {
    public static void main(String[] args) throws Exception {
        Celular celular = new Celular("Samsung", "Galaxy A13", "351968240177");

        celular.ObterMarca();
        celular.ObterModelo();
        celular.ObterNumero();

        celular.EnviarSMS("+351968240177", "Olá,  tenha um bom dia!");
        celular.Ligar("+351968244440", "Peço desculpas, não posso atender agora. ");
    }
}
