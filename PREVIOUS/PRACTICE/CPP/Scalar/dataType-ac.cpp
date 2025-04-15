// MSVS 2015 - optimizing (version 19)
// Standard 11-14-17

#include <iostream>
#include <conio.h> 
using namespace std;

#define CONST_global 'string'
const char const_global = 'A';
///////////////////////////////////////////////////////////////////////////////
void func_ca(void) {	
	const char const_global = 'B';
	#define CONST_global "string-1"
		
	cout << "func_ca (declared) - const_global : " << const_global << endl;
	cout << "func_ca (declared) - CONST_global : " << CONST_global << endl;	
			
	cout << '\n' << "\n new-line" << endl;
	cout << '\t' << "\t horizontal tab" << endl;	
	cout << "NULL-Character." << endl;
	cout << "\0 NULL-Character.." << endl;	
	cout << '\0' << "NULL-Character..." << endl;	
	cout << "this is \
	'single quote- \
	without backslash' \
	and single-slash" << endl;
	cout << "this is \'single quote\'" << endl;
	cout << "this is \"double_quote\"" << endl;
	cout << "this is \\ backslash" << endl;
	cout << "decimal     - " << dec << 989 << endl;
	cout << "octal       - " << oct << 989 << endl;
	cout << "hexadecimal - " << hex << 989 << endl;	
}

void main_ca(void) {	
	cout << "NULL - literal           : " << NULL << endl;
	cout << "true - boolean literal   : " << true << endl;
	cout << "false - boolean literal  : " << false << endl;
	cout << "character literal        : " << 'A' << endl; 
	cout << "symbol literal           : " << '@' << endl;
	cout << "numeraic literal         : " << 11 << endl;
	cout << "numeraic decimal literal : " << 11.22 << endl;
	cout << endl;
	/////////////////////////////////////////////////////////
	const int const_local = 10;
	#define CONST_local 20;
	
	cout << "main_ca            - const_local  : " << const_local << endl; 
	cout << "main_ca            - CONST_local  : " << CONST_local; 
	cout << endl;
	cout << "main_ca            - const_global : " << const_global << endl; 
	cout << "main_ca (declared) - CONST_global : " << CONST_global; 
	cout << endl;
	
	func_ca();
}
///////////////////////////////////////////////////////////////////////////////
void main_cb(void) {	
	const char const_array[5] = { 'A', 'B', 'C', 'D', 'E' };
	char const *const_ptr = const_array;
	
	cout << "char array > const pointer" << endl;
	cout << "char_const_array    : " << hex << (int)&const_array	<< endl;	
	cout << endl;
		
	cout << "const array > address changing by > const pointer" << endl;
	for(int i=0; i<5; i++) {
		cout << "char_const_array[" << i << "] : " << hex << (int)const_ptr << 
				" -> " << *const_ptr << endl;
		const_ptr++;
	}
	
	cout << endl; 	
	/////////////////////////////////////////////////////////////////
	char char_array[3] = { 'a', 'b', 'c' };
	char *const const_ptr_value = char_array; 
	//const_ptr_value = char_array;
	
	cout << "array > value changin by > const pointer" << endl;
	cout << "char_array[0] : " << hex << (int)&char_array[0] << 
			" -> " << char_array[0] << endl;
	cout << "char_array[1] : " << hex << (int)&char_array[1] << 
			" -> " << char_array[1] << endl;
	
	++(*const_ptr_value);
	cout << "char_array[0] : " << (int)const_ptr_value << 
			" -> " << *const_ptr_value << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void main_cc(void) {
	int int_array[3] = { 11, 22, 33 };
	int *const int_const_ptr = new int;	// initialization is required (new / variable)
	
	cout << "int type is affected by - above (int casting) statements" << endl;	
	cout << "int_array[0] : " << &int_array[0] << " -> " << int_array[0] << endl;
	cout << "int_array[1] : " << &int_array[1] << " -> " << int_array[1] << endl;
	cout << endl;
	
	float float_array[3] = { 10.11, 20.22, 30.33 };
	float *const const_ptr_address = float_array;	// initialized by variable or NEW
	float const *const_ptr_value;	
	const_ptr_value = float_array;
	
	cout << "array > const pointer ...." << endl;
	cout << "float_array[0] : " << &float_array[0] << " -> " << float_array[0] << endl;
	cout << "float_array[1] : " << &float_array[1] << " -> " << float_array[1] << endl;
	cout << "float_array[2] : " << &float_array[2] << " -> " << float_array[2] << endl;
	cout << endl;
	
	cout << "float array > address and value changing by > const pointer" << endl;
	for(int i=0; i<5; i++) {		
		cout << "float_array : " << const_ptr_value << 
				" -> " << *const_ptr_value << endl;
		(*const_ptr_address)++;				
		if(i > 1) const_ptr_value++;
	}	
	cout << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void main_cd(void) {
	char const *str = "string constant";
	char const *ptr_const_char;
	
	ptr_const_char = &const_global;	
	cout << "string constant : " << ptr_const_char << " -> " << *ptr_const_char << endl;
	ptr_const_char = CONST_global;
	cout << "string constant : " << ptr_const_char << " -> " << ptr_const_char << endl;
	ptr_const_char = str;
	cout << "string constant : " << ptr_const_char << " -> " << ptr_const_char << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_ce(void) {
	float int_index[3] = { 11, 22, 33 } ;
	float *const address = int_index;		// initialization is required (by - new / var)
	float const *value;
		
	cout << "float_index : " << address << " -> " << *address << endl;
	++(*address);
	cout << "float_index : " << address << " -> " << *address << endl;
	cout << "float_index : " << address << " -> " << ++(*address )<< endl;
	cout << "float_index : " << address << " -> " << (*address)++ << endl;
	cout << "float_index : " << address << " -> " << (*address)++ << endl;
	cout << endl;
	
	value = int_index;
	cout << "float_index : " << value << " -> " << *value << endl;
	++value;
	cout << "float_index : " << value << " -> " << *value << endl;
	value++;
	cout << "float_index : " << value << " -> " << *value << endl;	
	cout << endl; 
	
	
	cout << "float_index : " << address << " -> " << *address << endl;
	cout << "float_index : " << value << " -> " << *value << endl;
	*address = 50;
	value--;	
	cout << "float_index : " << address << " -> " << *address << endl;
	cout << "float_index : " << value << " -> " << *value << endl;
	
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "literal and constant" << endl;
	cout << endl; main_ca(); getch(); system("cls");
	cout << "char const (address constant / value constant)" << endl;
	cout << endl; main_cb(); getch(); system("cls");
	cout << "int-float const (address constant / value constant)" << endl;
	cout << endl; main_cc(); getch(); system("cls");
	cout << "global constant & string constant > const pointer" << endl;
	cout << endl; main_cd(); getch(); system("cls");
	cout << "const pointer > value and address" << endl;
	cout << endl; main_ce(); getch(); system("cls");
	
	return 0;
}

// 01. constant and string constant
// 02. literal and backslash character 