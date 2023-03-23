import javax.swing.*;

public class DadosPoupanca extends JFrame {
        
    private JTextField campoNome, campoScore;
        
        private JLabel lbNome;
        private JLabel lbScore;
       
        private JButton OK;
        private JButton Cancel;
        
    public DadosPoupanca(){
        
        super("Game Entry");
        this.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        this.setBounds(50, 100, 350, 150);
        
        JPanel painel = new JPanel();
        this.setContentPane(painel);
        
        lbNome = new JLabel("Nome:");
        campoNome = new JTextField(25);
        
        painel.add(lbNome);
        painel.add(campoNome);
        
        lbScore = new JLabel(" Score:");
        campoScore= new JTextField(10);
        
        painel.add(lbScore);
        painel.add(campoScore);
        
        
        OK = new JButton("OK");
        Cancel = new JButton("Cancel");

        painel.add(OK);
        painel.add(Cancel);
        
    }
        
}


