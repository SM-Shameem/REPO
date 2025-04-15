// VS2015 : Optimized (Version 19)
// Standard : 11-14-17
#include <iostream>
#include <conio.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
void main_ba(void) {
	int intArray[3] = { 10, 20, 30 };
	int const constArray[3] = { 100, 200, 300 };
	int *intPtr = new int, *int_ptr = NULL;
	
	/////////////////////////////////////////////////////////
	intPtr = intArray;	
	cout << "intPtr = intArray >> intPtr++ << (*intPtr)++ >> ++intPtr" << endl;
	cout << "intPtr : " << &intPtr << " -> " << intPtr << " -> " << *intPtr << endl; intPtr++;
	cout << "intPtr : " << &intPtr << " -> " << intPtr << " -> " << *intPtr << endl; (*intPtr)++;	
	cout << "intPtr : " << &intPtr << " -> " << intPtr << " -> " << *intPtr << endl; ++intPtr;
	cout << "intPtr : " << &intPtr << " -> " << intPtr << " -> " << *intPtr << endl;	
	cout << endl;
	
	/////////////////////////////////////////////////////////
	int_ptr = (int*)constArray;
	cout << "int_ptr = constArray >> int_ptr++ << (*int_ptr)++ >> ++int_ptr" << endl;	
	cout << "int_ptr : " << &int_ptr << " -> " << int_ptr << " -> " << *int_ptr << endl; int_ptr++;
	cout << "int_ptr : " << &int_ptr << " -> " << int_ptr << " -> " << *int_ptr << endl; (*int_ptr)++;	
	cout << "int_ptr : " << &int_ptr << " -> " << int_ptr << " -> " << *int_ptr << endl; ++int_ptr;
	cout << "int_ptr : " << &int_ptr << " -> " << int_ptr << " -> " << *int_ptr << endl;
	cout << "constArray[0] : " << &constArray[0] << " -> " << constArray[0] << endl;
	cout << "constArray[1] : " << &constArray[1] << " -> " << constArray[1] << endl;
	cout << "constArray[2] : " << &constArray[2] << " -> " << constArray[2] << endl;
	cout << endl; 
	
	/////////////////////////////////////////////////////////		
	intPtr = int_ptr;	
	intArray[0] = *intPtr;
	
	cout << "intPtr = int_ptr >> intArray[0] = *intPtr" << endl;
	cout << "intArray[0]   : " << &intArray[0] << " -> " << intArray[0] << endl;
	cout << "intArray[1]   : " << &intArray[1] << " -> " << intArray[1] << endl;
	cout << "intArray[2]   : " << &intArray[2] << " -> " << intArray[2] << endl;
	cout << "intPtr        : " << &intPtr << " -> " << intPtr << " -> " << *intPtr << endl;
	cout << "int_ptr       : " << &int_ptr << " -> " << int_ptr << " -> " << *int_ptr << endl;
	cout << endl;
	
	*intPtr = intArray[1];	
	//constArray[1] = *int_ptr;
	cout << "*intPtr = intArray[1] >> (constArray[1] = *int_ptr) - error (can't assign)" << endl;
	cout << "constArray[0] : " << &constArray[0] << " -> " << constArray[0] << endl;
	cout << "constArray[1] : " << &constArray[1] << " -> " << constArray[1] << endl;
	cout << "constArray[2] : " << &constArray[2] << " -> " << constArray[2] << endl;
	cout << "int_ptr       : " << &int_ptr << " -> " << int_ptr << " -> " << *int_ptr << endl;
	cout << "intPtr        : " << &intPtr << " -> " << intPtr << " -> " << *intPtr << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void main_bb(void) {
	char const ccArray[3] = { 'a', 'b', 'c' };	
	char *charPtr = new char;	
	
	charPtr = (char*)ccArray;		
	charPtr = charPtr + 2; *charPtr = 'z';	
	cout << "ccArray[0] : " << ccArray << " -> " << ccArray[0] << endl;		
	cout << "ccArray[1] : " << ccArray << " -> " << ccArray[1] << endl;		
	cout << "ccArray[2] : " << ccArray << " -> " << ccArray[2] << endl;		
	cout << endl;
	
	///////////////////////////////////////////////////////////////////
	
	char const scArray[10] = { "string" }; 
	charPtr = (char*)scArray;
	charPtr++; *charPtr = 'a';
	cout << "scArray[0] : " << scArray << " -> " << scArray[0] << endl;		
	charPtr = charPtr + 1; *charPtr = 'b';
	cout << "scArray[1] : " << scArray << " -> " << scArray[1] << endl;		
	charPtr = charPtr + 1; *charPtr = 'c';
	cout << "scArray[2] : " << scArray << " -> " << scArray[2] << endl;		
	charPtr++; *charPtr = ' ';
	cout << "scArray[3] : " << scArray << " -> " << scArray[3] << endl;
	cout << endl;

	// through pointer - value of const array - can change (int and char)
	// through pointer - value of const array - can change (string) - one by one (with character)	
	
	char const ccVar = 'A';
		
	charPtr = (char*)&ccVar;		
	*charPtr = 'B';
	cout << "ccVar   : " << &ccVar << " -> " << ccVar << endl;
	cout << "charPtr : " << charPtr << " -> " << *charPtr << endl;
	cout << endl;
	
	// through pointer - value of const scalar - can't change 
	
	int const icVar = 111;
	int *intPtr = new int;
	
	intPtr = (int*)&icVar;	
	*intPtr = 222;
	cout << "icVar   : " << &icVar << " -> " << icVar << endl;
	cout << "intPtr  : " << intPtr << " -> " << *intPtr << endl;
	cout << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_bc(void) {
	int *intPtr_x = new int, *intPtr_y = new int;	// allocation is required using (NEW)
	int *intPtr_z = new int;
	
	*intPtr_x = 11;
	*intPtr_y = 22;
	*intPtr_z = *intPtr_x * *intPtr_y;	
	cout << "*intPtr_x : " << *intPtr_x << endl;	
	cout << "*intPtr_y : " << *intPtr_y << endl;	
	cout << "*intPtr_z : " << *intPtr_z << endl;
	cout << endl;
	
	/////////////////////////////////////////////////////	
	int x = 10;	
	int *intPtr = &x;	
	
	cout << "x         : " << x << endl;
	cout << "&x        : " << &x << endl;
	cout << "intPtr    : " << intPtr << endl;
	cout << "&intPtr   : " << &intPtr << endl;
	cout << "*intPtr   : " << *intPtr << endl;
	cout << "*&intPtr  : " << *&intPtr << endl;
	cout << "**&intPtr : " << **&intPtr << endl;
	cout << endl;
	
	intPtr = intPtr_z;	
	cout << "intPtr_z  : " << intPtr_z << endl;
	cout << "&intPtr_z : " << &intPtr_z << endl;
	cout << "*intPtr_z : " << *intPtr_z << endl;
	cout << "intPtr    : " << intPtr << endl;
	cout << "&intPtr   : " << &intPtr << endl;
	cout << "*intPtr   : " << *intPtr << endl;
	cout << "*&intPtr  : " << *&intPtr << endl;
	cout << "**&intPtr : " << **&intPtr << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_bd(void) {
	int intVar = NULL;
	int intArray[5] = { NULL };
	int *intPtr = new int;
	
	intPtr = &intVar;
	for(int i=0; i<5; i++) {
		cout << "get intVar : ";
		cin >> intVar;
		intArray[i] = *intPtr;
	}
	
	intPtr = intArray;
	for(int i=0; i<5; i++) {
		cout << "intArray[" << i << "] : " << &intArray[i] << " -> " << intPtr <<
				" -> " << *intPtr << endl;
		intPtr = intPtr + 1;
	}
	cout << endl;
	
	//////////////////////////////////////////////////////
	*intPtr--;
	cout << "*intPtr    : " << *intPtr 		<< " -> " << intPtr 	<< endl;
	cout << "*intPtr--  : " << *intPtr--	<< " -> " << intPtr 	<< endl;
	cout << "*intPtr    : " << *intPtr 		<< " -> " << intPtr 	<< endl;
	cout << "intPtr--   : " << *intPtr	 	<< " -> " << intPtr-- 	<< endl;
	cout << "*intPtr    : " << *intPtr		<< " -> " << intPtr 	<< endl; 
	cout << "*--intPtr  : " << *--intPtr	<< " -> " << intPtr 	<< endl;
	cout << "*intPtr    : " << *intPtr 		<< " -> " << intPtr 	<< endl;
	cout << "--intPtr   : " << *intPtr		<< " -> " << --intPtr 	<< endl;
	cout << "*intPtr    : " << *intPtr 		<< " -> " << intPtr 	<< endl;
	cout << "--*intPtr  : " << --*intPtr	<< " -> " << intPtr 	<< endl;
	cout << "*intPtr    : " << *intPtr 		<< " -> " << intPtr 	<< endl;	
	cout << "(intPtr+=1): " << *intPtr 		<< " -> " << (intPtr+=1)<< endl; 
	cout << "*intPtr    : " << *intPtr 		<< " -> " << intPtr 	<< endl; 
	cout << "intPtr + 1 : " << *intPtr 		<< " -> " << intPtr + 1	<< endl; intPtr = intPtr + 1;
	cout << "*intPtr    : " << *intPtr 		<< " -> " << intPtr 	<< endl;
	cout << "1 + intPtr : " << *intPtr 		<< " -> " << 1 + intPtr	<< endl; intPtr = 1 + intPtr;
	cout << "*intPtr    : " << *intPtr 		<< " -> " << intPtr 	<< endl;
	
}
///////////////////////////////////////////////////////////////////////////////
void main_be(void) {
	int intArray[3] = { 11, 111, 1111 };
	char *charPointer = new char;
	
	charPointer = (char*)intArray;
	
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++;
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++; 
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++; 
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++; 
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++; 
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++; 
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++; 
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++; 
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++; 
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++; 
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++; 
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++; 	
	cout << endl;
	
	charPointer = (char*)intArray;
	*charPointer = 10;
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++;
	*charPointer = 20;
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++;
	*charPointer = 30;
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++;
	*charPointer = 40;
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++;
	*charPointer = 50;
	cout << "charPointer : " << (int)charPointer << " -> " << (int)*charPointer << endl; charPointer++;		
	cout << endl;
	
	cout << "intArray[0] : " << &intArray[0] << " -> " << intArray[0] << endl;
	cout << "intArray[1] : " << &intArray[1] << " -> " << intArray[1] << endl;
	cout << "intArray[2] : " << &intArray[2] << " -> " << intArray[2] << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void main_bf(void) {
	char charArray[3] = { 'a', 'b', 'c' };
	unsigned short *ushortPtr = new unsigned short;
	
	cout << "charArray[0] : " << charArray[0] << " -> " << charArray[0] << endl;
	cout << "charArray[1] : " << charArray[1] << " -> " << charArray[1] << endl;
	cout << "charArray[2] : " << charArray[2] << " -> " << charArray[2] << endl;
	cout << endl;
	
	ushortPtr = (unsigned short*)charArray;
		
	cout << "ushortPtr : " << ushortPtr << " -> " << *ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << *ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << *ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << *ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << *ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << *ushortPtr << endl; ushortPtr++;
	cout << endl;
	
	ushortPtr = (unsigned short*)charArray;
	
	cout << "ushortPtr : " << ushortPtr << " -> " << (char)*ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << (char)*ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << (char)*ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << (char)*ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << (char)*ushortPtr << endl; ushortPtr++;
	cout << "ushortPtr : " << ushortPtr << " -> " << (char)*ushortPtr << endl; ushortPtr++;
}
///////////////////////////////////////////////////////////////////////////////
void main_bg(void) {
	int intArray[3] = { 1, 2, 3 };
	float *floatPtr = new float;
	
	floatPtr = (float*)intArray;
	
	cout << "floatPtr++ : " << *floatPtr << " -> " << floatPtr << endl; floatPtr++;
	cout << "floatPtr++ : " << *floatPtr << " -> " << floatPtr << endl; floatPtr++;
	cout << "floatPtr++ : " << *floatPtr << " -> " << floatPtr << endl; floatPtr++;
	cout << "floatPtr++ : " << *floatPtr << " -> " << floatPtr << endl; floatPtr++;
	cout << "floatPtr++ : " << *floatPtr << " -> " << floatPtr << endl; floatPtr++;
	cout << "floatPtr++ : " << *floatPtr << " -> " << floatPtr << endl; floatPtr++;
	cout << "floatPtr++ : " << *floatPtr << " -> " << floatPtr << endl; floatPtr++;
	cout << "floatPtr++ : " << *floatPtr << " -> " << floatPtr << endl; floatPtr++;
	cout << "floatPtr++ : " << *floatPtr << " -> " << floatPtr << endl; floatPtr++;
	cout << "floatPtr++ : " << *floatPtr << " -> " << floatPtr << endl; floatPtr++;
	cout << "floatPtr++ : " << *floatPtr << " -> " << floatPtr << endl; floatPtr++;
	cout << endl;
	
	float floatArray[3] = { 10.11, 20.22, 30.33 };
	int *intPointer = new int;
	
	intPointer = (int*)floatArray;
	
	cout << "intPointer++ : " << *intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << *intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << *intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << *intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << *intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << *intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << *intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << *intPointer << " -> " << intPointer << endl; intPointer++;		
	cout << endl;
	
	intPointer = (int*)floatArray;
	
	cout << "intPointer++ : " << (int)*intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << (int)*intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << (int)*intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << (int)*intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << (int)*intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << (int)*intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << (int)*intPointer << " -> " << intPointer << endl; intPointer++;
	cout << "intPointer++ : " << (int)*intPointer << " -> " << intPointer << endl; intPointer++;
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "pointed data > int-array & int-const-array" << endl;
	cout << endl; main_ba(); getch(); system("cls");
	cout << "pointed data > const-string-array & const" << endl;
	cout << endl; main_bb(); getch(); system("cls");
	cout << "pointer and arithmetic expression - 1" << endl;
	cout << endl; main_bc(); getch(); system("cls");
	cout << "pointer and arithmetic expression - 2" << endl;
	cout << endl; main_bd(); getch(); system("cls");
	cout << "pointer and casting > int - char" << endl;
	cout << endl; main_be(); getch(); system("cls"); 
	cout << "pointer and casting > char - int" << endl;
	cout << endl; main_bf(); getch(); system("cls"); 
	cout << "pointer and casting > int - float" << endl;
	cout << endl; main_bg(); getch(); system("cls"); 
		
	return 0;
}