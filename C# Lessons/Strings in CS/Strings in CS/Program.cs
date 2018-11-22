using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// Первая программа на С#

namespace Strings_in_CS             // Пространство имен программы 
{
    class Program
    {

        // Как и в С++ все определяется до main()


        static void Main(string[] args)             // Некий аналог main() в С++
        {
            char ch1 = 'a';                         // Определение символа
            char ch2 = '\x5A';
            char ch3 = '\u0058';

            int num;

            char ch = new char();                   // Новый символ через new

            string s;                               // Строка в С#

            s = ch1.ToString();                     // Метод, конвертирующий в строку символ

            Console.WriteLine(s);                   // Вывод строки в консоль

            Console.Write(ch1);

            num = Console.Read();                   // Ввод с консоли int , ждет Enter\

            //ch = Console.Read("s");

            ch = Console.ReadKey().KeyChar;         // Ввод символа с консоли, аналог getch()

        }
    }
}
