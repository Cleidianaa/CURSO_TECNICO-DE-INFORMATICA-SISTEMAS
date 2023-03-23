using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _0785_App1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btn_1_Click(object sender, EventArgs e)
        {
            lbl_1.Text = txt_1.Text;
        }

        private void btn_2_Click(object sender, EventArgs e)
        {
            lbl_1.ResetText();
            txt_1.Clear();
        }
    }
}
