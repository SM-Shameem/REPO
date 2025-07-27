// VS2015 - optimized (version 19)
// Standard - 11-14-17
#include <iostream>
#include <string.h>
#include <conio.h> 
using namespace std;
///////////////////////////////////////////////////////////////////////////////
void main_ca(void) {
	unsigned const float size = 3;
	unsigned short int intArray[] = { NULL, NULL, NULL, NULL };
	unsigned char charArray[(signed long int)size] = { 'a', 'b', 'c' };
	
	cout << "intArray[0] :> " << &intArray[0] << " -> " << intArray[0] << endl;
	cout << "intArray[1] :> " << &intArray[1] << " -> " << intArray[1] << endl;
	cout << "intArray[2] :> " << &intArray[2] << " -> " << intArray[2] << endl;
	cout << "intArray[3] :> " << &intArray[3] << " -> " << intArray[3] << endl;
	cout << endl;
	
	cout << "charArray[0] :> " << &charArray[0] << " -> " << charArray[0] << endl;
	cout << "charArray[1] :> " << &charArray[1] << " -> " << charArray[1] << endl;
	cout << "charArray[2] :> " << &charArray[2] << " -> " << charArray[2] << endl;
	cout << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void func_b(char char_arg) {
	cout << " -> " << char_arg << endl;
}

void func_a(char char_arg[]) {
	for(int i=0; i<strlen(char_arg); i++) {
		cout << "char_arg[" << i << "] : " << &char_arg[i];
		func_b(char_arg[i]);
	}
}
////////////////////////////////////////////////
void func_c(int int_arg[][5]) {
	cout << endl;
	cout << "int_arg[0][0] : " << int_arg[0][0] << endl;
}

void func_d(float float_arg[][3][5]) {
	cout << endl;
	cout << "float_arg[0][0][0] : " << float_arg[0][0][0] << endl;
}
/////////////////////////////////////////////////
void main_cb(void) {
	char CharArray[15] = { "string .." };	
	int IntArray[][5] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	float FloatArray[][3][5] = { NULL, NULL, NULL, NULL };
	
	func_a(CharArray);	// scalar array - as an argument
	func_c(IntArray);	// 2d array - as an argument
	func_d(FloatArray);	// md array - as an argument
}
///////////////////////////////////////////////////////////////////////////////
void func_f(signed char array_arg[], unsigned short arg) {
	for(int i=0; i<arg; i++) 
		cout << "array_arg[" << i << "] : " << array_arg[i] << endl;
}

void main_cc(void) {	
	short const size = 5;
	unsigned short Int_Array[(unsigned short)size] = { NULL };
	signed char Char_Array[(unsigned short)size] = { 'a', 'b', 'c', 'd', 'e' };
	
	// array is not assignable to array as it value - but array element is assignable 
	Int_Array[0] = (signed long)Char_Array[0];
	Int_Array[1] = (signed long)Char_Array[1];
	cout << "Char_Array[0] : " << Char_Array[0] << " : " << Int_Array[0] << endl;
	cout << "Char_Array[1] : " << Char_Array[1] << " : " << Int_Array[1] << endl;
	cout << endl;
		
	// in-case of array not scalar - modifier and type have to match - for parameter and argument
	func_f(Char_Array, size);		 	
}
///////////////////////////////////////////////////////////////////////////////
int* func_e(int array_arg[]) {
	
	array_arg[0] = 10;
	array_arg[1] = 20;
	array_arg[2] = 30;
	array_arg[3] = 40;
	array_arg[4] = 50;
	
	return array_arg;
}

void main_cd(void) {
	int intArray[] = { NULL };
	int *intPointer = new int;
	
	intPointer = func_e(intArray);		// scalar array can be return as pointer 
	cout << endl;
	cout << "intPointer : " << *intPointer << endl; intPointer++;
	cout << "intPointer : " << *intPointer << endl; intPointer++;
	cout << "intPointer : " << *intPointer << endl; intPointer++;
	cout << "intArray[2]: " << intArray[3] << endl;
	cout << "intArray[2]: " << intArray[4] << endl;	
	
	cout << endl;
	cout << "array can't be used as - reference argument of function" << endl;
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system ("cls");
	
	cout << "array > modifier > casting" << endl;
	cout << endl; main_ca(); getch(); system("cls");	
	cout << "array and function argument" << endl;
	cout << endl; main_cb(); getch(); system("cls");	
	cout << "array=array > function argument > modifier > casting" << endl;
	cout << endl; main_cc(); getch(); system("cls");
	cout << "array and function return-type (debug error)" << endl;
	cout << endl; main_cd(); getch(); system("cls");
	
	return 0;
}