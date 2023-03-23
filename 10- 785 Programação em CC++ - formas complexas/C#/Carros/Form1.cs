using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace Agenda
{
    public partial class Form1 : Form
    {
        SqlConnection ligacao = new SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=" +
         AppDomain.CurrentDomain.BaseDirectory +
         "bd_viaturas.mdf;Integrated Security=True;Connect Timeout=30");
        public Form1()
        {
            InitializeComponent();
        }



        void LimpaCampos()
        {
            txt_marca.Clear();
            txt_modelo.Clear();
            txt_matricula.Clear();
            txt_kms.Clear();
            btn_adicionar.Text = "Adicionar";
        }

        private void btn_adicionar_Click(object sender, EventArgs e)
        {
            if (btn_adicionar.Text.Equals("Atualizar"))
            {
                listmarca.Items[listmarca.SelectedIndex] = txt_marca.Text;
                listmodelo.Items[listmodelo.SelectedIndex] = txt_modelo.Text;
                listmatricula.Items[listmatricula.SelectedIndex] = txt_matricula.Text;
                listkms.Items[listkms.SelectedIndex] = txt_kms.Text;
                LimpaCampos();
                return;
            }


            // vamos verificar se o marca está preenchido
            if (txt_marca.Text.Length == 0)
            {
                MessageBox.Show("Marca é um campo obrigatório", "Marca",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }
            // vamos verificar se o modelo está preenchido
            if (txt_modelo.Text.Length == 0)
            {
                MessageBox.Show("Modelo é um campo obrigatório", "Modelo",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }
            // vamos verificar se a matricula está preenchida
            if (txt_matricula.Text.Length != 8)
            {
                    MessageBox.Show("Matricula é um campo obrigatório", "Matrícula",
                          MessageBoxButtons.OK, MessageBoxIcon.Error);
                    return;
            }
            // vamos verificar se os kms estão preenchidos
            if (int.Parse(txt_kms.Text)<=0)
            {
                MessageBox.Show("O valor dos kms deve ser ser superior a zero", 
                    "Kms",
                      MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }

            // adicionar um item a uma lista.
            listmarca.Items.Add(txt_marca.Text);
            listmodelo.Items.Add(txt_modelo.Text);
            listmatricula.Items.Add(txt_matricula.Text);
            //listkms.Items.Add(String.Format("{0:n0}", int.Parse(txt_kms.Text)));
            listkms.Items.Add(txt_kms.Text);
            LimpaCampos();


        }
        

        private void Form1_Load(object sender, EventArgs e)
        {
            // carregar os dados a partir da tabela de viaturas
        }

        private void btn_alterar_Click(object sender, EventArgs e)
        {
            if (listmarca.SelectedItem != null)
            {
                txt_marca.Text = listmarca.SelectedItem.ToString();
                txt_modelo.Text = listmodelo.SelectedItem.ToString();
                txt_matricula.Text = listmatricula.SelectedItem.ToString();
                txt_kms.Text = listkms.SelectedItem.ToString();
                btn_adicionar.Text = "Atualizar";
            }
        }

        private void txt_telefone_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
        {

        }

        private void txt_telefone_Enter(object sender, EventArgs e)
        {
        }

        private void txt_telefone_MouseClick(object sender, MouseEventArgs e)
        {
           
                
           
        }

        private void btn_limpar_Click(object sender, EventArgs e)
        {
            LimpaCampos();
        }

        private void btn_eliminar_Click(object sender, EventArgs e)
        {
            if (listmarca.SelectedIndex < 0)
            {
                MessageBox.Show("A lista está vazia ou não selecionou nenhum item",
                    "Erro", MessageBoxButtons.OK, MessageBoxIcon.Information);
                return;
            }

            int posicao = listmarca.SelectedIndex;

            listmarca.Items.RemoveAt(posicao);
            listmodelo.Items.RemoveAt(posicao);
            listmatricula.Items.RemoveAt(posicao);
            listkms.Items.RemoveAt(posicao);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
        }

        private void btn_imprimir_Click(object sender, EventArgs e)
        {
            printPreviewDialog1.ShowDialog();
        }

        private void printDocument1_PrintPage(object sender, System.Drawing.Printing.PrintPageEventArgs e)
        {
            Font fonte1 = new Font("Verdana", 14);
            Font fonte2 = new Font("Verdana", 10);
            Font fonte3 = new Font("Verdana", 10,FontStyle.Italic);

            e.Graphics.DrawString("Stand Aguiar, Lda.", fonte1, new SolidBrush(Color.Blue),
                100, 100);
            e.Graphics.DrawString("Listagem de viaturas", fonte1, new SolidBrush(Color.Blue),
                100, 120);

            e.Graphics.DrawString("Marca", fonte2, new SolidBrush(Color.Black),
                100, 170);
            e.Graphics.DrawString("Modelo", fonte2, new SolidBrush(Color.Black),
                300, 170);
            e.Graphics.DrawString("Matrícula", fonte2, new SolidBrush(Color.Black),
                500, 170);
            e.Graphics.DrawString("Kms", fonte2, new SolidBrush(Color.Black),
                650, 170);

            Pen caneta = new Pen(Color.Black, 2);
            e.Graphics.DrawLine(caneta, 100, 190, 800, 190);



            int y = 200;
            for (int linha = 0; linha < listmarca.Items.Count; linha++)
            {
                e.Graphics.DrawString(listmarca.Items[linha].ToString(), fonte2, new SolidBrush(Color.Black),
                100, y);
                e.Graphics.DrawString(listmodelo.Items[linha].ToString(), fonte2, new SolidBrush(Color.Black),
                300, y);
                e.Graphics.DrawString(listmatricula.Items[linha].ToString(), fonte2, new SolidBrush(Color.Black),
                500, y);
                e.Graphics.DrawString(listkms.Items[linha].ToString(), fonte2, new SolidBrush(Color.Black),
                650, y);

                y += 20;
            }
            e.Graphics.DrawLine(caneta, 100, y, 800, y);
            e.Graphics.DrawString("Fim da listagem", fonte3, new SolidBrush(Color.Black),100, y + 20);
        }

        private void listmarca_SelectedIndexChanged(object sender, EventArgs e)
        {
            // sincronizar
            listmodelo.SelectedIndex = listmarca.SelectedIndex;
            listmatricula.SelectedIndex = listmarca.SelectedIndex;
            listkms.SelectedIndex = listmarca.SelectedIndex;
        }

        private void listmodelo_SelectedIndexChanged(object sender, EventArgs e)
        {
            // sincronizar
            listmarca.SelectedIndex = listmodelo.SelectedIndex;
            listmatricula.SelectedIndex = listmodelo.SelectedIndex;
            listkms.SelectedIndex = listmodelo.SelectedIndex;
        }

        private void listmatricula_SelectedIndexChanged(object sender, EventArgs e)
        {
            // sincronizar
            listmarca.SelectedIndex = listmatricula.SelectedIndex;
            listmodelo.SelectedIndex = listmatricula.SelectedIndex;
            listkms.SelectedIndex = listmatricula.SelectedIndex;
        }

        private void listkms_SelectedIndexChanged(object sender, EventArgs e)
        {
            // sincronizar
            listmarca.SelectedIndex = listkms.SelectedIndex;
            listmodelo.SelectedIndex = listkms.SelectedIndex;
            listmatricula.SelectedIndex = listkms.SelectedIndex;
        }

        private void btn_sair_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void btn_guardar_Click(object sender, EventArgs e)
        {
            if (listmarca.Items.Count == 0)
            {
                MessageBox.Show("A lista está vazia.", "Atenção!!!",
                 MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }
            // Guardar os dados
            /*
             * SqlConnection - Permitir ligar à base de dados
             */

            DialogResult opcao = MessageBox.Show("Confirma atualização de dados na BD?",
                "Guardar", MessageBoxButtons.YesNo);

            if (opcao == DialogResult.No) return;

            ligacao.Open();

            // eliminar os registos da tabela

            SqlCommand cm1 = new SqlCommand("delete from viaturas", ligacao);
            cm1.ExecuteNonQuery();

            // SqlCommand - Enviar os comandos de sql à base de dados
            for (int i = 0; i < listmarca.Items.Count; i++)
            {
                SqlCommand cm = new SqlCommand("insert into viaturas (marca,modelo,matricula,kms) " +
                    "values(@ma,@mo,@mt,@km)", ligacao);
                cm.Parameters.Add(new SqlParameter("@ma", listmarca.Items[i].ToString()));
                cm.Parameters.Add(new SqlParameter("@mo", listmodelo.Items[i].ToString()));
                cm.Parameters.Add(new SqlParameter("@mt", listmatricula.Items[i].ToString()));
                cm.Parameters.Add(new SqlParameter("@km", listkms.Items[i].ToString()));
                cm.ExecuteNonQuery();
            }
            ligacao.Close();
            MessageBox.Show("Dados guardados com sucesso.", "Atenção!!!",
            MessageBoxButtons.OK, MessageBoxIcon.Information);
            listmarca.Items.Clear();
            listmodelo.Items.Clear();
            listmatricula.Items.Clear();
            listkms.Items.Clear();
            this.Close();
        }
    }
}
