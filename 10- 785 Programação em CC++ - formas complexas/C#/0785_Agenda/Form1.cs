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

namespace _0785_Agenda
{
    public partial class Form1 : Form
    {
        SqlConnection ligacao = new SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=" +
           AppDomain.CurrentDomain.BaseDirectory +
           "bd_agenda.mdf;Integrated Security=True;Connect Timeout=30");
        public Form1()
        {
            InitializeComponent();
        }

        static bool ValidarMail(string email)
        {
            try
            {
                var endereco = new System.Net.Mail.MailAddress(email);
                return endereco.Address == email;
            }
            catch
            {
                return false;
            }
        }

        private void LimpaCampos()
        {
            // limpar os campos
            txt_nome.Clear();
            txt_email.Clear();
            txt_telefone.Clear();
            btn_adicionar.Text = "Adicionar";
        }

        private void btn_adicionar_Click(object sender, EventArgs e)
        {




            // verificar se os campos estão todos preenchidos
            if (txt_nome.Text.Length == 0)
            {
                MessageBox.Show("Nome é um campo obrigatório", "Nome",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }
            if (txt_email.Text.Length == 0)
            {
                MessageBox.Show("Email é um campo obrigatório", "Email",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }
            else
            {
                // ver se é válido
                if (!ValidarMail(txt_email.Text))
                {
                    MessageBox.Show("O Email não é válido!", "Validar Email",
                          MessageBoxButtons.OK, MessageBoxIcon.Error);
                    return;
                }
            }
            if (txt_telefone.Text.Length == 0)
            {
                MessageBox.Show("Telefone é um campo obrigatório", "Telefone",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }

            if (btn_adicionar.Text.Equals("Atualizar"))
            {
                list_nome.Items[list_nome.SelectedIndex] = txt_nome.Text;
                list_email.Items[list_nome.SelectedIndex] = txt_email.Text;
                list_telefone.Items[list_nome.SelectedIndex] = txt_telefone.Text;
            }
            else
            {
                //adicionar dados às listas
                list_nome.Items.Add(txt_nome.Text);
                list_email.Items.Add(txt_email.Text);
                list_telefone.Items.Add(txt_telefone.Text);
            }


            // limpar os campos
            LimpaCampos();

        }

        private void list_nome_SelectedIndexChanged(object sender, EventArgs e)
        {
            // sincronizar
            list_email.SelectedIndex = list_nome.SelectedIndex;
            list_telefone.SelectedIndex = list_nome.SelectedIndex;
        }

        private void list_email_SelectedIndexChanged(object sender, EventArgs e)
        {
            // sincronizar
            list_nome.SelectedIndex = list_email.SelectedIndex;
            list_telefone.SelectedIndex = list_email.SelectedIndex;
        }

        private void list_telefone_SelectedIndexChanged(object sender, EventArgs e)
        {
            // sincronizar
            list_email.SelectedIndex = list_telefone.SelectedIndex;
            list_nome.SelectedIndex = list_telefone.SelectedIndex;
        }

        private void btn_limpar_Click(object sender, EventArgs e)
        {
            LimpaCampos();
        }

        private void btn_eliminar_Click(object sender, EventArgs e)
        {
            // verificar se alista está vazia ou se há um item selecionado
            if (list_nome.SelectedIndex < 0)
            {
                MessageBox.Show("A lista está vazia ou náo selecionou nenhum item", "Atenção!!!",
                     MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }

            // eliminar a linha
            int posicao = list_nome.SelectedIndex;
            list_nome.Items.RemoveAt(posicao);
            list_email.Items.RemoveAt(posicao);
            list_telefone.Items.RemoveAt(posicao);

        }

        private void btn_imprimir_Click(object sender, EventArgs e)
        {
            printPreviewDialog1.ShowDialog();
        }

        private void printDocument1_PrintPage(object sender, System.Drawing.Printing.PrintPageEventArgs e)
        {
            // definir as fontes a usar
            Font f1 = new Font("Verdana", 18);
            Font f2 = new Font("Verdana", 12);

            e.Graphics.DrawString("Lista de contactos", f1, new SolidBrush(Color.Blue),
                100, 100);

            e.Graphics.DrawString("Nome", f2, new SolidBrush(Color.Black),
                  100, 150);
            e.Graphics.DrawString("Email", f2, new SolidBrush(Color.Black),
                  300, 150);
            e.Graphics.DrawString("Telefone", f2, new SolidBrush(Color.Black),
                  500, 150);
            int linha = 180;
            for (int i = 0; i < list_email.Items.Count; i++)
            {
                e.Graphics.DrawString(list_nome.Items[i].ToString(),
                    f2, new SolidBrush(Color.Black), 100, linha);
                e.Graphics.DrawString(list_email.Items[i].ToString(),
                      f2, new SolidBrush(Color.Black), 300, linha);
                e.Graphics.DrawString(list_telefone.Items[i].ToString(),
                       f2, new SolidBrush(Color.Black), 500, linha);
                linha += 20;
            }

        }

        private void btn_sair_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void btn_alterar_Click(object sender, EventArgs e)
        {
            if (list_nome.SelectedItem != null)
            {
                txt_nome.Text = list_nome.SelectedItem.ToString();
                txt_email.Text = list_email.SelectedItem.ToString();
                txt_telefone.Text = list_telefone.SelectedItem.ToString();
                btn_adicionar.Text = "Atualizar";
            }
            else
            {
                MessageBox.Show("A lista está vazia ou não selecionou nenhum item", "Atenção!!!",
                       MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void btn_guardar_Click(object sender, EventArgs e)
        {
            if (list_nome.Items.Count==0)
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
                "Guardar",MessageBoxButtons.YesNo);

            if (opcao == DialogResult.No) return;

            ligacao.Open();

            // eliminar os registos da tabela

            SqlCommand cm1 = new SqlCommand("delete from agenda",ligacao);
            cm1.ExecuteNonQuery();

            // SqlCommand - Enviar os comandos de sql à base de dados
            for (int i = 0; i < list_email.Items.Count; i++)
            {
                SqlCommand cm = new SqlCommand("insert into agenda (nome,email,telefone) values(@no,@em,@te)", ligacao);
                cm.Parameters.Add(new SqlParameter("@no", list_nome.Items[i].ToString()));
                cm.Parameters.Add(new SqlParameter("@em", list_email.Items[i].ToString()));
                cm.Parameters.Add(new SqlParameter("@te", list_telefone.Items[i].ToString()));
                cm.ExecuteNonQuery();
            }
            ligacao.Close();
            MessageBox.Show("Dados guardados com sucesso.", "Atenção!!!",
            MessageBoxButtons.OK, MessageBoxIcon.Information);
            list_nome.Items.Clear();
            list_email.Items.Clear();
            list_telefone.Items.Clear();
            this.Close();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            ligacao.Open();
            SqlCommand cm = new SqlCommand("select * from agenda",ligacao);
            // SqlDataReader - é usada para criar um conjunto de registos em memória da tabela
            SqlDataReader dr=cm.ExecuteReader();

            while (dr.Read())
            {
                list_nome.Items.Add(dr["nome"].ToString());
                list_email.Items.Add(dr["email"].ToString());
                list_telefone.Items.Add(dr["telefone"].ToString());
            }
            ligacao.Close();

        }
    }
}
