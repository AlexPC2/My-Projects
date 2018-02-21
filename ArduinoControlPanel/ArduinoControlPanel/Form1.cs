
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using System.IO.Ports;  //Library for warking with Serial Ports

namespace ArduinoControlPanel
{
    public partial class Form1 : Form
    {
        private SerialPort myport;

        // Initializing serial port:
        private void Init()
        {

            try
            {
                myport = new SerialPort();
                myport.BaudRate = 9600;
                myport.PortName = "COM7";   // Now Arduino connected to the com7 usb port
                myport.Open();

            }
            catch (Exception)
            {
                MessageBox.Show("Error! Connection failed!");   // Show error message if connection failed
            }

            //
            TurnTheLedON.Enabled = true;
            TurnTheLedOFF.Enabled = false;
        }

        //  === CHOOSING SERIAL PORT===
        /*
        private void btnOpen_Click(object sender, EventArgs e)
        {
            string[] myPort;

            int COM1 = cbCommPorts.SelectedIndex;
            int COM2 = cbCommPorts.SelectedIndex;
            int COM3 = cbCommPorts.SelectedIndex;
            Object selectedItem = serialPort1.PortName;

            myPort = System.IO.Ports.SerialPort.GetPortNames();
            cbCommPorts.Items.AddRange(myPort);

            serialPort1.PortName = cbCommPorts.SelectedItem.ToString();
            serialPort1.BaudRate = 115200;

            if (serialPort1.IsOpen)
            {
                serialPort1.PortName = cbCommPorts.SelectedItem.ToString();

                serialPort1.Open();
                btnTransmit.Enabled = true;
                btn2.Enabled = true;
                btn3.Enabled = true;
            }

            ====     ====
    */

        // public partial class Form1 : Form
        // {

            /*
        public Form1()
            {
                InitializeComponent();
                this.Load += Form1_Load;
            }

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
       // }
       */
        //  ====

        public Form1()
        {
            InitializeComponent();
            Init();
        }
        // If button pushed:
        private void button1_Click(object sender, EventArgs e)
        {
            myport.WriteLine("1");
            TurnTheLedON.Enabled = false;    // Disable button ON
            TurnTheLedOFF.Enabled = true;    // Enable button OFF
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void Connection_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void notifyIcon1_MouseDoubleClick(object sender, MouseEventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)  //Action1 small button
        {
            myport.WriteLine("2");
        }

       

        private void button2_Click(object sender, EventArgs e)
        {
            myport.WriteLine("0");
            TurnTheLedON.Enabled = true;    // Enable button ON
            TurnTheLedOFF.Enabled = false;  // Disable button OFF
        }

        private void MainAction1(object sender, EventArgs e)    //Big Red button
        {
            myport.WriteLine("A");
        }

        private void MainAction2(object sender, EventArgs e)    //Big Green button
        {
            myport.WriteLine("B");
        }
       
        private void Action2(object sender, EventArgs e)        // Action 2 button
        {

        }

        private void comboBox1_DropDown(object sender, EventArgs e)
        {
            string[] ports = SerialPort.GetPortNames();
            comboBox1.Items.Clear();
            foreach (string comport in ports)
            {
                comboBox1.Items.Add(comport);
            }
        }

        // private void GetConnected(object sender, EventArgs e)   // Button for connecting
        // {
        //     myport.WriteLine("Connect!");                       //Send command to controller
        // }

    }
}
