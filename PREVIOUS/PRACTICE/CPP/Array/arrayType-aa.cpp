// VS2015 - Optimized (Version 19)
// Standard - 11-14-17

#include <iostream>
#include <conio.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
// 01. array index size must have to define 
// 02. index size can be defined by - declaring index size or defining array 
// ->  element value - at the time of declaring array
// 03. index size can be - literal or const variable 
// 04. index size can not be a variable 
// 05. arrey element number can be - literal or const variable or variable 

// 06. index size and index number can not be - character or float - 
// ->  it can be only integer 

// 07. char array - can be string variable or character type element
// 08. without index number it will show as string and with index number it will
// ->  show the character of specific index number
// 09. at the time of declare an array, we can initialize the array by value 
// ->  and all those values must have to define inside { .. } brackets
// 10. values can be - literal, const variable, or variable 

// 11. we must have to declare an array with it size and we can define the array 
// ->  size by - declare the index size - or - declare required default elements

// ->  NB - after declare an array or scalar variable compiler may access next 
// ->  1 to 4 bytes memory space - depending on data-type and system 

void main_ba(void) {		
	float varOne = 10.11, varTwo = 20.22;	
	float const varThree = 30.33;	
	
	int int_array[] = { 1, 2, 3 };
	float float_array[] = { varOne, varTwo, varThree, 40.44 };
	double double_array[3] = { 100.10, 200.20, 300.30 };
	
	cout << "int_array    : " << int_array << endl;
	cout << "int_array[0] : " << &int_array[0] << " - > " << int_array[0] << endl;
	cout << "int_array[1] : " << &int_array[1] << " - > " << int_array[1] << endl;
	cout << "int_array[2] : " << &int_array[2] << " - > " << int_array[2] << endl;
	cout << endl;
	
	cout << "float_array    : " << float_array << endl;
	cout << "float_array[0] : " << &float_array[0] << " - > " << float_array[0] << endl;
	cout << "float_array[1] : " << &float_array[1] << " - > " << float_array[1] << endl;
	cout << "float_array[2] : " << &float_array[2] << " - > " << float_array[2] << endl;
	cout << "float_array[3] : " << &float_array[3] << " - > " << float_array[3] << endl;
	cout << endl;
	
	cout << "double_array    : " << double_array << endl;
	cout << "double_array[0] : " << &double_array[0] << " - > " << double_array[0] << endl;
	cout << "double_array[1] : " << &double_array[1] << " - > " << double_array[1] << endl;
	cout << "double_array[2] : " << &double_array[2] << " - > " << double_array[2] << endl;
	cout << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_bb(void) {
	#define SIZE 10
	
	char char_array[3];						
	char_array[0] = 'A';
	char_array[1] = 'B';
	char_array[2] = 'C';
	char str_array[SIZE] = { "string" };	// index size defined by constant
	
	cout << "char_array[0] : " << &char_array[0] << " - > " << char_array[0] << endl;
	cout << "char_array[1] : " << &char_array[1] << " - > " << char_array[1] << endl;
	cout << "char_array[2] : " << &char_array[2] << " - > " << char_array[2] << endl;
	cout << endl;
	
	cout << "str_array    : " << str_array << endl;
	
	str_array[0] = 's';
	str_array[1] = 't';
	str_array[2] = 'r';
	str_array[3] = 'i';
	str_array[4] = 'n';
	str_array[5] = 'g';	
	str_array[6] = '1';
	cout << "str_array    : " << str_array << endl;
	cout << "str_array[0] : " << &str_array[0] << " -> " << str_array[0] << endl;
	cout << "str_array[1] : " << &str_array[1] << " -> " << str_array[1] << endl;
	cout << "str_array[2] : " << &str_array[2] << " -> " << str_array[2] << endl;
	cout << "str_array[3] : " << &str_array[3] << " -> " << str_array[3] << endl;
	cout << "str_array[4] : " << &str_array[4] << " -> " << str_array[4] << endl;
	cout << "str_array[5] : " << &str_array[5] << " -> " << str_array[5] << endl;
	cout << "str_array[6] : " << &str_array[6] << " -> " << str_array[6] << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void main_bc(void) {
	int array_int[2] = { NULL };
	float array_float[] = { NULL };
	char array_char[] = { NULL };
	
	cout << "array_int[0]   : " << &array_int[0] << " -> " << array_int[0] << endl;
	cout << "array_float[0] : " << &array_float[0] << " -> " << array_float[0] << endl;
	cout << "array_char[0]  : " << &array_char[0] << " -> " << array_char[0] << endl;
	cout << "array_char     : " << &array_char << " -> " << array_char << endl;
	cout << endl;
		
	cout << "char-array size : ";
	cin >> array_int[0];
	
	for(int i=0; i<array_int[0]; i++) {
		cout << "array_char[" << i << "] : ";
		cin >> array_char[i];
	}
	
	cout << endl;
	
	for(int i=0; i<array_int[0]; i++) 
		cout << "array_char[" << i << "] : " << array_char[i] << endl;
	////////////////////////////////////////////////
	
	int int_array_[] = { 0, 1, 2, 3, 4, 5 };
	char char_array_[] = { 'a', 'b', 'c', 'd', 'e' };
	
	cout << endl;
	for(int i=0; i<5; i++) 
		cout << "char_array_[" << i << "] : " << char_array_[int_array_[i]] << endl;		
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "array declaration and assigning value and memory address" << endl;
	cout << endl; main_ba(); getch(); system("cls");
	cout << "char-array declaration and assigning value and memory address" << endl;
	cout << endl; main_bb(); getch(); system("cls");
	cout << "array syntax manipulation and user input and output" << endl;
	cout << endl; main_bc(); getch(); system("cls");
	
	return 0;
}