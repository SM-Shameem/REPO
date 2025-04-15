// VS2015 : Optimized C++ (Version 19)
// Standard : 11-14-17
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
void main_aa(void) {
	char str[] = "this is a string ..... .....|";
	char strTwo[80] = "this is another string .... ....|";
	char *strThree = "this is string pointer ..... .......|";
	
	for(int i=0; i<70; i++)
		if(str[i] != NULL)
			cout << str[i];
		else {
			cout << " -> " << i << endl;
			break;
		}
	
	for(int i=0; i<70; i++)
		if(strTwo[i] != NULL)
			cout << strTwo[i];
		else {
			cout << " -> " << i << endl;
			break;
		}
	
	for(int i=0; i<70; i++, strThree++)
		if(*strThree != NULL)
			cout << *strThree;		
		else {
			cout << " -> " << i << endl;
			break;
		}
}
///////////////////////////////////////////////////////////////////////////////
void main_ab(void) {
	char charScalar = '1';
	char charArray[] = "2";
	char charArray2[5] = { NULL };
	char *charPointer = new char;
	
	cout << "charScalar : " << hex << (int)&charScalar << " : " << charScalar << endl;
	cout << "charArray  : " << hex << (int)&charArray << " : " << charArray << endl;	
	cout << endl;
	
	charPointer = &charScalar;
	cout << "charScalar : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charScalar : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charScalar : " << hex << (int)charPointer << " : " << *charPointer << endl;
	cout << endl;
	
	charPointer = charArray;
	cout << "charArray[0] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray[1] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray    : " << hex << (int)charPointer << " : " << *charPointer << endl;
	cout << endl;
	
	charArray2[0] = 'A';
	charArray2[2] = 'B';
	charPointer = charArray2;
	cout << "charArray2[0] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray2[1] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray2[2] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray2[3] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray2[4] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray2    : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << endl;
	
	charArray2[0] = '1';
	charArray2[1] = '2';
	charArray2[2] = '3';
	charArray2[3] = '4';
	charArray2[4] = '5';
	charPointer = charArray2;
	cout << "charArray2[0] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray2[1] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray2[2] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray2[3] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray2[4] : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << "charArray2    : " << hex << (int)charPointer << " : " << *charPointer << endl;
	charPointer++;
	cout << endl;
	
	cout << "as char-array index size is overflow, so condition will not get the NULL" << endl;
	for(int i=0; i<10; i++)
		if(charArray2[i] != NULL)
			cout << charArray2[i] << " ";
		else break;
	cout << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_ac(void) {
	char *stringArray[4] = { "PHYSICS", "CHEMISTRY", "MATHEMATICS", "ENGLISH" };
	cout << "stringArray : " << stringArray << endl;
	cout << endl;
		
	cout << "stringArray : " << stringArray[0] << " > " << *stringArray[0] << endl;
	cout << "stringArray : " << stringArray[1] << " > " << *stringArray[1] << endl;
	cout << "stringArray : " << stringArray[2] << " > " << *stringArray[2] << endl;
	cout << endl;
	
	cout << "stringArray : " << stringArray[3] << " > " << *stringArray[3] << endl;
	cout << "stringArray : " << stringArray[3] << " > " << *++stringArray[3] << endl;
	cout << "stringArray : " << stringArray[3] << " > " << *++stringArray[3] << endl;
	cout << "stringArray : " << stringArray[3] << " > " << *++stringArray[3] << endl;
	cout << "stringArray : " << stringArray[3] << " > " << *++stringArray[3] << endl;
	cout << "stringArray : " << stringArray[3] << " > " << *++stringArray[3] << endl;
	cout << "stringArray : " << stringArray[3] << " > " << *++stringArray[3] << endl;
	cout << endl;
	
	char string2dArray[4][12] = { "PHYSICS", "CHEMISTRY", "MATHEMATICS", "ENGLISH" }; 
	cout << "string2dArray : " << string2dArray << endl;
	cout << endl;
	
	cout << "string2dArray : " << &string2dArray[0] << " > " << string2dArray[0] << endl;
	cout << "string2dArray : " << &string2dArray[1] << " > " << string2dArray[1] << endl;
	cout << "string2dArray : " << &string2dArray[2] << " > " << string2dArray[2] << endl;
	cout << "string2dArray : " << &string2dArray[3] << " > " << string2dArray[3] << endl;
	cout << endl;
	
	cout << "string2dArray : " << &string2dArray[3][0] << " > " << *(string2dArray[3] + 0) << endl;
	cout << "string2dArray : " << &string2dArray[3][1] << " > " << *(string2dArray[3] + 1) << endl;
	cout << "string2dArray : " << &string2dArray[3][2] << " > " << *(string2dArray[3] + 2) << endl;
	cout << "string2dArray : " << &string2dArray[3][3] << " > " << *(string2dArray[3] + 3) << endl;
	
	cout << "string2dArray : " << (&string2dArray[3] + 4) << " > " << *(string2dArray[3] + 4) << endl;
	cout << "string2dArray : " << (&string2dArray[3] + 5) << " > " << *(string2dArray[3] + 5) << endl;
	cout << "string2dArray : " << (&string2dArray[3] + 6) << " > " << *(string2dArray[3] + 6) << endl;
}
///////////////////////////////////////////////////////////////////////////////
void func_da(char argArray[]) {
	cout << "argArray : " << argArray << endl;	
	
	cout << "argArray > ";
	for(int i=0; argArray[i] != NULL; i++)
		cout << *(argArray + i) << " ";
	cout << endl;
}

void func_db(char *argPointer) {
	cout << "argPointer : " << argPointer << endl;
	
	cout << "argPointer : ";
	while(*argPointer != NULL) {
		cout << *argPointer << " ";
		argPointer++;
	}
	cout << endl;
}

void func_dc(char arg) {
	char *str = &arg;
	cout << "arg : " << arg << endl;
	
	cout << "arg > ";
	for(int i=0; *str != NULL; i++) {
		cout << *str << " ";
		str++;
	}
	cout << endl;
}

void main_ad(void) {
	char charArray[] = "first string ..";
	char *charPointer = "second string ..";
	
	func_da(charArray);
	func_da(charPointer);
	cout << endl;
	
	func_db(charArray);	
	func_db(charPointer);
	cout << endl;
	
	func_dc(charArray[0]);
	func_dc(*charPointer);	
}
///////////////////////////////////////////////////////////////////////////////
char *func_ea(void) {
	char charArray[] = "first string ..";	
	return charArray;
}

char *func_eb(void) {
	char *charPointer = "second string ..";
	return charPointer;
}

void main_ae(void) {
	char *strPtr = new char;
	char strArray[20] = { NULL };
	
	strPtr = func_ea();
	cout << "func_ea : " << strPtr << endl;
	cout << "func_ea > " ;
	while(*strPtr != NULL) {
		cout << *strPtr << " ";
		strPtr++;
	}
	cout << endl;
	
	strPtr = func_eb();
	cout << "func_eb : " << strPtr << endl;
	cout << "func_eb > " ;
	while(*strPtr != NULL) {
		cout << *strPtr << " ";
		strPtr++;
	}
	cout << endl;
	
	strcpy(strArray, func_ea());
	cout << "func_ea : " << strArray << endl;
	cout << "func_ea > " ;
	for(int i=0; strArray[i] != NULL; i++)
		cout << strArray[i] << " " ;
	cout << endl;
	
	strcpy(strArray, func_eb());
	cout << "func_eb : " << strArray << endl;
	cout << "func_eb > " ;
	for(int i=0; strArray[i] != NULL; i++)
		cout << strArray[i] <<  " " ;
	cout << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_af(void) {
	char *strOne = "this is first \
					string ..";
	char *strTwo = "this is \"second\" string";
	char *strThree = "this is \\third\\ string";
	
	while(*strOne != NULL) {		
		cout << *strOne;
		strOne++;
	}
	cout << endl;
	
	while(*strTwo != NULL) {
		cout << *strTwo;
		strTwo++;
	}
	cout << endl;
	
	while(*strThree != NULL) {
		cout << *strThree;
		strThree++;
	}
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "string variable (char[] or char*) and NULL (NUL > \0) Character" << endl;
	cout << endl; main_aa(); getch(); system("cls");
	cout << "character variable and string variable" << endl;
	cout << endl; main_ab(); getch(); system("cls");
	cout << "string-array > pointer-array > 2d-array" << endl;
	cout << endl; main_ac(); getch(); system("cls");
	cout << "string as a function argument" << endl;
	cout << endl; main_ad(); getch(); system("cls");
	cout << "string as a function return-type" << endl;
	cout << endl; main_ae(); getch(); system("cls");
	cout << "string > line break > double-quote > backslash > NULL" << endl;
	cout << endl; main_af(); getch(); system("cls");
	
	return 0;
}

// difference between - 'A' and "A" 			- ok	- clear
// NULL character 								- ok	- clear
// char[] and char*								- ok
// difference between - char[] and char*		- ok
// string-array									- ok
// string variable as function parameter 
// string variable as function return-type
// use of double quotation or backslash 
// some string function 
