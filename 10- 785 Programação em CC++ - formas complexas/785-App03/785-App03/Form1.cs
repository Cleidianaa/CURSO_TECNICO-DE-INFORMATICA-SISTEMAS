using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _785_App03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnLimpar_Click(object sender, EventArgs e)
        {
            txtHoraChegada.Text = "";
            txtHoraDuracao.Text = "";
            txtHoraPartida.Text = "";
            txtMensagem.Text = "";
            txtMinutosChegada.Text = "";
            txtMinutosDuracao.Text = "";
            txtMinutosPartida.Text = "";
        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            int dia = 0;
            int hora = int.Parse(txtHoraPartida.Text);
            int minutos = int.Parse(txtMinutosPartida.Text);
            int horaDuracao = int.Parse(txtHoraDuracao.Text);
            int minutosDuracao = int.Parse(txtMinutosDuracao.Text);
            int horaChegada = hora + horaDuracao;
            int minutosChegada = minutos + minutosDuracao;

            if (hora < 0 || hora > 23)
            {
                MessageBox.Show("Hora de chegada errada.");
                return;
            }

            if (minutos < 0 || minutos > 59)
            {
                MessageBox.Show("Minutos de chegada errada.");
                return;
            }

            if (horaDuracao < 0 || horaDuracao > 23)
            {
                MessageBox.Show("Hora de duração errada.");
                return;
            }

            if (minutosDuracao < 0 || minutosDuracao > 59)
            {
                MessageBox.Show("Minutos de duração errada.");
                return;
            }

            if (minutosChegada > 59)
            {
                minutosChegada = minutosChegada - 60;
                horaChegada = horaChegada + 1;
            }

            if (horaChegada > 23)
            {
                horaChegada = horaChegada - 24;
                dia = 1;
            }

            if (dia == 1)
            {
                txtMensagem.Text = "O Voo chegou no  dia seguinte";
            }
            else
            {
                txtMensagem.Text = "O Voo chegou no próprio dia";
            }

            txtHoraChegada.Text = horaChegada.ToString();
            txtMinutosChegada.Text = minutosChegada.ToString();
        }
    }
}
