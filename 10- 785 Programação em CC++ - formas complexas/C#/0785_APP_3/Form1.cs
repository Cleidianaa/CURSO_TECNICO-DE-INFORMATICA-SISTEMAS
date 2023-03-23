using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _0785_APP_3
{
    public partial class Form1 : Form
    {
        int contador = 1; // variável global
        public Form1()
        {
            InitializeComponent();
        }

        private void pic_inverno_Click(object sender, EventArgs e)
        {
            pic_atual.Image = pic_inverno.Image;
            lbl_atual.Text = "Inverno";
        }

        private void pic_outono_Click(object sender, EventArgs e)
        {
            pic_atual.Image = pic_outono.Image;
            lbl_atual.Text = "Outono";
        }

        private void pic_primavera_Click(object sender, EventArgs e)
        {
            pic_atual.Image = pic_primavera.Image;
            lbl_atual.Text = "Primavera";
        }

        private void pic_verao_Click(object sender, EventArgs e)
        {
            pic_atual.Image = pic_verao.Image;
            lbl_atual.Text = "Verão";
        }

        private void pic_canguru_Click(object sender, EventArgs e)
        {
            pic_atual.Image = pic_canguru.Image;
            lbl_atual.Text = "Canguru";
        }

        private void pic_ornitorrinco_Click(object sender, EventArgs e)
        {
            pic_atual.Image = pic_ornitorrinco.Image;
            lbl_atual.Text = "Ornitorrinco";
        }

        private void pic_suricata_Click(object sender, EventArgs e)
        {
            pic_atual.Image = pic_suricata.Image;
            lbl_atual.Text = "Suricata";
        }

        private void pic_tatu_Click(object sender, EventArgs e)
        {
            pic_atual.Image = pic_tatu.Image;
            lbl_atual.Text = "Tatu";
        }

        private void primaveraToolStripMenuItem_Click(object sender, EventArgs e)
        {
            pic_primavera_Click(sender,e);
        }

        private void verãoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            pic_verao_Click(sender, e);
        }

        private void outonoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            pic_outono_Click(sender, e);
        }

        private void invernoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            pic_inverno_Click(sender, e);
        }

        private void canguruToolStripMenuItem_Click(object sender, EventArgs e)
        {
            pic_canguru_Click(sender, e);
        }

        private void ornitorrincoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            pic_ornitorrinco_Click(sender, e);
        }

        private void suricataToolStripMenuItem_Click(object sender, EventArgs e)
        {
            pic_suricata_Click(sender, e);
        }

        private void tatuToolStripMenuItem_Click(object sender, EventArgs e)
        {
            pic_tatu_Click(sender,e);
        }

        private void sairToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            switch (contador)
            {
                case 1:
                    pic_primavera_Click(sender, e);
                    break;
                case 2:
                    pic_verao_Click(sender, e);
                    break;
                case 3:    
                    pic_outono_Click(sender, e);
                    break;
                case 4:
                    pic_inverno_Click(sender, e);
                    break;
                case 5:
                    pic_canguru_Click(sender, e);
                    break;
                case 6:
                    pic_ornitorrinco_Click(sender, e);
                    break;
                case 7:
                    pic_suricata_Click(sender, e);
                    break;
                case 8:
                    pic_tatu_Click(sender, e);
                    break;
            }
            contador++;
            if (contador > 8) contador = 1;
        }

        private void rbt_play_CheckedChanged(object sender, EventArgs e)
        {
            timer1.Start();
        }

        private void rbt_stop_CheckedChanged(object sender, EventArgs e)
        {
            timer1.Stop();
        }
    }
}
