// VS2015 : Optimized C++ (Version 19)
// Standard : 11-14-17
#include <iostream>
#include <conio.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
void func_aa(int arg) {
	cout << "value of (arg)      : " << arg << endl;
}

void func_ab(short shortArg, char charArg, float floatArg) {
	cout << "value of (shortArg) : " << shortArg << endl;
	cout << "value of (charArg)  : " << charArg << endl;
	cout << "value of (floatArg) : " << floatArg << endl;
}

void func_ac(unsigned long ulArg, unsigned char ucArg) {
	cout << "value of (ulArg)    : " << ulArg << endl;
	cout << "value of (ucArg)    : " << ucArg << endl;
}

void func_ad(signed short const sConstArg, unsigned const char cConstArg) {
	cout << "value of (sConstArg) : " << sConstArg << endl;
	cout << "value of (cConstArg) : " << cConstArg << endl;
}

void main_aa(void) {
	#define INT_Const 50
	unsigned char const ucConst = 'A';
	signed short ssScalar = 100;
	char charScalar = 'B';
	
	func_aa(10);
	func_ab(INT_Const, ucConst, 50.10);
	func_ac(ssScalar, charScalar);
	
	cout << endl;
	func_ad(20, 'a');
	func_ad(INT_Const, ucConst);
	func_ad(ssScalar, charScalar);
}
///////////////////////////////////////////////////////////////////////////////
char func_ba(unsigned char ucArg, float const fcArg) {
	return(ucArg + fcArg);
}

signed short const func_bb(char const ccArg[], unsigned short int const usicArg) {
	for(short i=0; i<usicArg; i++)
		cout << "ccArg[" << i << "] : " << ccArg[i] << endl;
	return usicArg;
}

void main_ab(void) {
	cout << "func_ba : " << func_ba('A', 10.5) << endl;	
	cout << "func_bb : " << func_bb("string", 6) << endl;
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "function argument > scalar > constant > modifier > auto casting" << endl;
	cout << endl; main_aa(); getch(); system("cls");
	cout << "function return-type > scalar > constant > modifier > auto casting" << endl;
	cout << endl; main_ab(); getch(); system("cls");
	
	return 0;
}