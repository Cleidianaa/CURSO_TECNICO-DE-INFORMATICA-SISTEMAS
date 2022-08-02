namespace _785_App1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnDivisao_Click(object sender, EventArgs e)
        {
            float numero1 = float.Parse(txtNumero1.Text);
            float numero2 = float.Parse(txtNumero2.Text);
            float resultado = numero1 / numero2;
            txtResultado.Text = resultado.ToString();
        }

        private void btnSoma_Click(object sender, EventArgs e)
        {
            float numero1 = float.Parse(txtNumero1.Text);
            float numero2 = float.Parse(txtNumero2.Text);
            float resultado = numero1 + numero2;
            txtResultado.Text = resultado.ToString();
        }

        private void btnSubtracao_Click(object sender, EventArgs e)
        { 
            float numero1 = float.Parse(txtNumero1.Text);
            float numero2 = float.Parse(txtNumero2.Text);
            float resultado = numero1 - numero2;
            txtResultado.Text = resultado.ToString();

        }

        private void btnMultiplicacao_Click(object sender, EventArgs e)
        {
            float numero1 = float.Parse(txtNumero1.Text);
            float numero2 = float.Parse(txtNumero2.Text);
            float resultado = numero1 * numero2;
            txtResultado.Text = resultado.ToString();

        }

        private void btnLimpar_Click(object sender, EventArgs e)
        {

        }

    }
}