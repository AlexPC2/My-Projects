// SymbolsInverter.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


#include <stdio.h>

 char myBitmap[] = { //this is the array char
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x7f,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0x1f,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xc3, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x01, 0xc7,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x00, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x3c, 0x63,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc4, 0x7e, 0x23, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcc, 0x7e, 0x33,
	0xff, 0xc7, 0xff, 0xff, 0xff, 0xcc, 0x7e, 0x33, 0xff, 0x83, 0xff, 0xff, 0xff, 0xcc, 0x7e, 0x33,
	0xff, 0x01, 0xff, 0xff, 0xff, 0xce, 0x3c, 0x73, 0xfe, 0x38, 0xff, 0xff, 0xff, 0xc6, 0x00, 0xe3,
	0xfc, 0x3c, 0x7f, 0xff, 0xff, 0xe7, 0x01, 0xe7, 0xf8, 0x3e, 0x3f, 0xfe, 0x7f, 0xe3, 0xc3, 0xc7,
	0xf0, 0x1f, 0x1f, 0xfc, 0x3f, 0xe3, 0xff, 0xc7, 0xe3, 0x8f, 0x0f, 0xfc, 0x0f, 0xf1, 0xff, 0x8f,
	0xe3, 0xc7, 0x07, 0xfc, 0x07, 0xf8, 0xff, 0x1f, 0xe3, 0xe0, 0x03, 0xf8, 0xc3, 0xfc, 0x7e, 0x3f,
	0xf1, 0xf0, 0x31, 0xf0, 0x61, 0xfe, 0x3c, 0x7f, 0xf8, 0xf8, 0x78, 0xe0, 0x30, 0xff, 0x18, 0xff,
	0xfc, 0x30, 0x7c, 0x46, 0x18, 0x7f, 0x81, 0xff, 0xfe, 0x00, 0x3e, 0x0f, 0x0c, 0x3f, 0xc3, 0xff,
	0xff, 0x03, 0x1e, 0x0f, 0x86, 0x1f, 0xe7, 0xff, 0xff, 0x87, 0x8e, 0x0f, 0xc3, 0x0f, 0xff, 0xff,
	0xff, 0xc3, 0xc4, 0x07, 0xe1, 0x87, 0xff, 0xff, 0xff, 0xe1, 0xe0, 0xe3, 0xf0, 0xc3, 0xff, 0xff,
	0xff, 0xf0, 0xf0, 0xf1, 0xf8, 0x63, 0xff, 0xff, 0xff, 0xf8, 0x61, 0xf9, 0xfc, 0x31, 0xff, 0xff,
	0xff, 0xfc, 0x03, 0xff, 0xfe, 0x00, 0xff, 0xff, 0xff, 0xfe, 0x07, 0xff, 0xff, 0x01, 0xff, 0xff,
	0xff, 0xff, 0x0f, 0xff, 0x9e, 0x0f, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0x9e, 0x3f, 0xff, 0xff,
	0xff, 0xfe, 0x3c, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0x70, 0x3f, 0xf8, 0xff, 0xff, 0xff,
	0xff, 0xfc, 0xe0, 0x1f, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xc7, 0x9f, 0xc0, 0xff, 0xff, 0xff,
	0xff, 0xf8, 0xc7, 0x8f, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xf8, 0xcf, 0x8f, 0x0e, 0x3f, 0xff, 0xff,
	0xff, 0xfc, 0xc7, 0x9e, 0x1f, 0x1f, 0xff, 0xff, 0xff, 0xfc, 0xe2, 0x1c, 0x0f, 0x8f, 0xff, 0xff,
	0xff, 0xfc, 0x60, 0x38, 0x47, 0xc7, 0xff, 0xff, 0xff, 0xfc, 0x78, 0x70, 0xe3, 0xc3, 0xff, 0xff,
	0xff, 0xfe, 0x3f, 0xe0, 0xf1, 0x81, 0xff, 0xff, 0xef, 0x3e, 0x0f, 0xc0, 0x78, 0x00, 0xff, 0xff,
	0xcf, 0x3c, 0x00, 0x04, 0x3c, 0x1c, 0x7f, 0xff, 0xc7, 0x1c, 0xe0, 0x1e, 0x1c, 0x1e, 0x3f, 0xff,
	0xc7, 0x1f, 0xfd, 0xff, 0x08, 0x1f, 0x1f, 0xff, 0xe7, 0x8f, 0xff, 0xff, 0x80, 0x8f, 0x8f, 0xff,
	0xe3, 0xc7, 0xff, 0xff, 0xc1, 0xc7, 0x8f, 0xff, 0xf3, 0xe1, 0xff, 0xff, 0xe1, 0xe3, 0x8f, 0xff,
	0xf1, 0xf0, 0x7f, 0xff, 0xf0, 0xf0, 0x1f, 0xff, 0xf8, 0xf8, 0x7f, 0xff, 0xf8, 0xf8, 0x3f, 0xff,
	0xfc, 0x7f, 0xff, 0xff, 0xfc, 0x78, 0x7f, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfe, 0x38, 0xff, 0xff,
	0xff, 0x0f, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff,
	0xff, 0xc0, 0x7f, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
char inverter(char val) { // this function invert the value
	char a = (val & 0x01) << 7;
	char b = (val & 0x02) << 5;
	char c = (val & 0x04) << 3;
	char d = (val & 0x08) << 1;
	char e = (val & 0x10) >> 1;
	char f = (val & 0x20) >> 3;
	char g = (val & 0x40) >> 5;
	char h = (val & 0x80) >> 7;

	val = a | b | c | d | e | f | g | h;
	return val;
}
int main(void) {

	int size = sizeof(myBitmap);// myBitmap is the name for our array char
	char values[size];

	for (int i = 0; i < size; i++) {
		values = inverter(myBitmap); // here we revert each value;
	}
	int count = 0;
	for (int j = 0; j < size; j++) {
		printf("0x%x", values[j]);
		if (count == 16) {
			printf(",\n");
			count = 0;
		}
		else if (j == size - 1) {
			printf("\n");
		}
		else {
			printf(", ");
			count++;
		}
	}

}