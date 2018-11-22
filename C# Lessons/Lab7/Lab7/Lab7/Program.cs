using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.IO;                // Подключаем бибилиотеки
using System.Collections;
using System.Text.RegularExpressions;

/*
 * 
 * 
 * 
 * 
 *   .g8"""bgd  .M"""bgd 
    .dP'     `M ,MI    "Y 
    dM'       ` `MMb.     
    MM            `YMMNq. 
    MM.         .     `MM 
    `Mb.     ,' Mb     dM 
      `"bmmmd'  P"Ybmmd"  




                     _              _
                    | |------------| |
                 .-'| |            | |`-.
               .'   | |            | |   `.
            .-'      \ \          / /      `-.
          .'        _.| |--------| |._        `.
         /    -.  .'  | |        | |  `.  .-    \
        /       `(    | |________| |    )'       \
       |          \  .i------------i.  /          |
       |        .-')/                \(`-.        |
       \    _.-'.-'/     ________     \`-.`-._    /
        \.-'_.-'  /   .-' ______ `-.   \  `-._`-./\
         `-'     /  .' .-' _   _`-. `.  \     `-' \\
                | .' .' _ (3) (2) _`. `. |        //
               / /  /  (4)  ___  (1)_\  \ \       \\
               | | |  _   ,'   `.==' `| | |       //
               | | | (5)  | B.T.| (O) | | |      //
               | | |   _  `.___.' _   | | |      \\
               | \  \ (6)  _   _ (9) /  / |      //
               /  `. `.   (7) (8)  .' .'  \      \\
              /     `. `-.______.-' .'     \     //
             /        `-.________.-'        \ __//
            |                                |--'
            |================================|hjw
            "--------------------------------"




    //   ) )                    //   ) )                                   
   //___/ /            ___     //___/ / / __      ___       __      ___    
  / ___ (   //   / / ((   ) ) / ____ / //   ) ) //   ) ) //   ) ) //___) ) 
 //   | |  //   / /   \ \    //       //   / / //   / / //   / / //        
//    | | ((___( ( //   ) ) //       //   / / ((___/ / //   / / ((____     






 * 
 * 
 * Разработать приложение для обработки строк (используя класс String или StringBuilder)
 * Сделать свой вариант задания на строки в С++ (Лабораторная работа №2)
 *  
 *  Вариант 12
 *  
 *  Задание: 
 *  Дан текстовый файл f. Вывести все российские телефонные номера (+7 …). 
 *  Номер должен быть длиной 10 знаков. 
 * 
 * Из 2 лабораторной:
 * Удвоить вхождение некоторого символа в строке
 * 
 * 
 * */

namespace Lab7
{
    class Work
    {
        public bool readFile(string filename) {
            return false;
        }
        public bool writeFile(string filename) {
            return false;
        }
    }

    class L1
    {
   /*     public void TestChr()
        {
            char ch1 = 'a';
            char ch2 = '\x5A';
            char ch3 = '\u0058';
        }
    */
        static void Main(string[] args)
        {
            Work w = new Work();
            w.readFile("");
            w.writeFile("");

            //  === Ввод из файла: ====
            string path = @"numbers.txt";

            StreamReader objReader = new StreamReader(path);
            string sLine = "";
            ArrayList arrText = new ArrayList();

            while (sLine != null)
            {
                sLine = objReader.ReadLine();
                if (sLine != null)
                    arrText.Add(sLine);
            }
            objReader.Close();
            // ======   ======  
            Console.WriteLine(" ==== Все номера: ====");

            foreach (string sOutput in arrText)
                Console.WriteLine(sOutput);

            Console.WriteLine(" ");

            // Поиск российских номеров в списке:

            Console.WriteLine("     ==== Российские номера: ====");
            //string rusNum = "+7";
            // Define a regular expression for repeated words.
            Regex rx = new Regex(@"\+7\s", RegexOptions.Compiled | RegexOptions.IgnoreCase);    // Регулярное выражение

            /*
             * Regex - объетк регулярное выражение для поиска российского номера
             * 
             * \+7\ - Обозначение самого себя ("+7" вместо метасимвола)
             * 
             * s - Вся оставшаяся строка
             * 
             * То есть мы ищем строку, в начале которой стоит +7
             * 
             * */

            foreach (string sOutput in arrText)
            {
                //int pos = sOutput.IndexOf("+7");
                //if(pos != -1)
                //string sub = "";
                //if (sOutput.Length >2)
                //    sub = sOutput.Substring(0, 2);
                //Console.WriteLine("Substring: {0}   String:{0}", sub, sOutput);
                //Console.WriteLine(" ");

                //if(sub == rusNum)
                if(rx.IsMatch(sOutput))
                {
                    Console.WriteLine( sOutput);
                }
            }



            // По 2 лабораторной:
            Console.WriteLine("");
            /*
            Console.WriteLine(" ==== Lab2 ====");
            Console.WriteLine(" Введите вашу строку:");
            string str = Console.ReadLine();
            Console.WriteLine(" Введите символ, который нужно удвоить:");
            char chr = Console.ReadKey().KeyChar;
            Console.WriteLine("Строка: {0} ", str);
            Console.Write(chr);
*/

            Console.ReadLine();
            // ==== Конец main() ====
            
        }
    }
}

