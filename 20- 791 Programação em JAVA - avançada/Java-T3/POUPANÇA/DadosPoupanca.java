package POUPANÇA;

import java.awt.Component;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.WindowConstants;

public class DadosPoupanca extends JFrame {

    private static final Component OK = null;

    private JTextField campoJuros, campoAnos, campoDeposito;

    private JLabel lbJuros, lbAnos, lbDeposito, lbTotal, lbResultado;

    public DadosPoupanca(JButton ok){

        super( "Poupex");

        this.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);

        this.setBounds(50, 100,  350, 150);

        JPanel painel = new JPanel();

        this.setContentPane(painel);

        lbJuros = new JLabel( "Juros ao mès %: ");

        campoJuros = new JTextField( 15);

        painel.add(lbJuros);
        painel.add(campoJuros);

        lbAnos = new JLabel(  "Num. de anos: ");

        campoAnos = new JTextField( 15);

        painel.add(lbAnos);
        painel.add(campoAnos);

        lbDeposito = new JLabel( "Depósito mensal R$:");

        campoDeposito = new JTextField(  15);

        painel.add(lbDeposito);
        painel.add(campoDeposito);

        lbTotal = new JLabel("Total poupado R$: ");

        painel.add(lbTotal);

        lbResultado = new JLabel( "");

        painel.add(lbResultado);

        ok = new JButton( "OK! ");

        painel.add(OK);


    }

    public DadosPoupanca() {
    }


   
}
