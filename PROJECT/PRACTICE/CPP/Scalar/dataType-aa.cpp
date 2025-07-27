// MSVS 2015 - optimizing (version 19)
// Standard 11-14-17

#include <iostream>
#include <conio.h>
using namespace std;

#define STR "This is a String" 
///////////////////////////////////////////////////////////////////////////////
void main_aa(void) {
	const int int_const = 11;
	const char char_const = 'A';
	
	char char_var = 'A', 
		*char_ptr = &char_var;
	bool bool_var = true, 
		*bool_ptr = &bool_var;
	int int_var = 10, 
		*int_ptr = &int_var;
	float float_var = 10.50, 
		*float_ptr = &float_var;
	double double_var = 10.50, 
		*double_ptr = &double_var;
		
	//cout << "void type   : (byte) > " << sizeof(void) << endl;
	
	cout << endl; 
	cout << "int_const  : " << int_const << endl;
	cout << "char_const : " << char_const << endl;
	cout << "STR        : " << STR << endl;
	
	cout << endl;
	cout << "char_var   : " << *char_ptr << "    > " << char_ptr << endl;
	cout << "bool_var   : " << *bool_ptr << "    > " << bool_ptr << endl;	
	cout << "int_var    : " << *int_ptr << "   > " << int_ptr << endl;
	cout << "float_var  : " << *float_ptr << " > " << float_ptr << endl;
	cout << "double_var : " << *double_ptr << " > " << double_ptr << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_ab(void) {
	cout << "1 byte = 8 bit .........." << endl;
	cout << "char type                  : (byte) > " << sizeof(char) << endl;	
	cout << "signed char type           : (byte) > " << sizeof(signed char) << endl;	
	cout << "unsigned char type         : (byte) > " << sizeof(unsigned char) << endl;	
	
	cout << endl;
	cout << "bool type                  : (byte) > " << sizeof(bool) << endl;	
	//cout << "signed bool type           : (byte) > " << sizeof(signed bool) << endl;	
	//cout << "unsigned bool type         : (byte) > " << sizeof(unsigned bool) << endl;	
	
	cout << endl;
	cout << "int type                   : (byte) > " << sizeof(int ) << endl;
	cout << "signed int type            : (byte) > " << sizeof(signed int) << endl;
	cout << "unsigned int type          : (byte) > " << sizeof(unsigned int) << endl;	
	cout << "short int type             : (byte) > " << sizeof(short int) << endl;
	cout << "long int type              : (byte) > " << sizeof(long int) << endl;
	cout << "short signed int type      : (byte) > " << sizeof(signed short int) << endl;
	cout << "short unsignedint type     : (byte) > " << sizeof(unsigned short int) << endl;
	cout << "long signed int type       : (byte) > " << sizeof(signed long int) << endl;
	cout << "long unsigned int type     : (byte) > " << sizeof(unsigned long int) << endl;
	
	cout << endl;
	cout << "float type                 : (byte) > " << sizeof(float) << endl;
	//cout << "short float type           : (byte) > " << sizeof(short float) << endl;
	cout << "long float type            : (byte) > " << sizeof(long float) << endl;
	//cout << "short signed float type    : (byte) > " << sizeof(short signed float) << endl;
	//cout << "short unsigned float type  : (byte) > " << sizeof(short unsigned float) << endl;
	//cout << "long signed float type     : (byte) > " << sizeof(long signed float) << endl;
	//cout << "long unsigned float type   : (byte) > " << sizeof(long unsigned float) << endl;
	
	cout << endl;
	cout << "double type                : (byte) > " << sizeof(double) << endl;		
	//cout << "short double type          : (byte) > " << sizeof(short double) << endl;
	cout << "long double type           : (byte) > " << sizeof(long double) << endl;		
	//cout << "short signed double type   : (byte) > " << sizeof(short signed double) << endl;
	//cout << "short unsigned double type : (byte) > " << sizeof(short unsigned double) << end
	//cout << "long signed double type    : (byte) > " << sizeof(long signed double) << endl;
	//cout << "long unsigned double type  : (byte) > " << sizeof(long unsigned double) << end
}
///////////////////////////////////////////////////////////////////////////////
void func_a(int int_arg, float float_arg, char char_arg, bool bool_arg) {
	cout << "int_arg   : " << int_arg << endl;
	cout << "float_arg : " << float_arg << endl;
	cout << "char_arg  : " << char_arg << endl;
	cout << "bool_arg  : " << bool_arg << endl;
	cout << endl;
}

void main_ac(void) {
	int int_var = 20;
	float float_var = 30.5;
	char char_var = 'B';
	bool bool_var = false;
	
	func_a(10, 20.5, 'A', true);
	func_a(int_var, float_var, char_var, bool_var);
}
///////////////////////////////////////////////////////////////////////////////
void func_b(int &int_arg, char &char_arg, bool &bool_arg) {
	cout << "int_arg  : " << int_arg << endl;
	cout << "char_arg : " << char_arg << endl;
	cout << "bool_arg : " << bool_arg << endl;
	
	int_arg = 100;
	char_arg = 'D';
	bool_arg = true;
}

void main_ad(void) {
	int int_var = 11;
	char char_var = 'C';
	bool bool_var = false;
	
	cout << "after calling - func_two .." << endl;
	func_b(int_var, char_var, bool_var);
		
	cout << endl;
	cout << "after return - func_tow .." << endl;
	cout << "int_var  : " << int_var << endl;
	cout << "char_var : " << char_var << endl;
	cout << "bool_var : " << bool_var << endl;
}
///////////////////////////////////////////////////////////////////////////////
int func_c(char arg) {
	return (int) arg;
}

char func_d(int arg) {
	return (char) arg;
}

void main_ae(void) {
	char char_input;
	cout << "INPUT CHARACTER    : ";
	cin >> char_input;
	
	cout << "func_c(char_input) : " << func_c(char_input) << endl;
	
	int int_input;
	cout << "INPUT INTEGER      : ";
	cin >> int_input;
	
	cout << "func_d(int_input)  : " << func_d(int_input) << endl;
}
///////////////////////////////////////////////////////////////////////////////
int int_var = 0;
char char_var = NULL;

float func_e(int &arg) {
	float float_var = 10.5;
	char_var = 'B';
		
	cout << "value from - func_e" << endl;
	cout << "int_var > &arg (global)     : " << arg << endl;
	cout << "float_var (local)           : " << float_var << endl;
	cout << "char_var (global)           : " << char_var << endl;
	cout << endl;
	
	arg = 20;
	
	return float_var;
}

void main_af(void) {
	float float_var = 0.0;
	int_var = 10;
	char_var = 'A';
	
	float_var = func_e(int_var);
	
	cout << "value from - main_af" << endl;
	cout << "int_var > &arg (global)     : " << int_var << endl;
	cout << "float_var > return (local)  : " << float_var << endl;
	cout << "char_var (global)           : " << char_var << endl;	
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "scalar variable > int, float, double, char, bool > const" << endl;
	cout << endl; main_aa(); getch(); system("cls");
	cout << "data type size > int, float, double, char, bool" << endl;
	cout << endl; main_ab(); getch(); system("cls");
	cout << "scalar variable & const > function argument" << endl;
	cout << endl; main_ac(); getch(); system("cls");
	cout << "scalar variable > function reference-argument" << endl;
	cout << endl; main_ad(); getch(); system("cls");
	cout << "scalar variable > function return and casting" << endl;
	cout << endl; main_ae(); getch(); system("cls");
	cout << "scalar variable > global and local (ref & return)" << endl;
	cout << endl; main_af(); getch(); system("cls");
	
	return 0;
}