public class DragonBall {

    String Nome;
    String Especie;
    int Nivel;
    int Forca;

    public DragonBall(String nome, String especie, int nivel,int forca) {
        this.Nome = nome;
        this.Especie = especie;
        this.Nivel = nivel;
        this.Forca = forca;
    }
    public DragonBall() {
        super();
    }
    public void ObterInformações() {
        System.out.println("---------------------DragonBall---------------------");
        System.out.format("Nome: %s \n", this.Nome);
        System.out.format("Tipo: %s \n", this.Especie);
        System.out.format("Nivel: %d \n", this.Nivel);
        System.out.format("Nivel: %d \n", this.Forca);
       
    }
    public void ObterPoder() {
        switch (this.Especie) {
            case "Saiyajin":
                System.out.format("%s é um DragonBall da espécie %s Genki / Dama  sua energia vem dos seres vivos \n", this.Nome, this.Especie);
                break;
            case "Humana":
                System.out.format("%s é um DragonBall da espécie  %s Humana Bulma  não tem habilidades  especiais \n", this.Nome, this.Especie);
                break;
            case "Humano":
                System.out.format("%s é um DragonBall da espécie  %s 	Humano  Yamcha é muito rápido e têm alguns habilidades \n", this.Nome, this.Especie);
                break;
            case "Namekuseijin":
                System.out.format("%s é um DragonBall da espécie  %s Namekuseijin demostra diversas habilidades como: expandir os braços, deixar  os olhos maiores e outras \n", this.Nome, this.Especie);
                break;
        }
    }
}
