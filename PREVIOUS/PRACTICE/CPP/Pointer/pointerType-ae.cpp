// VS2015 : Optimized C++ (Version 19)
// Standard : 11-14-17
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h> 
using namespace std;
///////////////////////////////////////////////////////////////////////////////
void main_ea(void) {
	int *intPointer = new int;
	int **int2Pointer = NULL;
	
	*intPointer = 10;
	int2Pointer = &intPointer;
	cout << "int2Pointer : " << &int2Pointer << " : " << int2Pointer << " : " << 
			*int2Pointer << " : " << **int2Pointer << endl;
}
///////////////////////////////////////////////////////////////////////////////
void func_ba(int arg) {
	cout << "address of (arg)             : " << &arg << endl;
	cout << "value of (arg)               : " << arg << endl;
	
	arg = arg * arg;
	cout << "value of (arg * arg)         : " << arg << endl;
	cout << endl;
}

void func_bb(int *ptrArg) {
	cout << "address of (ptrArg)          : " << &ptrArg << endl;
	cout << "value of (ptrArg)            : " << ptrArg << endl;
	cout << "value of (*ptrArg)           : " << *ptrArg << endl;
	
	*ptrArg = *ptrArg * *ptrArg;
	cout << "value of (*ptrArg * *ptrArg) : " << *ptrArg << endl;	
	cout << endl;
}

void main_eb(void) {
	int var = 100;
	
	cout << "call by value .............." << endl;
	func_ba(var);	
	cout << "address of (var)             : " << &var << endl;
	cout << "value of (var)               : " << var << endl;
	cout << endl;
	
	cout << "call by reference .........." << endl;
	func_bb(&var);	
	cout << "value of (var)               : " << var << endl;
}
///////////////////////////////////////////////////////////////////////////////
void func_ca(int **ptr2Arg) {	
	cout << "value of (ptr2Arg)       : " << ptr2Arg << endl;
	cout << "value of (*ptr2Arg)      : " << *ptr2Arg << endl;
	cout << "value of (**ptr2Arg)     : " << **ptr2Arg << endl;
	
	**ptr2Arg = 220;
	cout << "value of (**ptr2Arg)     : " << **ptr2Arg << endl;
	cout << endl;
}

void func_cb(int ***ptr3Arg) {
	cout << "value of (ptr3Arg)       : " << ptr3Arg << endl;
	cout << "value of (*ptr3Arg)      : " << *ptr3Arg << endl;
	cout << "value of (**ptr3Arg)     : " << **ptr3Arg << endl;
	cout << "value of (***ptr3Arg)    : " << ***ptr3Arg << endl;
	
	***ptr3Arg = 330;
	cout << "value of (***ptr3Arg)    : " << ***ptr3Arg << endl;
	cout << endl;
}

void main_ec(void) {
	int *intPointer = new int;
	
	*intPointer = 11;
	func_ca(&intPointer);	
	cout << "value of (intPointer)    : " << intPointer << endl;
	cout << "value of (*intPointer)   : " << *intPointer << endl;
	cout << endl;
	
	int **int2Pointer = &intPointer;
	func_cb(&int2Pointer);	
	cout << "value of (int2Pointer)   : " << int2Pointer << endl;
	cout << "value of (*int2Pointer)  : " << *int2Pointer << endl;
	cout << "value of (**int2Pointer) : " << **int2Pointer << endl;
	cout << endl; 
	
	cout << "value of (intPointer)    : " << intPointer << endl;
	cout << "value of (*intPointer)   : " << *intPointer << endl;
}
///////////////////////////////////////////////////////////////////////////////
void func_da(int *ptrArg) {
	cout << "ptrArg : " << ptrArg << " > " << *ptrArg << endl; 
	*ptrArg = 100; ptrArg++;
	cout << "ptrArg : " << ptrArg << " > " << *ptrArg << endl; 
	*ptrArg = 200; ptrArg++;
	cout << "ptrArg : " << ptrArg << " > " << *ptrArg << endl; 
	*ptrArg = 300; ptrArg++;
	cout << endl;
}

void main_ed(void) {
	int intArray[3] = { 11, 22, 33 };
	func_da(intArray);
	
	cout << "intArray[0] : " << &intArray[0] << " > " << intArray[0] << endl;
	cout << "intArray[1] : " << &intArray[1] << " > " << intArray[1] << endl;
	cout << "intArray[2] : " << &intArray[2] << " > " << intArray[2] << endl;
}
///////////////////////////////////////////////////////////////////////////////
void func_ea(int *ptrArray[]) {
	cout << "ptrArray[0] : " << &ptrArray[0] << " > " << ptrArray[0] << " > " <<
	*ptrArray[0] << endl;
	cout << "ptrArray[1] : " << &ptrArray[1] << " > " << ptrArray[1] << " > " <<
	*ptrArray[1] << endl;
	cout << "ptrArray[2] : " << &ptrArray[2] << " > " << ptrArray[2] << " > " <<
	*ptrArray[2] << endl; ptrArray[2]++;
	cout << "ptrArray[2] : " << &ptrArray[2] << " > " << ptrArray[2] << " > " <<
	*ptrArray[2] << endl; ptrArray[2]++;
	cout << "ptrArray[2] : " << &ptrArray[2] << " > " << ptrArray[2] << " > " <<
	*ptrArray[2] << endl;
}

void main_ee(void) {	
	int *intPtr[3];
	int *intPointer = new int;
	int intArray[3] = { 11, 22, 33 };
	int intVar = 100;
	*intPointer = 1000;
	
	intPtr[0] = &intVar;	
	intPtr[1] = intPointer;
	intPtr[2] = intArray;
	
	func_ea(intPtr);
}
///////////////////////////////////////////////////////////////////////////////
int *func_fa(void) {	
	static int staticVar[3] = { 10, 20, 30 };
	
	cout << "staticVar[0] : " << &staticVar[0] << " > " << staticVar[0] << endl;
	cout << "staticVar[1] : " << &staticVar[1] << " > " << staticVar[1] << endl;
	cout << "staticVar[2] : " << &staticVar[2] << " > " << staticVar[2] << endl;	
	
	return staticVar;
}

int *func_fb(void) {
	int non_staticVar[3] = { 11, 22, 33 };
	
	cout << "non_staticVar[0] : " << &non_staticVar[0] << " > " << non_staticVar[0] << endl;
	cout << "non_staticVar[1] : " << &non_staticVar[1] << " > " << non_staticVar[1] << endl;
	cout << "non_staticVar[2] : " << &non_staticVar[2] << " > " << non_staticVar[2] << endl;
	
	return non_staticVar;
}

void main_ef(void) {
	int *intPtr = func_fa();
	
	cout << "func_fa() : " << &func_fa << " > " << *func_fa << " : " << *func_fa() << endl;
	cout << endl; 
	
	cout << "intPtr : " << intPtr << " > " << *intPtr << endl; intPtr++;
	cout << "intPtr : " << intPtr << " > " << *intPtr << endl; intPtr++;
	cout << "intPtr : " << intPtr << " > " << *intPtr << endl; intPtr++;
	cout << endl;
	
	intPtr = func_fb();
	
	cout << "func_fb() : " << &func_fb << " > " << *func_fb << " : " << *func_fb() << endl;
	cout << endl; 
	
	cout << "intPtr : " << intPtr << " > " << *intPtr << endl; intPtr++;
	cout << "intPtr : " << intPtr << " > " << *intPtr << endl; intPtr++;
	cout << "intPtr : " << intPtr << " > " << *intPtr << endl; intPtr++;
}
///////////////////////////////////////////////////////////////////////////////
void func_ga(void) {
	cout << "func_ga() ........" << endl;
}

int func_gb(void) {
	cout << "func_gb() ........" << endl;
	return 20;
}

int func_gc(int argOne, int argTwo) {
	cout << "func_gc() ........" << endl;
	return argOne + argTwo;
}

void main_eg(void) {
	void (*fp_one)(void);
	int (*fp_two)(void);
	int (*fp_three)(int, int);
	
	fp_one = func_ga;
	fp_two = func_gb;
	fp_three = func_gc;
	
	fp_one();
	cout << (*fp_two)() << endl;
	cout << fp_three(100, 200) << endl;
}
///////////////////////////////////////////////////////////////////////////////
int maxValue(int argOne, int argTwo) {
	return ((argOne > argTwo) ? argOne : argTwo);
}

int minValue(int argOne, int argTwo) {
	return ((argOne < argTwo) ? argOne : argTwo);
}

int getResult(int argOne, int argTwo, int (*pFn)(int, int)) {
	return (*pFn)(argOne, argTwo);
}

void main_eh(void) {
	cout << "max of 19 and 28 is : " << getResult(19, 28, maxValue) << endl;
	cout << "min of 28 and 10 is : " << getResult(28, 10, minValue) << endl;
}
///////////////////////////////////////////////////////////////////////////////
char stringList[5][5] = { "sad", "bad", "mad", "good", "ugly" };
int intList[] = { 9, 4, 2, 0, 4, 4, 0, 4, 0 };

int stringSort(const void *argOne, const void *argTwo) {
	return(strcmp((char*)argOne, (char*)argTwo));
}

int intSort(const int* argOne, const int* argTwo) {
	return (*argOne - *argTwo);
}

void main_ei(void) {
	int x;
	
	cout << "sorted string list :- " << endl;
	qsort((void*)stringList, 5, sizeof(stringList[0]), stringSort);
	for(x=0; x<5; x++)
		cout << stringList[x] << endl;
	
	cout << endl;
	cout << "sorted integer list :- " << endl;
	qsort(
		intList, 
		sizeof(intList)/sizeof(int), 
		sizeof(int), 
		(int (*)(const void*, const void*))intSort);
	for(x=0; x<9; x++)
		cout << intList[x] << endl;
}
///////////////////////////////////////////////////////////////////////////////
void func_ia(int &refArg) {
	cout << "refArg : " << &refArg << " > " << refArg << endl;
	refArg = 100;
}

void func_ib(int *ptrArg) {
	cout << "ptrArg : " << &ptrArg << " > " << ptrArg << " > " << *ptrArg << endl;
	*ptrArg = 200;
}

int func_ic(int arg) {
	cout << "arg    : " << &arg << " > " << arg << endl;
	arg = 300;
	return arg;
}

void main_ej(void) {
	int var = 10;
	
	func_ia(var);
	cout << "var    : " << &var << " > " << var << endl;
	cout << endl;
	
	func_ib(&var);
	cout << "var    : " << &var << " > " << var << endl;
	cout << endl;
	
	int ret = func_ic(var);
	cout << "var    : " << &var << " > " << var << endl;	
	cout << "ret    : " << &ret << " > " << ret << endl;	
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "pointer and function" << endl; 
	cout << endl; main_ea(); getch(); system("cls");
	cout << "pointer as function argument" << endl; 
	cout << endl; main_eb(); getch(); system("cls");
	cout << "pointer-pointer as function argument" << endl; 
	cout << endl; main_ec(); getch(); system("cls");
	cout << "pointer as function argument and array" << endl; 
	cout << endl; main_ed(); getch(); system("cls");
	cout << "pointer-array as function argument" << endl; 
	cout << endl; main_ee(); getch(); system("cls");
	cout << "pointer as function return type" << endl;
	cout << endl; main_ef(); getch(); system("cls");
	cout << "function-pointer (practice more)" << endl;
	cout << endl; main_eg(); getch(); system("cls");
	cout << "function-pointer as function argument (practice more)" << endl;
	cout << endl; main_eh(); getch(); system("cls");
	cout << "function-pointer as function argument (practice more)" << endl;
	cout << endl; main_ei(); getch(); system("cls");
	cout << "reference as function argument" << endl;
	cout << endl; main_ej(); getch(); system("cls");
	
	return 0;
}