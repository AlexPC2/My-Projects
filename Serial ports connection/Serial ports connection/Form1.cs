using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Serial_ports_connection
{
    public partial class Form1 : Form
    {

        
        public Form1()
        {
            InitializeComponent();
            this.Load += Form1_Load;

        }

        //  Bugs don't fixed here:

        void Form1_Load(object sender, EventArgs e)
        {
            var ports = SerialPort.GetPortNames();
            cmbSerialPorts.DataSource = ports;
        }


        private void btnOk_Click(object sender, EventArgs e)
        {
            if (cmbSerialPorts.SelectedIndex > -1)
            {
                MessageBox.Show(String.Format("You selected port '{0}'", cmbSerialPorts.SelectedItem));
                Connect(cmbSerialPorts.SelectedItem.ToString());
            }
            else
            {
                MessageBox.Show("Please select a port first");
            }
        }

        private void Connect(string portName)
        {
            var port = new SerialPort(portName);
            if (!port.IsOpen)
            {
                port.BaudRate = 19200;
                port.Open();
                //Continue here....
            }
        }


        private void button1_Click(object sender, EventArgs e)  // When button "connect" pressed:
        {

        }
    }
}
