using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _785_App04
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private void BtnReset_Click(object sender, EventArgs e)
        {
            txtcomputador.Text = "0";
            txtjogador.Text = "0";
            txtEscolhaJogador.Text = String.Empty;
            txtEscolhaComputador.Text = String.Empty;
            txtResultado.Text = String.Empty;

            rBtnPapel.Checked = false;
            rBtnPedra.Checked = false;
            rBtnTesoura.Checked = false;

        }
        private void btnJogar_Click(object sender, EventArgs e)
        {
            // para converte as jogadas 
            int pontosJogador = Convert.ToInt32(txtjogador.Text);
            int pontosComputador = Convert.ToInt32(txtcomputador.Text);

            if (rBtnPedra.Checked)
            {
                //1 - Pedra
                txtEscolhaJogador.Text = "Pedra";
            }
            if (rBtnPapel.Checked)
            {
                //2 - Papel
                txtEscolhaJogador.Text = "Papel";
            }
            if (rBtnTesoura.Checked)
            {
                //3 - Tesoura
                txtEscolhaJogador.Text = "Tesoura";
            }
            Random random = new Random();
            switch (random.Next(1, 3 + 1))
            {
                //1. Pedra
                case 1:
                    txtEscolhaComputador.Text = "Pedra";
                    break;
                //2. Papel
                case 2:
                    txtEscolhaComputador.Text = "Papel";
                    break;
                //3. Tesoura
                case 3:
                    txtEscolhaComputador.Text = "Tesoura";
                    break;
            }
            if (txtEscolhaJogador.Text == txtEscolhaComputador.Text)
            {
                txtResultado.Text = "Empate";
            }
            //Ex Jgador
            if (txtEscolhaJogador.Text == "Pedra" && txtEscolhaComputador.Text == "Tesoura")
            {
                txtResultado.Text = "Jogador Ganhou";
                pontosJogador++;
            }
            else if (txtEscolhaJogador.Text == "Papel" && txtEscolhaComputador.Text == "Pedra")
            {
                txtResultado.Text = "Jogador Ganhou";
                pontosJogador++;
            }
            else if (txtEscolhaJogador.Text == "Tesoura" && txtEscolhaComputador.Text == "Papel")
            {
                txtResultado.Text = "Jogador Ganhou";
                pontosJogador++;
            }
            //Ex Computador
            if (txtEscolhaComputador.Text == "Pedra" && txtEscolhaJogador.Text == "Tesoura")
            {
                txtResultado.Text = "Computador Ganhou";
                pontosComputador++;
            }
            else if (txtEscolhaComputador.Text == "Papel" && txtEscolhaJogador.Text == "Pedra")
            {
                txtResultado.Text = "Computador Ganhou";
                pontosComputador++;
            }
            else if (txtEscolhaComputador.Text == "Tesoura" && txtEscolhaJogador.Text == "Papel")
            {
                txtResultado.Text = "Computador Ganhou";
                pontosComputador++;
            }
            txtjogador.Text = pontosJogador.ToString();
            txtcomputador.Text = pontosComputador.ToString();
        }
    }
}
