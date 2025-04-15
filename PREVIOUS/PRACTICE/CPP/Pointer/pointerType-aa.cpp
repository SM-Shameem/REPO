// VS2015 : Optimized (Version 19)
// Standard : 11-14-17
#include <iostream>
#include <conio.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
void main_aa(void) {		
	int var = 10, *ptr_one = &var;
	int array[5] = { 11, 22, 33 }, 
		*ptr_two = array;	

	cout << "var     : " << var << " -> " << &var << endl;
	cout << "ptr_one : " << *ptr_one << " -> " << ptr_one << endl;
	cout << endl;
	
	cout << "array   : " << array << " -> " << &array << endl;
	cout << "ptr_two : " << *ptr_two << " -> " << ptr_two << endl;
	cout << endl;
		
	cout << "ptr_tow  : " << *ptr_two << " -> " << ptr_two << " :: " <<
			"array[0] : " << array[0] << " -> " << &array[0] << endl;
	ptr_two++;
	cout << "ptr_tow  : " << *ptr_two << " -> " << ptr_two << " :: " <<
			"array[1] : " << array[1] << " -> " << &array[1] << endl;
	ptr_two++;
	cout << "ptr_tow  : " << *ptr_two << " -> " << ptr_two << " :: " <<
			"array[2] : " << array[2] << " -> " << &array[2] << endl;	
	cout << endl;
			
	////////////////////////////////////////////////////////////////////
	char* str_one, charVar = 'A';
	char*str_two, charArray[3] = { 'a', 'b', 'c' };
	char *str_three = "string literal ...";		// only string literal is assinable to pointer
	
	str_one = &charVar;
	str_two = charArray;
		
	cout << "str_one   : " << &str_one << " :: " << *str_one << " -> " << str_one << endl;
	cout << "str_two   : " << &str_two << " :: " << *str_two << " -> " << str_two << endl;
	cout << "str_two   : " << &str_two << " :: " << *str_two << " -> " << str_two++ << endl;
	cout << "str_two   : " << &str_two << " :: " << *str_two << " -> " << str_two++ << endl;	
	cout << "str_three : " << &str_three << " :: " << *str_three << " -> " << str_three << endl;	
	cout << endl;
	
	////////////////////////////////////////////////////////////////////
	float * fpOne, 					// unallocated pointer
		  * fpTwo = new float, 		// allocated pointer (required)
		  * fpThree = NULL;			// assigning literall and constant - error

	cout << "fpOne   : " << &fpOne << " -> " << fpOne << " -> " << (* fpOne) << endl;
	cout << "fpTwo   : " << &fpTwo << " -> " << fpTwo << " -> " << * fpTwo << endl;
	//cout << "fpThree : " << &fpThree << " -> " << fpThree << " -> " << *fpThree << endl;
	
	//fpOne = (float*)10;			// assigning literal - error (can compile but debug error)
	cout << "fpOne   : " << &fpOne << " -> " << fpOne << " -> " << *fpOne << endl;
	cout << "fpTwo   : " << &fpTwo << " -> " << fpTwo << " -> " << *fpTwo << endl;
	cout << endl;
	
	////////////////////////////////////////////////////////////////////
	double * dpOne, * dpTwo, doubleVar = 120.50, * dpThree=&doubleVar;
	dpOne = &doubleVar;		// scalar assigning to pointer
	dpTwo = dpOne;			// pointer assigning to pointer 
	
	cout << "dpOne   : " << &dpOne << " -> " << dpOne << " -> " << (*dpOne)++ << endl;
	cout << "dpTwo   : " << &dpTwo << " -> " << dpTwo << " -> " << *dpTwo++ << endl;	
	cout << "dpThree : " << &dpThree << " -> " << dpThree << " -> " << *dpThree << endl;	
	
	cout << endl;
	cout << "dpTwo   : " << &dpTwo << " -> " << dpTwo << " -> " << *dpTwo << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_ab(void) {	
	int* intPtr = new int; 
	
	int intScalar = 11;
	intPtr = &intScalar;
	cout << "intScalar     : " << &intPtr << " : " << intPtr << " -> " << *intPtr << endl;
	
	// array name is an address - no need to use (&) operator
	int intArray[3] = { 10, 20, 30 };	
	intPtr = intArray;			
	cout << "intArray[0]   : " << &intPtr << " : " << intPtr << " -> " << *intPtr << endl; intPtr++;
	cout << "intArray[1]   : " << &intPtr << " : " << intPtr << " -> " << *intPtr << endl; intPtr++;
	cout << "intArray[2]   : " << &intPtr << " : " << intPtr << " -> " << *intPtr << endl;
	
	////////////////////////////////////////////////////////////////////
	// char-pointer - is string - string literal is assignable and accessable 
	// char-pointer - with (*) indirect operator show the character - 
	// else show the string - this increment (++) operator with (name) - will 
	// show next character of the string - like array do 
	char* charPtr = new char;
	charPtr = "string";	
	cout << "charPtr : " << &charPtr << " : " << charPtr << " -> " << *charPtr << endl;	charPtr++;
	cout << "charPtr : " << &charPtr << " : " << charPtr << " -> " << *charPtr << endl;	charPtr++;	
	cout << "charPtr : " << &charPtr << " : " << charPtr << " -> " << *charPtr << endl;	charPtr++;
	cout << "charPtr : " << &charPtr << " : " << charPtr << " -> " << *charPtr << endl;	charPtr++;
		
	char charArray[5] = { "abcd" };
	charPtr = charArray;
	cout << endl;
	cout << "charPtr : " << &charPtr << " : " << charPtr << " -> " << *charPtr << endl;	charPtr++;
	cout << "charPtr : " << &charPtr << " : " << charPtr << " -> " << *charPtr << endl;	charPtr++;
	cout << "charPtr : " << &charPtr << " : " << charPtr << " -> " << *charPtr << endl;	charPtr++;
	cout << "charPtr : " << &charPtr << " : " << charPtr << " -> " << *charPtr << endl;	charPtr++;
		
	charArray[0] = 'A';
	charArray[1] = 'B';
	charArray[2] = 'C';
	charPtr = charArray;
	cout << endl;
	cout << "charPtr : " << &charPtr << " : " << charPtr << " -> " << *charPtr << endl;	charPtr++;
	cout << "charPtr : " << &charPtr << " : " << charPtr << " -> " << *charPtr << endl;	charPtr++;
	cout << "charPtr : " << &charPtr << " : " << charPtr << " -> " << *charPtr << endl;	charPtr++;
	cout << endl;
	
	////////////////////////////////////////////////////////////////////
	// pointer - assigning to pointer - and here (&) operator is forbidden	
	int* ptr = new int;
	ptr = intPtr;				
	cout << "intPtr       : " << &intPtr << " : " << intPtr << " -> " << *intPtr << endl;
	cout << "ptr (intPtr) : " << &ptr << " : " << ptr << " -> " << *ptr << endl;		
	
	// NULL-constant-literal - direct assignable but (data) not accessable 
	intPtr = NULL;
	cout << "intPtr(NULL) : " << &intPtr << " : " << intPtr << " -> " << intPtr << endl;		
	cout << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void main_ac(void) {
	int *intPtr;
	
	// scalar-const - assignable with (casting) and accessable 
	const int intConst = 111;
	intPtr = (int*)&intConst;	
	cout << "intConst      : " << &intPtr << " : " << intPtr << " -> " << *intPtr << endl;
	
	// array name is an address - no need to use (&) operator
	int const constArray[3] = { 10, 20, 30 };
	intPtr = (int*)constArray;	
	cout << "constArray[0] : " << &intPtr << " : " << intPtr << " -> " << *intPtr << endl; intPtr++;
	cout << "constArray[1] : " << &intPtr << " : " << intPtr << " -> " << *intPtr << endl; intPtr++;
	cout << "constArray[2] : " << &intPtr << " : " << intPtr << " -> " << *intPtr << endl;
	cout << endl;
	
	////////////////////////////////////////////////////////////////////
	//  define - assignable with (casting) but (data) not accessable
	#define defConst 6
	intPtr = (int*)defConst;	
	cout << "defConst     : " << &intPtr << " : " << intPtr << " -> " << intPtr << endl;		
	
	//  literal - assignable with (casting) but (data) not accessable
	intPtr = (int*)11;				
	cout << "intPtr(INT)  : " << &intPtr << " : " << intPtr << " -> " << intPtr << endl;		
	
	// character literal - assignable with (casting) but its (address and data) not accessable	
	char *charPtr = (char*)'A';
	//cout << "charPtr : " << charPtr << " -> " << charPtr << endl;			
}
///////////////////////////////////////////////////////////////////////////////
void main_ad(void) {
	unsigned short ushortArray[3] = { 11, 22, 33 };
	long *longPointer = new long;
	
	longPointer = (long*)ushortArray;
	
	cout << "ushortArray[0] : " << &ushortArray[0] << " -> " << ushortArray[0] << endl;
	cout << "ushortArray[1] : " << &ushortArray[1] << " -> " << ushortArray[1] << endl;
	cout << "ushortArray[2] : " << &ushortArray[2] << " -> " << ushortArray[2] << endl;
	cout << endl;
	
	cout << "longPointer : " << longPointer << " -> " << *longPointer << endl; longPointer++;
	cout << "longPointer : " << longPointer << " -> " << *longPointer << endl; longPointer++;
	cout << "longPointer : " << longPointer << " -> " << *longPointer << endl; longPointer++;
	cout << "longPointer : " << longPointer << " -> " << *longPointer << endl; longPointer++;
	cout << endl;
	
	longPointer = (long*)ushortArray;
	
	cout << "longPointer : " << longPointer << " -> " << (short)*longPointer << endl; longPointer++;
	cout << "longPointer : " << longPointer << " -> " << (short)*longPointer << endl; longPointer++;
	cout << "longPointer : " << longPointer << " -> " << (short)*longPointer << endl; longPointer++;
	cout << "longPointer : " << longPointer << " -> " << (short)*longPointer << endl; longPointer++;	
}
///////////////////////////////////////////////////////////////////////////////
void main_ae(void) {
	unsigned short intArray[3] = { 101, 102, 103 };
	char *charPointer = new char;
	
	cout << "intArray[0] : " << &intArray[0] << " -> " << intArray[0] << endl;
	cout << "intArray[1] : " << &intArray[1] << " -> " << intArray[1] << endl;
	cout << "intArray[2] : " << &intArray[2] << " -> " << intArray[2] << endl;
	cout << endl;
	
	charPointer = (char*)intArray;
	
	cout << "charPointer : " << charPointer << " -> " << *charPointer << endl; charPointer++;
	cout << "charPointer : " << charPointer << " -> " << *charPointer << endl; charPointer++;
	cout << "charPointer : " << charPointer << " -> " << *charPointer << endl; charPointer++;
	cout << "charPointer : " << charPointer << " -> " << *charPointer << endl; charPointer++;
	cout << "charPointer : " << charPointer << " -> " << *charPointer << endl; charPointer++;
	cout << "charPointer : " << charPointer << " -> " << *charPointer << endl; charPointer++;
	cout << endl;
	
	charPointer = (char*)intArray;
	
	cout << "charPointer : " << charPointer << " -> " << (int)*charPointer << endl; charPointer++;
	cout << "charPointer : " << charPointer << " -> " << (int)*charPointer << endl; charPointer++;
	cout << "charPointer : " << charPointer << " -> " << (int)*charPointer << endl; charPointer++;
	cout << "charPointer : " << charPointer << " -> " << (int)*charPointer << endl; charPointer++;
	cout << "charPointer : " << charPointer << " -> " << (int)*charPointer << endl; charPointer++;
	cout << "charPointer : " << charPointer << " -> " << (int)*charPointer << endl; charPointer++;
	cout << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void main_af(void) {
	unsigned char ucharArray[3] = { 'A', 'B', 'C' };
	unsigned int *uintPtr = new unsigned int;
	unsigned short *ushortPtr = new unsigned short;
	
	cout << "ucharArray[0] : " << &ucharArray[0] << " -> " << ucharArray[0] << endl;
	cout << "ucharArray[1] : " << &ucharArray[1] << " -> " << ucharArray[1] << endl;
	cout << "ucharArray[2] : " << &ucharArray[2] << " -> " << ucharArray[2] << endl;
	cout << endl;
	
	uintPtr = (unsigned int*)ucharArray;
	
	cout << "uintPtr : " << uintPtr << " -> " << *uintPtr << endl; uintPtr++;
	cout << "uintPtr : " << uintPtr << " -> " << *uintPtr << endl; uintPtr++;
	cout << "uintPtr : " << uintPtr << " -> " << *uintPtr << endl; uintPtr++;
	cout << "uintPtr : " << uintPtr << " -> " << *uintPtr << endl; uintPtr++;
	cout << "uintPtr : " << uintPtr << " -> " << *uintPtr << endl; uintPtr++;
	cout << endl;
	
	uintPtr = (unsigned int*)ucharArray;
	
	cout << "uintPtr : " << uintPtr << " -> " << (char)*uintPtr << endl; uintPtr++;
	cout << "uintPtr : " << uintPtr << " -> " << (char)*uintPtr << endl; uintPtr++;
	cout << "uintPtr : " << uintPtr << " -> " << (char)*uintPtr << endl; uintPtr++;
	cout << "uintPtr : " << uintPtr << " -> " << (char)*uintPtr << endl; uintPtr++;
	cout << "uintPtr : " << uintPtr << " -> " << (char)*uintPtr << endl; uintPtr++;
	cout << endl;
	
	ushortPtr = (unsigned short*)ucharArray;
	
	cout << "ushortPtr : " << ushortPtr << " -> " << *ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << *ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << *ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << *ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << *ushortPtr << endl; ushortPtr++;
	cout << endl;
	
	ushortPtr = (unsigned short*)ucharArray;
	
	cout << "ushortPtr : " << ushortPtr << " -> " << (char)*ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << (char)*ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << (char)*ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << (char)*ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << (char)*ushortPtr << endl; ushortPtr++;
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "declaration of pointer" << endl;
	cout << endl; main_aa(); getch(); system("cls");
	cout << "assigning (scalar, array, pointer, & NULL)" << endl;
	cout << endl; main_ab(); getch(); system("cls");
	cout << "assigning (const, const-array, and literal)" << endl;
	cout << endl; main_ac(); getch(); system("cls");
	cout << "pointer > modifier and casting > short - long" << endl;
	cout << endl; main_ad(); getch(); system("cls");
	cout << "pointer > modifier and casting > ushort - char" << endl;
	cout << endl; main_ae(); getch(); system("cls");
	cout << "pointer > modifier and casting > char - short - int" << endl;
	cout << endl; main_af(); getch(); system("cls");
	
	return 0;
}