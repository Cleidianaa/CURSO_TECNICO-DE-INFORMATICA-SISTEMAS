using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _0785_APP_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btn_mais_Click(object sender, EventArgs e)
        {

            if (txt_1.Text.Length == 0)
            {
                MessageBox.Show("Deve inserir um número no 1º número!");
                return;
            }

            if (txt_2.Text.Length == 0)
            {
                MessageBox.Show("Deve inserir um número no 2º número!");
                return;
            }

            lbl_resultado.Text = (Convert.ToInt32(txt_1.Text) +Convert.ToInt32(txt_2.Text)).ToString();
        }
    }
}
