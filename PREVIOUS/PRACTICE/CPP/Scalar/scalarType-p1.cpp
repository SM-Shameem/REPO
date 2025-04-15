// VS2015 : Optimized C++ (Version 19)
// Standard : 11-14-17
#include <iostream>
#include <conio.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
void func_aa(void) {	
	bool scalar_bool = NULL;
	char scalar_char = NULL;
	short scalar_short = NULL;
	int scalar_int = NULL;
	long scalar_long = NULL;
	float scalar_float = NULL;
	double scalar_double = NULL;
	
	cout << "bool            : " << sizeof(bool)   << " : " << &scalar_bool << endl;
	cout << "char            : " << sizeof(char)   << " : " << &scalar_char << endl;	
	cout << "short           : " << sizeof(short)  << " : " << &scalar_short << endl;	
	cout << "int             : " << sizeof(int)    << " : " << &scalar_int << endl;	
	cout << "long            : " << sizeof(long)   << " : " << &scalar_long << endl;	 
	cout << "fload           : " << sizeof(float)  << " : " << &scalar_float << endl; 
	//cout << "long float : " << sizeof(long float) << endl;
	cout << "double          : " << sizeof(double) << " : " << &scalar_double << endl;
	//cout << "long double : " << sizeof(long double) << endl;
	cout << endl;
	
	cout << "signed bool     : " << sizeof(signed bool) << endl;
	cout << "signed char     : " << sizeof(signed char) << endl;
	cout << "signed short    : " << sizeof(signed short) << endl; 
	cout << "signed int      : " << sizeof(signed int) << endl; 
	cout << "signed long     : " << sizeof(signed long) << endl;
	cout << "signed float    : " << sizeof(signed float) << endl;
	cout << "signed double   : " << sizeof(signed double) << endl;
	cout << endl;
	
	cout << "unsigned bool   : " << sizeof(unsigned bool) << endl;
	cout << "unsigned char   : " << sizeof(unsigned char) << endl;
	cout << "unsigned short  : " << sizeof(unsigned short) << endl; 
	cout << "unsigned int    : " << sizeof(unsigned int) << endl; 
	cout << "unsigned long   : " << sizeof(unsigned long) << endl;
	cout << "unsigned float  : " << sizeof(unsigned float) << endl;
	cout << "unsigned double : " << sizeof(unsigned double) << endl;
	
	// -------------------------------------------------------------
	getch();
	system("cls");		
	bool Bool[2] = { NULL };
	signed bool sBool[2] = { NULL };
	unsigned bool uBool[2] = { NULL };
	
	cout << "Bool            : " << sizeof(bool) << " : " << &Bool[0] << 
			" -> " << &Bool[1] << endl;
	cout << "signed bool     : " << sizeof(signed bool) << " : " << &sBool[0] << 
			" -> " << &sBool[1] << endl;
	cout << "unsigned bool   : " << sizeof(unsigned bool) << " : " << &uBool[0] << 
			" -> " << &uBool[1] << endl;
	cout << endl;
	
	double Double[2] = { NULL };
	signed double sDouble[2] = { NULL };
	unsigned double uDouble[2] = { NULL };
	
	cout << "Double          : " << sizeof(double) << " : " << &Double[0] << 
			" -> " << &Double[1] << endl;
	cout << "signed double   : " << sizeof(signed double) << " : " << &sDouble[0] << 
			" -> " << &sDouble[1] << endl;
	cout << "unsigned double : " << sizeof(unsigned double) << " : " << &uDouble[0] << 
			" -> " << &uDouble[1] << endl;
	
}
///////////////////////////////////////////////////////////////////////////////
void func_ab(void) {
	bool const bScalarConst = NULL;
	char const cScalarConst = NULL;
	unsigned char const ucScalarConst = NULL;
	short const sScalarConst = NULL;
	int const iScalarConst = NULL;
	long const lScalarConst = NULL;
	
	const float fScalarConst = NULL;
	const double dScalarConst = NULL;
	
	cout << "bScalarConst  : " << sizeof(bool const) << " : " << &bScalarConst << 
			" : " << bScalarConst << endl;
	cout << "cScalarConst  : " << sizeof(char const) << " : " << &cScalarConst << 
			" : " << cScalarConst << endl;
	cout << "ucScalarConst : " << sizeof(unsigned char const) << " : " << &ucScalarConst << 
			" : " << ucScalarConst << endl;	
	cout << "sScalarConst  : " << sizeof(short const) << " : " << &sScalarConst << 
			" : " << sScalarConst << endl;
	cout << "iScalarConst  : " << sizeof(int const) << " : " << &iScalarConst << 
			" : " << iScalarConst << endl;
	cout << "lScalarConst  : " << sizeof(long const) << " : " << &lScalarConst << 
			" : " << lScalarConst << endl;
	cout << "fScalarConst  : " << sizeof(const float) << " : " << &fScalarConst << 
			" : " << fScalarConst << endl;
	cout << "dScalarConst  : " << sizeof(const double) << " : " << &dScalarConst << 
			" : " << dScalarConst << endl;
	cout << endl;

	// --------------------------------------------------------
	#define INT_Const 10
	#define CHA_Const 'A'
	#define STR_Const "String"
	cout << "INT_Const     : " << INT_Const << endl;
	cout << "CHA_Const     : " << CHA_Const << endl;
	cout << "STR_Const     : " << STR_Const << endl;
}
///////////////////////////////////////////////////////////////////////////////
void func_ac(void) {
	bool boolScalar = true;
	char charScalar = 'A';
	short shortScalar = 10000;
	int intScalar = 1000000000;
	long longScalar = 1000000000;
	float floatScalar = 10000.100;
	double doubleScalar = 10000.100;
	
	cout << "boolScalar   : " << &boolScalar << " : " << boolScalar << endl;
	cout << "charScalar   : " << &charScalar << " : " << charScalar << endl;
	cout << "shortScalar  : " << &shortScalar << " : " << shortScalar << endl;
	cout << "intScalar    : " << &intScalar << " : " << intScalar << endl;
	cout << "longScalar   : " << &longScalar << " : " << longScalar << endl;
	cout << "floatScalar  : " << &floatScalar << " : " << floatScalar << endl;
	cout << "doubleScalar : " << &doubleScalar << " : " << doubleScalar << endl;
	cout << endl;
	
	// ------------------------------------------------------------
	cout << "in-case of casting > type renge and content" << endl;
	cout << "auto casting ...................." << endl;
	boolScalar = charScalar;
	intScalar = charScalar;	
	cout << "boolScalar  : " << &boolScalar << " : " << boolScalar << endl;
	cout << "intScalar   : " << &intScalar << " : " << intScalar << endl;
	
	intScalar = 100000;
	shortScalar = intScalar;
	cout << "shortScalar : " << &shortScalar << " : " << shortScalar << endl;
	
	shortScalar = 10000;
	intScalar = shortScalar;
	cout << "intScalar   : " << &intScalar << " : " << intScalar << endl;
	cout << endl;
	
	// ------------------------------------------------------------
	cout << "auto casting with modifier ........" << endl;
	unsigned char ucScalar = 'B';
	longScalar = ucScalar;
	cout << "longScalar : " << &longScalar << " : " << longScalar << endl;
	
	signed long slScalar = 65;
	ucScalar = slScalar;
	cout << "ucScalar   : " << &ucScalar << " : " << ucScalar << endl;
	cout << endl;
	
	// ------------------------------------------------------------
	cout << "auto casting > constant ............" << endl;
	#define INT_Const 10
	unsigned short int const usiConst = 100;
	floatScalar = INT_Const;
	doubleScalar = usiConst;
	cout << "floatScalar  : " << &floatScalar << " : " << floatScalar << endl;
	cout << "doubleScalar : " << &doubleScalar << " : " << doubleScalar << endl;
	cout << endl;
	
	// ------------------------------------------------------------
	cout << "constant variable assigned to (defined constant) in same scope" << endl;
	#define INT_Const usiConst	
	cout << "INT_Const    : " << INT_Const << endl;
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "built-in type > modifiers > size & memory > scalar > variable" << endl; 
	cout << endl; func_aa(); getch(); system("cls");
	cout << "built-in type > modifier > size & memory > scalar > const & define" << endl; 
	cout << endl; func_ab(); getch(); system("cls");
	cout << "built-in type > modifier > casting > scalar > variable & constant" << endl;
	cout << endl; func_ac(); getch(); system("cls");
	
	return 0;
}
