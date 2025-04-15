// MSVS 2015 - optimizing (version 19)
// Standard 11-14-17

#include <iostream>
#include <conio.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
void main_ba(void) {
	cout << "char                 : " << sizeof(char) << " bytes -> " << 
		sizeof(char) * 8 << " bits" << endl;
	cout << "int                  : " << sizeof(int) << " bytes -> " << 
		sizeof(int) * 8 << " bits" << endl;
	cout << "float                : " << sizeof(float) << " bytes -> " << 
		sizeof(float) * 8 << " bits" << endl;
	cout << "double               : " << sizeof(double) << " bytes -> " << 
		sizeof(double) * 8 << " bits" << endl;
	cout << "bool                 : " << sizeof(bool) << " bytes -> " << 
		sizeof(bool) * 8 << " bits" << endl;	
	
	cout << endl;
	cout << "signed char          : " << sizeof(signed char) << " bytes" << endl;
	cout << "unsigned char        : " << sizeof(unsigned char) << " bytes" << endl;
		
	cout << endl;
	cout << "short                : " << sizeof(short) << " bytes" << endl;
	cout << "long                 : " << sizeof(long) << " bytes" << endl;
	cout << "signed               : " << sizeof(signed) << " bytes" << endl;
	cout << "unsigned             : " << sizeof(unsigned) << " bytes" << endl;
	cout << "signed short         : " << sizeof(signed short) << " bytes" << endl;
	cout << "unsigned short       : " << sizeof(signed short) << " bytes" << endl;
	cout << "signed long          : " << sizeof(signed long) << " bytes" << endl;
	cout << "unsigned long        : " << sizeof(unsigned long) << " bytes" << endl;	
	
	cout << endl;							// long float - non-standard
	cout << "long float           : " << sizeof(long float) << " bytes" << endl;
	cout << "long double          : " << sizeof(long double) << " bytes" << endl;		
	
	cout << endl;	
	//cout << "signed float         : " << sizeof(signed float) << " bytes" << endl;
	//cout << "unsigned float       : " << sizeof(unsigned float) << " bytes" << endl;	
	//cout << "signed long float    : " << sizeof(signed long float) << " bytes" << endl;
	//cout << "unsigned long float  : " << sizeof(unsigned long float) << " bytes" << endl;	
	//cout << "signed double   -    : " << sizeof(signed double) << " bytes" << endl;	
	//cout << "unsigned double      : " << sizeof(unsigned double) << " bytes" << endl;		
	//cout << "signed long double   : " << sizeof(signed long double) << " bytes" << endl;	
	//cout << "unsigned long double : " << sizeof(unsigned long double) << " bytes" << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_bb(void) {
	int intIndex[4] = { 11, 22, 33, 44 };
	int *ptr = intIndex;
	
	cout << "intIndex[0]  : " << intIndex[0] << endl;
	cout << "&intIndex[0] : " << &intIndex[0] << endl;
	cout << "intIndex[1]  : " << intIndex[1] << endl;
	cout << "&intIndex[1] : " << &intIndex[1] << endl;
	cout << "ptr          : " << ptr << endl;
	cout << "&ptr         : " << &ptr << endl;	
	cout << "*ptr         : " << *ptr << endl;	
	
	cout << endl;
	for(int i=0; i<16; i++) {
		
		if(i < 10) cout << "intIndex " << i << " : " << ptr;
		else cout << "intIndex " << i << " : " << ptr;		
		cout  << " -> " << *ptr << endl;
		++ptr;
	}
}
///////////////////////////////////////////////////////////////////////////////
void main_bc(void) {
	short int intIndex[4] = { 11, 22, 33, 44 };
	short int *ptr = intIndex;
	
	cout << "short intIndex[0]  : " << intIndex[0] << endl;
	cout << "short &intIndex[0] : " << &intIndex[0] << endl;
	cout << "short intIndex[1]  : " << intIndex[1] << endl;
	cout << "short &intIndex[1] : " << &intIndex[1] << endl;
	cout << "short ptr          : " << ptr << endl;
	cout << "short &ptr         : " << &ptr << endl;	
	cout << "short *ptr         : " << *ptr << endl;	
	
	cout << endl;
	for(int i=0; i<16; i++) {
		
		if(i < 10) cout << "intIndex " << i << " : " << ptr;
		else cout << "intIndex " << i << " : " << ptr;		
		cout  << " -> " << *ptr << endl;
		++ptr;
	}
}
///////////////////////////////////////////////////////////////////////////////
void main_bd(void) {
	int int_var = NULL;
	float float_var = NULL;
	char char_var = NULL;
	bool bool_var = NULL;
	
	int_var = 98.5;
	float_var = (float)int_var;
	char_var = float_var;
	bool_var = char_var;
	
	cout << "scalar variable > auto casting " << endl; 	
	cout << "float_var : " << float_var << endl;
	cout << "char_var  : " << char_var << endl;	
	cout << endl;
	////////////////////////////////////////////////////////
	float_var = 96.33;
	
	cout << "scalar variable > manual casting" << endl;
	int_var = (int)float_var + 10;
	char_var = (char)bool_var + 'A';
	bool_var = (bool)int_var + true;
	
	cout << "char_var  : " << char_var << endl;	
	cout << endl;
	////////////////////////////////////////////////////////
	unsigned long double doubleVar = 99.53;
	
	cout << "modified scalar variable > auto casting" << endl; 
	signed char charVar = doubleVar;
	
	cout << "doubleVar : " << doubleVar << endl;
	cout << "charVar   : " << charVar << endl;
	cout << endl;
		
	cout << "modified scalar variable > manual casting" << endl;
	charVar = (signed char)doubleVar + 5; 
	
	cout << "dobuleVar : " << doubleVar << endl;	
	cout << "charVar   : " << charVar << endl;	
	cout << endl;
	////////////////////////////////////////////////////////
	signed char char_array[2] = { 'A', 'B' };
	unsigned short int usint_var = NULL;
	long float sfloat_var = NULL;				// non-standard
	
	cout << "modified array index > casting to modified scalar variable" << endl;
	usint_var = (unsigned short int)char_array[0];
	sfloat_var = (long float)char_array[1];		// non-standard
	
	cout << "char_array[0] : " << char_array[0] << " : " << usint_var << endl;
	cout << "char_array[1] : " << char_array[1] << " : " << sfloat_var << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_be(void) {
	unsigned long int uint_var = 100;
	int *int_ptr = new int;	
	
	cout << "modified scalar variable > casting to pointer" << endl;
	int_ptr = (int*)&uint_var;
	
	cout << "uint_var : " << &uint_var << " -> " << uint_var << endl;
	cout << "int_ptr  : " << int_ptr  << " -> " << *int_ptr << endl;
	cout << endl;
	////////////////////////////////////////////////////////
	unsigned int int_array[3] = { 10, 20, 30 };
	int intVar = int_array[0];		
		
	cout << "modified array variable > casting to pointer" << endl;
	int_ptr = (int*)int_array;	
	
	cout << "int_array[0] : " << &int_array[0] << " -> " << int_array[0] << endl;
	cout << "intVar       : " << &intVar << " -> " << intVar << endl;
	cout << "int_ptr      : " << int_ptr << " -> " << *int_ptr << endl;
	cout << endl;
		
	cout << "modified array index > casting to pointer" << endl; 
	int_ptr = (int*)&int_array[1];	
	
	cout << "int_array[1] : " << &int_array[1] << " -> " << int_array[1] << endl; 
	cout << "int_ptr      : " << int_ptr << " -> " << *int_ptr << endl;
	cout << "++int_ptr    : " << ++int_ptr << " -> " << *int_ptr << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void main_bf(void) {
	unsigned short int int_array[5] = { 97, 98, 99, 100, 101 };
	char *char_ptr = new char;
	void *void_ptr;
	
	cout << "modified array > casting to pointer" << endl;
	char_ptr = (char*)int_array;
	
	cout << "int_array : " << char_ptr << " -> " << *char_ptr << endl;	
	cout << "int_array : " << ++char_ptr << " -> " << *char_ptr << endl;	
	cout << "int_array : " << ++char_ptr << " -> " << *char_ptr << endl;
	cout << "int_array : " << ++char_ptr << " -> " << *char_ptr << endl;	
	cout << "int_array : " << ++char_ptr << " -> " << *char_ptr << endl;
	cout << "int_array : " << ++char_ptr << " -> " << *char_ptr << endl;	
	cout << "int_array : " << ++char_ptr << " -> " << *char_ptr << endl;
	cout << endl;
	
	cout << "modified array > casting to void pointer" << endl;
	void_ptr = (char*)int_array;
	
	cout << "int_array : " << void_ptr << " -> " << endl;
	cout << endl;
	////////////////////////////////////////////////////////
	unsigned char char_array[5] = { 'A', 'B', 'C', 'D', 'E' };
	short unsigned int suint_var = NULL;
	int *int_ptr = new int;
	//void *ptr = new void;
	void *ptr;		// void-pointer can not show pointed data
	
	cout << "modified array > casting to pointer" << endl;
	int_ptr = (int*)char_array;
	
	cout << "char_array : " << int_ptr << " -> " << *int_ptr <<
			" : " << char_array[0] << endl;
	cout << "char_array : " << (int)&char_array[0] << endl;
	cout << "char_array : " << &char_array[0] << endl;
	cout << endl;
	////////////////////////////////////////////////////////		
	cout << "modified array > casting to (void) pointer" << endl;
	ptr = char_array;	
	
	cout << "char_array[0] : " << char_array << " -> " << 
			&char_array[0] << " -> " << char_array[0] << endl;
	cout << "ptr : " << &ptr << " -> " << ptr << " -> " << char_array[0] << endl;
	cout << endl;
	////////////////////////////////////////////////////////
	cout << "(void) pointer > casting to modifier scalar" << endl;
	suint_var = (unsigned short int)ptr;
	
	cout << "char_array[0] : " << ptr << " -> " << char_array[0] << 
			" : " << suint_var << endl;
			
	suint_var = (unsigned short int)&char_array[0];
	cout << "char_array[0] : " << suint_var << endl;	
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "data-type and modifier size " << endl;
	cout << endl; main_ba(); getch(); system("cls");
	cout << "data representation to memory" << endl; 
	cout << endl; main_bb(); getch(); system("cls");
	cout << "modifier representation to memory" << endl; 
	cout << endl; main_bc(); getch(); system("cls");
	cout << "casting > modified array" << endl;
	cout << endl; main_bd(); getch(); system("cls");
	cout << "casting > pointer & array" << endl;	
	cout << endl; main_be(); getch(); system("cls");
	cout << "casting > modified pointer" << endl;	
	cout << endl; main_bf(); getch(); system("cls");
	
	return 0;
}

// 01. data-type size and modifier size
// 02. data-type representation to memory
// 03. modifier data-type representation 
// 04. custing