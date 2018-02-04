
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
        /*
        private void Action2Button(object sender, EventArgs e)
        {
            myport.WriteLine("3");
        }
        */
        private void Action2(object sender, EventArgs e)        // Action 2 button
        {

        }
    }
}
