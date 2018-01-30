// Portal2Mod-Ledcontrol.cpp: определяет точку входа для консольного приложения.
//

// Control Arduino led from Portal2 Mod game
// If you press the button in game, then the led turn on in real life!

// Version 0.1
// Date:  The 30th of January 2018

// Created by Alexander Noyanov

#include "stdafx.h"
//#include <unistd.h>	//For MAC
#include <windows.h>//For WINDOWS
#include<stdio.h>
#include <iostream>		// Library of standart functions
#include <fstream>		// For working with files


int main()
{
	int data[] = { 10,5,13 };  //Random data we want to send
	FILE *file;

	//file = fopen("/dev/ttyUSB7", "w");  //Opening device file PORT7
	//file = fopen("Port_#0006.Hub_#0003","w");
	file = fopen("\$device\COM7", "w"); 
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		fprintf(file, "%d", data[i]); //Writing to the file
		fprintf(file, "%c", ',');     //To separate digits
		Sleep(1);
	}

	
	fprintf(file,"1");
	fclose(file);
}


/*
int main()
{
    return 0;
}
*/
