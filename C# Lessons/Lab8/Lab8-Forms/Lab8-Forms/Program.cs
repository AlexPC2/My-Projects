using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

using System.IO;                // Подключаем бибилиотеки

/*
 * 
    88                     88           ad88888ba   
    88                     88          d8"     "8b  
    88                     88          Y8a     a8P  
    88          ,adPPYYba, 88,dPPYba,   "Y8aaa8P"   
    88          ""     `Y8 88P'    "8a  ,d8"""8b,   
    88          ,adPPPPP88 88       d8 d8"     "8b  
    88          88,    ,88 88b,   ,a8" Y8a     a8P  
    88888888888 `"8bbdP"Y8 8Y"Ybbd8"'   "Y88888P"   



    Произвести сортировку файла целых чисел методом пузырька.
         _______       __    __    __                         __   __             
        |   _   .--.--|  |--|  |--|  .-----..-----.-----.----|  |_|__.-----.-----.
        |.  1   |  |  |  _  |  _  |  |  -__||__ --|  _  |   _|   _|  |     |  _  |
        |.  _   |_____|_____|_____|__|_____||_____|_____|__| |____|__|__|__|___  |
        |:  1    \                                                         |_____|
        |::.. .  /                                                                
        `-------'                                                                 
 * 
 * 
 * 
 * 
 * 
 * */
namespace Lab8_Forms
{
    static class Program
    {
        /// <summary>
        /// Главная точка входа для приложения.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form1());




        }
    }
}
