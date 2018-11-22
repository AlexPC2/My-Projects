

/*
 * 
 * 

         _         _     ___ 
        | |   __ _| |__ ( _ )
        | |__/ _` | '_ \/ _ \
        |____\__,_|_.__/\___/


       _____ __          _        _________
      / __(_) /__ ___   (_)__    / ___/ __/
     / _// / / -_|_-<  / / _ \  / /___\ \  
    /_/ /_/_/\__/___/ /_/_//_/  \___/___/  




     ========================|
    ||                       |
    ||       ++ Array.txt++  |              
    ||           10          |
    ||           2           |
    ||           8           |
    ||           3           |
    ||           14          |
    ||           44          |
    ||           5           |
    ||           6           |
    ||                       |
    ||                       |
    ||                       |
    ||_______________________|
    


     ________
    /        \______________
    |      _________________|____      
    |     /                     /
    |    /                     /
    |   /                     /
    |  /                     /
    | /                     /
    |/                     /                
    |_____________________/



  ____________
|`.            `.
|  `._____________`.
|   | .-----------.|
|   | |  .-------.||
|   | |  |       |||
|   | |`.|  ==== |||
|`. | |`.|_______|||
|  `|_|===========||
|   | |  .-------.||
|   | |  |       |||
|   | |`.|  ==== |||
|`. | |`.|_______|||
|  `|_|===========||
|   | |  .-------.||
|   | |  |       |||
|   | |`.|  ==== |||
 `. | |`.|_______|||
   `|_|========LGB||


        November 6 2018
        By Alexander Noyanov
        MPEI A-07-17

 * 
 * 
 * 
 */



using System.IO;                             // Подключаем бибилиотеки

using System;



namespace Lab8
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");



           // Initialize Component();

            //  === Ввод из файла: ====
            string path = @"numbers_Array.txt";                         // Имя и путь к файлу (лежит в результатах он)

            StreamReader objReader = new StreamReader(path);          // Объект символьный поток ввода из файла

            string strValue;
            //int value;


            sring str = objReader.ReadLine(path);

            Console.Write(str);
            //using (TextReader reader = File.OpenText(path))
            /*{
                //string text = "";
                //string arrayStr = "";

                strValue = reader.ReadLine();

                Console.Write(strValue);

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

           // }


        }
    }
}
