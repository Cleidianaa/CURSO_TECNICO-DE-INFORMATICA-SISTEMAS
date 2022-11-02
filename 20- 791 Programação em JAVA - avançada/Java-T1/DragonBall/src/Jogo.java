public class Jogo {
    public static void main(String[] args) throws Exception {
        DragonBall gokuDragonBall =new DragonBall("Son Goku", "	Saiyajin", 4, 400);
        DragonBall bulmaDragonBall=new DragonBall("Bulma Briefs", "	Humana", 1, 10);
        DragonBall yamchaDragonBall =new DragonBall("Yamcha", "	Humano", 5, 10);
        DragonBall picooloDragonBall =new DragonBall("Piccolo", "Namekuseijin", 15, 105);

        gokuDragonBall.ObterInformações();
        bulmaDragonBall.ObterInformações();
        yamchaDragonBall.ObterInformações();
        picooloDragonBall.ObterInformações();

        gokuDragonBall.ObterPoder();
        bulmaDragonBall.ObterPoder();
        yamchaDragonBall.ObterPoder();
        picooloDragonBall.ObterPoder();
    }
}
