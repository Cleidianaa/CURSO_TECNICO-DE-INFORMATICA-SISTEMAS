public class Celular {
    public String Marca;
    public String Mobelo;
    public String Numero;

    public Celular() {
        super();
    }
    public Celular(String marca, String mobelo, String numero) {
        this.Marca = marca;
        this.Mobelo = mobelo;
        this.Numero = numero;
    }
    public void ObterMarca() {
        System.out.println("Marca: " +Marca);
    }
    public void ObterModelo() {
        System.out.println("Mobelo: " +Mobelo);
    }

    public void ObterNumero() {
        System.out.println("Numero: " +Numero);
    }

    public void EnviarSMS(String numero, String texto) {
        System.out.println("-------------ENVIAR SMS---------------");
        System.out.println("Remetente: " + this.Numero);
        System.out.println("Destinatário: " + numero);
        System.out.println("Mensagem: " + texto);
        System.out.println("Status: Enviada");
    }

    public void Ligar(String numero, String texto) {
        System.out.println("------------- LIGAR ---------------");
        System.out.println("Remetente: " + this.Numero);
        System.out.println("Destinatário: " + numero);
        System.out.println("Ligando...............");
        System.out.println("Mensagem: " + texto);
        System.out.println("Status: Enviada");
    }
}


