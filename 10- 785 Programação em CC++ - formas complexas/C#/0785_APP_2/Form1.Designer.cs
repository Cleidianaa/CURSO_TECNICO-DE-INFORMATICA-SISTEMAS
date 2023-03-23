namespace _0785_APP_2
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
            this.label1 = new System.Windows.Forms.Label();
            this.txt_1 = new System.Windows.Forms.TextBox();
            this.txt_2 = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.btn_mais = new System.Windows.Forms.Button();
            this.btn_menos = new System.Windows.Forms.Button();
            this.btn_vezes = new System.Windows.Forms.Button();
            this.btn_divide = new System.Windows.Forms.Button();
            this.btn_clear = new System.Windows.Forms.Button();
            this.lbl_resultado = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(93, 28);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(57, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "1º Número";
            // 
            // txt_1
            // 
            this.txt_1.Location = new System.Drawing.Point(96, 44);
            this.txt_1.Name = "txt_1";
            this.txt_1.Size = new System.Drawing.Size(54, 20);
            this.txt_1.TabIndex = 1;
            this.txt_1.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // txt_2
            // 
            this.txt_2.Location = new System.Drawing.Point(96, 106);
            this.txt_2.Name = "txt_2";
            this.txt_2.Size = new System.Drawing.Size(54, 20);
            this.txt_2.TabIndex = 3;
            this.txt_2.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(93, 90);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(57, 13);
            this.label2.TabIndex = 2;
            this.label2.Text = "2º Número";
            // 
            // btn_mais
            // 
            this.btn_mais.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_mais.ForeColor = System.Drawing.Color.Green;
            this.btn_mais.Location = new System.Drawing.Point(12, 154);
            this.btn_mais.Name = "btn_mais";
            this.btn_mais.Size = new System.Drawing.Size(40, 42);
            this.btn_mais.TabIndex = 4;
            this.btn_mais.Text = "+";
            this.btn_mais.UseVisualStyleBackColor = true;
            this.btn_mais.Click += new System.EventHandler(this.btn_mais_Click);
            // 
            // btn_menos
            // 
            this.btn_menos.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_menos.ForeColor = System.Drawing.Color.Green;
            this.btn_menos.Location = new System.Drawing.Point(58, 154);
            this.btn_menos.Name = "btn_menos";
            this.btn_menos.Size = new System.Drawing.Size(40, 42);
            this.btn_menos.TabIndex = 5;
            this.btn_menos.Text = "-";
            this.btn_menos.UseVisualStyleBackColor = true;
            // 
            // btn_vezes
            // 
            this.btn_vezes.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_vezes.ForeColor = System.Drawing.Color.Green;
            this.btn_vezes.Location = new System.Drawing.Point(104, 154);
            this.btn_vezes.Name = "btn_vezes";
            this.btn_vezes.Size = new System.Drawing.Size(40, 42);
            this.btn_vezes.TabIndex = 6;
            this.btn_vezes.Text = "X";
            this.btn_vezes.UseVisualStyleBackColor = true;
            // 
            // btn_divide
            // 
            this.btn_divide.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_divide.ForeColor = System.Drawing.Color.Green;
            this.btn_divide.Location = new System.Drawing.Point(150, 154);
            this.btn_divide.Name = "btn_divide";
            this.btn_divide.Size = new System.Drawing.Size(40, 42);
            this.btn_divide.TabIndex = 7;
            this.btn_divide.Text = "/";
            this.btn_divide.UseVisualStyleBackColor = true;
            // 
            // btn_clear
            // 
            this.btn_clear.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_clear.ForeColor = System.Drawing.Color.Green;
            this.btn_clear.Location = new System.Drawing.Point(196, 154);
            this.btn_clear.Name = "btn_clear";
            this.btn_clear.Size = new System.Drawing.Size(40, 42);
            this.btn_clear.TabIndex = 8;
            this.btn_clear.Text = "C";
            this.btn_clear.UseVisualStyleBackColor = true;
            // 
            // lbl_resultado
            // 
            this.lbl_resultado.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.lbl_resultado.Location = new System.Drawing.Point(92, 217);
            this.lbl_resultado.Name = "lbl_resultado";
            this.lbl_resultado.Size = new System.Drawing.Size(57, 24);
            this.lbl_resultado.TabIndex = 9;
            this.lbl_resultado.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(248, 254);
            this.Controls.Add(this.lbl_resultado);
            this.Controls.Add(this.btn_clear);
            this.Controls.Add(this.btn_divide);
            this.Controls.Add(this.btn_vezes);
            this.Controls.Add(this.btn_menos);
            this.Controls.Add(this.btn_mais);
            this.Controls.Add(this.txt_2);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txt_1);
            this.Controls.Add(this.label1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Cálculo";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txt_1;
        private System.Windows.Forms.TextBox txt_2;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button btn_mais;
        private System.Windows.Forms.Button btn_menos;
        private System.Windows.Forms.Button btn_vezes;
        private System.Windows.Forms.Button btn_divide;
        private System.Windows.Forms.Button btn_clear;
        private System.Windows.Forms.Label lbl_resultado;
    }
}

