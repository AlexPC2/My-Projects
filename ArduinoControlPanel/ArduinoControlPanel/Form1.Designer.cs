namespace ArduinoControlPanel
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.TurnTheLedON = new System.Windows.Forms.Button();
            this.TurnTheLedOFF = new System.Windows.Forms.Button();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.label1 = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.serialPort1 = new System.IO.Ports.SerialPort(this.components);
            this.progressBar1 = new System.Windows.Forms.ProgressBar();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.Connection = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.button3 = new System.Windows.Forms.Button();
            this.Action1Button = new System.Windows.Forms.Button();
            this.Main1Button = new System.Windows.Forms.Button();
            this.Main2Button = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // TurnTheLedON
            // 
            this.TurnTheLedON.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.TurnTheLedON.Location = new System.Drawing.Point(661, 133);
            this.TurnTheLedON.Name = "TurnTheLedON";
            this.TurnTheLedON.Size = new System.Drawing.Size(185, 73);
            this.TurnTheLedON.TabIndex = 0;
            this.TurnTheLedON.Text = "Turn the led ON";
            this.TurnTheLedON.UseVisualStyleBackColor = true;
            this.TurnTheLedON.Click += new System.EventHandler(this.button1_Click);
            // 
            // TurnTheLedOFF
            // 
            this.TurnTheLedOFF.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.TurnTheLedOFF.Location = new System.Drawing.Point(661, 218);
            this.TurnTheLedOFF.Name = "TurnTheLedOFF";
            this.TurnTheLedOFF.Size = new System.Drawing.Size(185, 76);
            this.TurnTheLedOFF.TabIndex = 1;
            this.TurnTheLedOFF.Text = "Turn the led OFF";
            this.TurnTheLedOFF.UseVisualStyleBackColor = true;
            this.TurnTheLedOFF.Click += new System.EventHandler(this.button2_Click);
            // 
            // checkBox1
            // 
            this.checkBox1.AutoSize = true;
            this.checkBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.checkBox1.Location = new System.Drawing.Point(661, 114);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(121, 20);
            this.checkBox1.TabIndex = 2;
            this.checkBox1.Text = "Sound effects";
            this.checkBox1.UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 36F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.ForeColor = System.Drawing.SystemColors.HotTrack;
            this.label1.Location = new System.Drawing.Point(154, 31);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(533, 70);
            this.label1.TabIndex = 3;
            this.label1.Text = "Arduino Control Pannel";
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::ArduinoControlPanel.Properties.Resources.LogoArduino;
            this.pictureBox1.InitialImage = ((System.Drawing.Image)(resources.GetObject("pictureBox1.InitialImage")));
            this.pictureBox1.Location = new System.Drawing.Point(459, 206);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(0, 0);
            this.pictureBox1.TabIndex = 4;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // progressBar1
            // 
            this.progressBar1.Location = new System.Drawing.Point(12, 484);
            this.progressBar1.Name = "progressBar1";
            this.progressBar1.Size = new System.Drawing.Size(834, 23);
            this.progressBar1.TabIndex = 5;
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(12, 133);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(109, 21);
            this.comboBox1.TabIndex = 6;
            this.comboBox1.DropDown += new System.EventHandler(this.comboBox1_DropDown);
            // 
            // Connection
            // 
            this.Connection.AutoSize = true;
            this.Connection.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Connection.ForeColor = System.Drawing.Color.MidnightBlue;
            this.Connection.Location = new System.Drawing.Point(13, 114);
            this.Connection.Name = "Connection";
            this.Connection.Size = new System.Drawing.Size(100, 20);
            this.Connection.TabIndex = 7;
            this.Connection.Text = "Connection";
            this.Connection.Click += new System.EventHandler(this.Connection_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label2.ForeColor = System.Drawing.Color.Black;
            this.label2.Location = new System.Drawing.Point(14, 468);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(114, 16);
            this.label2.TabIndex = 8;
            this.label2.Text = "Process status:";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(666, 337);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(180, 20);
            this.textBox1.TabIndex = 9;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label3.Location = new System.Drawing.Point(663, 313);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(80, 16);
            this.label3.TabIndex = 10;
            this.label3.Text = "Password:";
            // 
            // button3
            // 
            this.button3.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button3.ForeColor = System.Drawing.Color.Red;
            this.button3.Location = new System.Drawing.Point(666, 363);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(180, 30);
            this.button3.TabIndex = 11;
            this.button3.Text = "Activate system";
            this.button3.UseVisualStyleBackColor = true;
            // 
            // Action1Button
            // 
            this.Action1Button.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Action1Button.Location = new System.Drawing.Point(459, 133);
            this.Action1Button.Name = "Action1Button";
            this.Action1Button.Size = new System.Drawing.Size(180, 72);
            this.Action1Button.TabIndex = 12;
            this.Action1Button.Text = "Action 1";
            this.Action1Button.UseVisualStyleBackColor = true;
            this.Action1Button.Click += new System.EventHandler(this.button4_Click);
            // 
            // Main1Button
            // 
            this.Main1Button.BackColor = System.Drawing.Color.Red;
            this.Main1Button.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Main1Button.ForeColor = System.Drawing.Color.Blue;
            this.Main1Button.Location = new System.Drawing.Point(164, 133);
            this.Main1Button.Name = "Main1Button";
            this.Main1Button.Size = new System.Drawing.Size(276, 73);
            this.Main1Button.TabIndex = 14;
            this.Main1Button.Text = "Main Action1";
            this.Main1Button.UseVisualStyleBackColor = false;
            this.Main1Button.Click += new System.EventHandler(this.MainAction1);
            // 
            // Main2Button
            // 
            this.Main2Button.BackColor = System.Drawing.Color.Lime;
            this.Main2Button.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Main2Button.ForeColor = System.Drawing.Color.Blue;
            this.Main2Button.Location = new System.Drawing.Point(164, 218);
            this.Main2Button.Name = "Main2Button";
            this.Main2Button.Size = new System.Drawing.Size(276, 76);
            this.Main2Button.TabIndex = 15;
            this.Main2Button.Text = "Main Action 2";
            this.Main2Button.UseVisualStyleBackColor = false;
            this.Main2Button.Click += new System.EventHandler(this.MainAction2);
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button1.Location = new System.Drawing.Point(459, 218);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(180, 76);
            this.button1.TabIndex = 16;
            this.button1.Text = "Action 2";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.Action2);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ButtonShadow;
            this.ClientSize = new System.Drawing.Size(875, 528);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.Main2Button);
            this.Controls.Add(this.Main1Button);
            this.Controls.Add(this.Action1Button);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.Connection);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.progressBar1);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.checkBox1);
            this.Controls.Add(this.TurnTheLedOFF);
            this.Controls.Add(this.TurnTheLedON);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button TurnTheLedON;
        private System.Windows.Forms.Button TurnTheLedOFF;
        private System.Windows.Forms.CheckBox checkBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.IO.Ports.SerialPort serialPort1;
        private System.Windows.Forms.ProgressBar progressBar1;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.Label Connection;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button Action1Button;
        private System.Windows.Forms.Button Action2Button;
        private System.Windows.Forms.Button Main1Button;
        private System.Windows.Forms.Button Main2Button;
        private System.Windows.Forms.Button button1;
    }
}

