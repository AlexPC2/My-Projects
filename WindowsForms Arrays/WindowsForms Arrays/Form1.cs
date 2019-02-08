using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace WindowsForms_Arrays
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        //#define SIZE 12

        //int a[SIZE] = { 1, 2, 3, 4, 33, 43, 34, 54, 45, 6, 0, 0, };


      
        char[] gLetters = {'А','а','Е','е','И', 'и', 'О', 'о', 'У', 'у' };
        int[] a = { 1, 2, 3, 4, 33, 43, 34, 54, 45, 6, 0, 0 };

        float[] b = {0.5 ,0.5 ,1 ,2 , 3, 4 ,5 ,6 ,7 ,8 ,9 ,10 };


        char[] strRus = "привет мир";      // String on russian

        // Check is this  symobl exist in following array:
                             // Symbol:    Array:  Size of array:
        bool isValueInArray(int val, int[] arr, int size)
        {
            int i;
            for (i = 0; i < size; i++)
            {
                if (arr[i] == val)
                    return true;
            }
            return false;
        }

        int FindHowMany(char[]myString)
        {
            int counter = 0;        // How many letters in the string 
            int wordsCounter = 0;   // How many words in the string
            bool isWord = false;    // Flag to check word end
            int approx = 0;         // Approximately value of words pairs in the string
            for (int i = 0; i < 12; i++)
            {
              if(myString[i] != ' ' || i != 0) {     // If there is no spaces:
                    wordsCounter = wordsCounter + 1; // Plus one new word!
                    isWord = true;           
            }
                else
                {
                    isWord = false;            // Then make it false
                }
              //    Now if there is no end of the word:
              if(isWord ==  true)
                {
                    if( isValueInArray(myString[i], gLetters, 10) == true)
                    {
                        counter = counter + 1;  // Plus one 
                    }
                }

                approx = wordsCounter / counter ;   // How many words / how many pairs

            return approx ;
        }
            // Two dementional array:
            int myMatrix [3][4] = {
                { 0, 0, 0, 0},
                { 1, 2, 3, 4},
                { 0, 0, 0, 0}
            };

           int findSum(int [][]Mtrx, int x, int clmNum)
        {
            int sum = 0;

            for (int i =0; i < x; i++)
            {
                sum = sum + Mtrx[x][clmNum];
            }
            return sum;
        }

        
        int[] rawSum = {0, 0, 0, 0 };

        int FindHowMany(int [][]mtrx, int []rawSum)
        {
            int counter = 0;

            // Find sums of all rows:
            for (int i = 0; i< 4; i++)
             {
                rawSum[i] = findSum(mtrx, 3, i);
             }

            // Now find equal sums of columns:

            for (int i = 0; i < 3-1; i ++)
            {
                for (int j = i+1; j< 3; i++)
                {
                    if (rawSum[i] == rawSum[j])
                        counter = counter + 1;
                }
            }

            return counter;
        }


            // For exercise #2
        int FindNumbers(float[] b)
        {
            int counter = 0;

            for (int i = 0; i < 12; i++)
            {
                if (b[i] > (1/b[i]) )
                {
                    counter = counter + 1;
                }
            }

            return counter;
        }

        int SumOfNumbers(int a)
        {

            int sum = 0;    // Sum of numbers

            while (a > 0)
            {
                sum = sum + a % 10;
                a = a / 10;
            }
            return sum;
        }



        // Find equal sum of numbers pairs:
        void FindPairs(int[] a)
        {
            for (int i = 0; i < 11- 1; i++)
            {
                if (SumOfNumbers(a[i]) == SumOfNumbers(a[i + 1]))
                {
                    //  === Pairs printing ====
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show(FindHowMany(Mtrx,raw));
        }
    }
}
