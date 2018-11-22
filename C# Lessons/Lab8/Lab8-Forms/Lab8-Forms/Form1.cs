using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using System.IO;                             // Подключаем бибилиотеки

namespace Lab8_Forms
{
    public partial class Form1 : Form
    {
        public Form1()                      // При запуске приложения
        {
            InitializeComponent();

            //  === Ввод из файла: ====
            string path = @"numbers_Array.txt";                         // Имя и путь к файлу (лежит в результатах он)

            //StreamReader objReader = new StreamReader(path);          // Объект символьный поток ввода из файла


            using (TextReader reader = File.OpenText(path))
            {
                string text = "";
                string arrayStr = "";

               /* List<int> myArray.Add(0);

                while (text != null)
                {
                    string[] bits = text.Split(' ');
                    int x = int.Parse(bits[0]);
                    text = reader.ReadLine();
                    arrayStr = arrayStr + x.ToString();
                    myArray.Add(x);
                }
                */

                //double y = double.Parse(bits[1]);
                //string z = bits[2];

                //string arrayStr = x.ToString();
               // InputArray.Text = arrayStr;

            }

        }

        private void button1_Click(object sender, EventArgs e)          // Кнопка для выполнения сортировки массива нажата
        {
            
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void InputArray_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
