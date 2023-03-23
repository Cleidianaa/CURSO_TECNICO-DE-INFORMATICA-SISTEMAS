namespace _785_App04
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.lblJogador = new System.Windows.Forms.Label();
            this.lblComputador = new System.Windows.Forms.Label();
            this.txtResultado = new System.Windows.Forms.TextBox();
            this.txtEscolhaComputador = new System.Windows.Forms.TextBox();
            this.txtEscolhaJogador = new System.Windows.Forms.TextBox();
            this.lblEscolhaJogador = new System.Windows.Forms.Label();
            this.lblEscolhaComputador = new System.Windows.Forms.Label();
            this.lblResultado = new System.Windows.Forms.Label();
            this.txtjogador = new System.Windows.Forms.TextBox();
            this.txtcomputador = new System.Windows.Forms.TextBox();
            this.btnJogar = new System.Windows.Forms.Button();
            this.rBtnPedra = new System.Windows.Forms.RadioButton();
            this.rBtnPapel = new System.Windows.Forms.RadioButton();
            this.rBtnTesoura = new System.Windows.Forms.RadioButton();
            this.Pedra = new System.Windows.Forms.PictureBox();
            this.Papel = new System.Windows.Forms.PictureBox();
            this.Tesoura = new System.Windows.Forms.PictureBox();
            this.grpcaixa1 = new System.Windows.Forms.GroupBox();
            this.grpBox1 = new System.Windows.Forms.GroupBox();
            this.BtnReset = new System.Windows.Forms.Button();
            this.lblJogoPapelTesoura = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.Pedra)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.Papel)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.Tesoura)).BeginInit();
            this.grpcaixa1.SuspendLayout();
            this.grpBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // lblJogador
            // 
            this.lblJogador.AutoSize = true;
            this.lblJogador.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblJogador.Location = new System.Drawing.Point(23, 27);
            this.lblJogador.Name = "lblJogador";
            this.lblJogador.Size = new System.Drawing.Size(67, 20);
            this.lblJogador.TabIndex = 4;
            this.lblJogador.Text = "Jogador";
            // 
            // lblComputador
            // 
            this.lblComputador.AutoSize = true;
            this.lblComputador.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblComputador.Location = new System.Drawing.Point(124, 27);
            this.lblComputador.Name = "lblComputador";
            this.lblComputador.Size = new System.Drawing.Size(97, 20);
            this.lblComputador.TabIndex = 5;
            this.lblComputador.Text = "Computador";
            // 
            // txtResultado
            // 
            this.txtResultado.Location = new System.Drawing.Point(282, 168);
            this.txtResultado.Name = "txtResultado";
            this.txtResultado.Size = new System.Drawing.Size(267, 20);
            this.txtResultado.TabIndex = 9;
            // 
            // txtEscolhaComputador
            // 
            this.txtEscolhaComputador.Location = new System.Drawing.Point(195, 123);
            this.txtEscolhaComputador.Name = "txtEscolhaComputador";
            this.txtEscolhaComputador.Size = new System.Drawing.Size(354, 20);
            this.txtEscolhaComputador.TabIndex = 10;
            // 
            // txtEscolhaJogador
            // 
            this.txtEscolhaJogador.Location = new System.Drawing.Point(195, 67);
            this.txtEscolhaJogador.Name = "txtEscolhaJogador";
            this.txtEscolhaJogador.Size = new System.Drawing.Size(354, 20);
            this.txtEscolhaJogador.TabIndex = 11;
            // 
            // lblEscolhaJogador
            // 
            this.lblEscolhaJogador.AutoSize = true;
            this.lblEscolhaJogador.Location = new System.Drawing.Point(192, 42);
            this.lblEscolhaJogador.Name = "lblEscolhaJogador";
            this.lblEscolhaJogador.Size = new System.Drawing.Size(124, 13);
            this.lblEscolhaJogador.TabIndex = 12;
            this.lblEscolhaJogador.Text = "A escolha do jogador foi:";
            // 
            // lblEscolhaComputador
            // 
            this.lblEscolhaComputador.AutoSize = true;
            this.lblEscolhaComputador.Location = new System.Drawing.Point(192, 104);
            this.lblEscolhaComputador.Name = "lblEscolhaComputador";
            this.lblEscolhaComputador.Size = new System.Drawing.Size(145, 13);
            this.lblEscolhaComputador.TabIndex = 13;
            this.lblEscolhaComputador.Text = "A escolha do computador foi:";
            // 
            // lblResultado
            // 
            this.lblResultado.AutoSize = true;
            this.lblResultado.Location = new System.Drawing.Point(218, 171);
            this.lblResultado.Name = "lblResultado";
            this.lblResultado.Size = new System.Drawing.Size(58, 13);
            this.lblResultado.TabIndex = 14;
            this.lblResultado.Text = "Resultado:";
            // 
            // txtjogador
            // 
            this.txtjogador.Location = new System.Drawing.Point(27, 54);
            this.txtjogador.Name = "txtjogador";
            this.txtjogador.ReadOnly = true;
            this.txtjogador.Size = new System.Drawing.Size(57, 20);
            this.txtjogador.TabIndex = 15;
            this.txtjogador.Text = "0";
            // 
            // txtcomputador
            // 
            this.txtcomputador.Location = new System.Drawing.Point(127, 54);
            this.txtcomputador.Name = "txtcomputador";
            this.txtcomputador.ReadOnly = true;
            this.txtcomputador.Size = new System.Drawing.Size(71, 20);
            this.txtcomputador.TabIndex = 16;
            this.txtcomputador.Text = "0";
            // 
            // btnJogar
            // 
            this.btnJogar.Font = new System.Drawing.Font("Microsoft Sans Serif", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnJogar.ForeColor = System.Drawing.Color.Blue;
            this.btnJogar.Location = new System.Drawing.Point(312, 27);
            this.btnJogar.Name = "btnJogar";
            this.btnJogar.Size = new System.Drawing.Size(205, 66);
            this.btnJogar.TabIndex = 17;
            this.btnJogar.Text = "Jogar";
            this.btnJogar.UseVisualStyleBackColor = false;
            this.btnJogar.Click += new System.EventHandler(this.btnJogar_Click);
            // 
            // rBtnPedra
            // 
            this.rBtnPedra.AutoSize = true;
            this.rBtnPedra.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.rBtnPedra.Location = new System.Drawing.Point(20, 40);
            this.rBtnPedra.Name = "rBtnPedra";
            this.rBtnPedra.Size = new System.Drawing.Size(58, 17);
            this.rBtnPedra.TabIndex = 18;
            this.rBtnPedra.TabStop = true;
            this.rBtnPedra.Text = "Pedra";
            this.rBtnPedra.UseVisualStyleBackColor = true;
            // 
            // rBtnPapel
            // 
            this.rBtnPapel.AutoSize = true;
            this.rBtnPapel.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.rBtnPapel.Location = new System.Drawing.Point(21, 100);
            this.rBtnPapel.Name = "rBtnPapel";
            this.rBtnPapel.Size = new System.Drawing.Size(57, 17);
            this.rBtnPapel.TabIndex = 19;
            this.rBtnPapel.TabStop = true;
            this.rBtnPapel.Text = "Papel";
            this.rBtnPapel.UseVisualStyleBackColor = true;
            // 
            // rBtnTesoura
            // 
            this.rBtnTesoura.AutoSize = true;
            this.rBtnTesoura.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.rBtnTesoura.Location = new System.Drawing.Point(19, 155);
            this.rBtnTesoura.Name = "rBtnTesoura";
            this.rBtnTesoura.Size = new System.Drawing.Size(71, 17);
            this.rBtnTesoura.TabIndex = 20;
            this.rBtnTesoura.TabStop = true;
            this.rBtnTesoura.Text = "Tesoura";
            this.rBtnTesoura.UseVisualStyleBackColor = true;
            // 
            // Pedra
            // 
            this.Pedra.Image = global::_785_App04.Properties.Resources.PedraC;
            this.Pedra.Location = new System.Drawing.Point(12, 69);
            this.Pedra.Name = "Pedra";
            this.Pedra.Size = new System.Drawing.Size(127, 97);
            this.Pedra.TabIndex = 21;
            this.Pedra.TabStop = false;
            // 
            // Papel
            // 
            this.Papel.Image = global::_785_App04.Properties.Resources.PapelC;
            this.Papel.Location = new System.Drawing.Point(12, 172);
            this.Papel.Name = "Papel";
            this.Papel.Size = new System.Drawing.Size(127, 116);
            this.Papel.TabIndex = 22;
            this.Papel.TabStop = false;
            // 
            // Tesoura
            // 
            this.Tesoura.Image = global::_785_App04.Properties.Resources.TesouraC;
            this.Tesoura.Location = new System.Drawing.Point(12, 294);
            this.Tesoura.Name = "Tesoura";
            this.Tesoura.Size = new System.Drawing.Size(127, 100);
            this.Tesoura.TabIndex = 23;
            this.Tesoura.TabStop = false;
            // 
            // grpcaixa1
            // 
            this.grpcaixa1.Controls.Add(this.btnJogar);
            this.grpcaixa1.Controls.Add(this.txtjogador);
            this.grpcaixa1.Controls.Add(this.lblJogador);
            this.grpcaixa1.Controls.Add(this.lblComputador);
            this.grpcaixa1.Controls.Add(this.txtcomputador);
            this.grpcaixa1.Location = new System.Drawing.Point(145, 60);
            this.grpcaixa1.Name = "grpcaixa1";
            this.grpcaixa1.Size = new System.Drawing.Size(555, 134);
            this.grpcaixa1.TabIndex = 24;
            this.grpcaixa1.TabStop = false;
            // 
            // grpBox1
            // 
            this.grpBox1.Controls.Add(this.rBtnTesoura);
            this.grpBox1.Controls.Add(this.rBtnPapel);
            this.grpBox1.Controls.Add(this.rBtnPedra);
            this.grpBox1.Controls.Add(this.lblResultado);
            this.grpBox1.Controls.Add(this.txtResultado);
            this.grpBox1.Controls.Add(this.lblEscolhaJogador);
            this.grpBox1.Controls.Add(this.lblEscolhaComputador);
            this.grpBox1.Controls.Add(this.txtEscolhaComputador);
            this.grpBox1.Controls.Add(this.txtEscolhaJogador);
            this.grpBox1.Location = new System.Drawing.Point(145, 190);
            this.grpBox1.Name = "grpBox1";
            this.grpBox1.Size = new System.Drawing.Size(555, 204);
            this.grpBox1.TabIndex = 25;
            this.grpBox1.TabStop = false;
            // 
            // BtnReset
            // 
            this.BtnReset.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.BtnReset.Location = new System.Drawing.Point(562, 12);
            this.BtnReset.Name = "BtnReset";
            this.BtnReset.Size = new System.Drawing.Size(100, 42);
            this.BtnReset.TabIndex = 26;
            this.BtnReset.Text = "Reset";
            this.BtnReset.UseVisualStyleBackColor = true;
            this.BtnReset.Click += new System.EventHandler(this.BtnReset_Click);
            // 
            // lblJogoPapelTesoura
            // 
            this.lblJogoPapelTesoura.AutoSize = true;
            this.lblJogoPapelTesoura.Font = new System.Drawing.Font("Microsoft Sans Serif", 30F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblJogoPapelTesoura.ForeColor = System.Drawing.Color.Red;
            this.lblJogoPapelTesoura.Location = new System.Drawing.Point(26, 3);
            this.lblJogoPapelTesoura.Name = "lblJogoPapelTesoura";
            this.lblJogoPapelTesoura.Size = new System.Drawing.Size(400, 46);
            this.lblJogoPapelTesoura.TabIndex = 27;
            this.lblJogoPapelTesoura.Text = "Jogo, Papel, Tesoura";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.lblJogoPapelTesoura);
            this.Controls.Add(this.BtnReset);
            this.Controls.Add(this.grpBox1);
            this.Controls.Add(this.grpcaixa1);
            this.Controls.Add(this.Tesoura);
            this.Controls.Add(this.Papel);
            this.Controls.Add(this.Pedra);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Form1";
            this.RightToLeftLayout = true;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Jogo Pedra, Papel e Tesoura";
            ((System.ComponentModel.ISupportInitialize)(this.Pedra)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.Papel)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.Tesoura)).EndInit();
            this.grpcaixa1.ResumeLayout(false);
            this.grpcaixa1.PerformLayout();
            this.grpBox1.ResumeLayout(false);
            this.grpBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label lblJogador;
        private System.Windows.Forms.Label lblComputador;
        private System.Windows.Forms.TextBox txtResultado;
        private System.Windows.Forms.TextBox txtEscolhaComputador;
        private System.Windows.Forms.TextBox txtEscolhaJogador;
        private System.Windows.Forms.Label lblEscolhaJogador;
        private System.Windows.Forms.Label lblEscolhaComputador;
        private System.Windows.Forms.Label lblResultado;
        private System.Windows.Forms.TextBox txtjogador;
        private System.Windows.Forms.TextBox txtcomputador;
        private System.Windows.Forms.Button btnJogar;
        private System.Windows.Forms.RadioButton rBtnPedra;
        private System.Windows.Forms.RadioButton rBtnPapel;
        private System.Windows.Forms.RadioButton rBtnTesoura;
        private System.Windows.Forms.PictureBox Pedra;
        private System.Windows.Forms.PictureBox Papel;
        private System.Windows.Forms.PictureBox Tesoura;
        private System.Windows.Forms.GroupBox grpcaixa1;
        private System.Windows.Forms.GroupBox grpBox1;
        private System.Windows.Forms.Button BtnReset;
        private System.Windows.Forms.Label lblJogoPapelTesoura;
    }
}

