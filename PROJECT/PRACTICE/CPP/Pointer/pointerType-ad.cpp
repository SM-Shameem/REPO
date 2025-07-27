// VS2015 : Optimized (Version 19)
// Standard : 11-14-17
#include <iostream>
#include <conio.h> 
#include <string.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
void main_da(void) {
	int intArray[3] = { 11, 22, 33 };
	
	cout << "intArray        : " << intArray << endl;
	cout << "&intArray[0]    : " << &intArray[0] << endl;
	cout << "intArray[0]     : " << intArray[0] << endl;
	cout << "*(intArray + 0) : " << *(intArray + 0) << endl;
	cout << endl;
	
	//////////////////////////////////////////////////////////
	*(intArray + 0) = 10;
	*(intArray + 1) = 20;
	*(intArray + 2) = 30;
		
	for(int i=0; i<3; i++)
		cout << "intArray[" << i << "] : " << intArray + i << 
				" > " << *(intArray + i) << endl;
	cout << endl;
	
	//////////////////////////////////////////////////////////
	char charArray[3] = { NULL };
	
	*(charArray + 0) = 'A';
	*(charArray + 1) = 'B';
	*(charArray + 2) = 'C';
		
	for(int i=0; i<3; i++)
		cout << "charArray[" << i << "] : " << charArray + i << 
				" > " << *(charArray + i) << endl;
	cout << endl;
	
	//////////////////////////////////////////////////////////
	char stringArray[3][10] = { NULL };
	
	strcpy(*(stringArray + 0), "PHYSICS");
	strcpy(*(stringArray + 1), "CHEMISTRY");
	strcpy(*(stringArray + 2), "MATHE");
		
	for(int i=0; i<3; i++)
		cout << "stringArray[" << i << "] : " << stringArray + i << 
				" > " << *(stringArray + i) << endl;
	cout << endl;
	
	//////////////////////////////////////////////////////////
	float floatArray[2][2][3] = { NULL };
	
	*(floatArray[0][0] + 0) = 11.11;
	*(floatArray[0][0] + 1) = 11.22;
	*(floatArray[0][0] + 2) = 11.33;
	
	*(*(floatArray[0] + 1) + 0) = 22.11;
	*(*(floatArray[0] + 1) + 1) = 22.22;
	*(*(floatArray[0] + 1) + 2) = 22.33;
	
	*(*(*(floatArray + 1) + 0) + 0) = 33.11;
	*(*(*(floatArray + 1) + 0) + 1) = 33.22;
	*(*(*(floatArray + 1) + 0) + 2) = 33.33;
	
	floatArray[1][1][0] = 44.11;
	floatArray[1][1][1] = 44.22;
	floatArray[1][1][2] = 44.33;
	
	for(int i=0; i<2; i++)
		for(int j=0; j<2; j++)
			for(int k=0; k<3; k++)
				cout << "floatArray[" << i << "][" << j << "][" << k << "] : " <<
						(((floatArray + i) + j) + k) << " > " << 
						*(*(*(floatArray + i) + j) + k) << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_db(void) {
	int intArray[3] = { 11, 22, 33 };
	int *intPointer = new int;
	
	intPointer = intArray;
	
	cout << "intArray   : " << intArray << endl;
	cout << "intPointer : " << &intPointer << " > " << intPointer << " > " << 
	*intPointer << endl;
	cout << endl; 
	
	cout << "*(intArray + 0) : " << &intArray[0] << " > " << *(intArray + 0) << endl;
	cout << "*(intArray + 1) : " << &intArray[1] << " > " << *(intArray + 1) << endl;
	cout << "*(intArray + 2) : " << &intArray[2] << " > " << *(intArray + 2) << endl;
	cout << endl;
	
	cout << "intPointer      : " << intPointer << " > " << *intPointer << endl; 
	intPointer++;
	cout << "intPointer      : " << intPointer << " > " << *intPointer << endl; 
	intPointer++;
	cout << "intPointer      : " << intPointer << " > " << *intPointer << endl; 
	
}
///////////////////////////////////////////////////////////////////////////////
void main_dc(void) {
	int intArray[4] = { 11, 22, 33, 44 };
	int *intPointer[4] = { NULL };
		
	intPointer[0] = intArray;
	intPointer[1] = &intArray[1];
	intPointer[2] = &intArray[2];
	intPointer[3] = &intArray[3];
	
	cout << "intPointer[0] : " << &intPointer[0] << " > " << intPointer[0] << 
			" > " << *intPointer[0] << endl;
	cout << "intPointer[1] : " << &intPointer[1] << " > " << intPointer[1] << 
			" > " << *intPointer[1] << endl;
	cout << "intPointer[2] : " << &intPointer[2] << " > " << intPointer[2] << 
			" > " << *intPointer[2] << endl;
	cout << "intPointer[3] : " << &intPointer[3] << " > " << intPointer[3] << 
			" > " << *intPointer[3] << endl;
	cout << endl;
	
	cout << "intPointer[0] : " << &intPointer[0] << " > " << intPointer[0] << 
			" > " << *intPointer[0] << endl;
			intPointer[0]++;
	cout << "intPointer[0] : " << &intPointer[0] << " > " << intPointer[0] << 
			" > " << *intPointer[0] << endl;
			intPointer[0]++;
	cout << "intPointer[0] : " << &intPointer[0] << " > " << intPointer[0] << 
			" > " << *intPointer[0] << endl;
			intPointer[0]++;
	cout << "intPointer[0] : " << &intPointer[0] << " > " << intPointer[0] << 
			" > " << *intPointer[0] << endl;
	cout << endl;
	
	intPointer[1]--;
	cout << "intPointer[1] : " << &intPointer[1] << " > " << intPointer[1] << 
			" > " << *intPointer[1] << endl;
			intPointer[1]--;
	cout << "intPointer[1] : " << &intPointer[1] << " > " << intPointer[1] << 
			" > " << *intPointer[1] << endl;
			intPointer[1]++;
	cout << "intPointer[1] : " << &intPointer[1] << " > " << intPointer[1] << 
			" > " << *intPointer[1] << endl;
			intPointer[1]++;
	cout << "intPointer[1] : " << &intPointer[1] << " > " << intPointer[1] << 
			" > " << *intPointer[1] << endl;
			intPointer[1]++;
	cout << "intPointer[1] : " << &intPointer[1] << " > " << intPointer[1] << 
			" > " << *intPointer[1] << endl;
			intPointer[1]++;
	cout << "intPointer[1] : " << &intPointer[1] << " > " << intPointer[1] << 
			" > " << *intPointer[1] << endl;
	cout << endl;
	
	//////////////////////////////////////////////			
	int *intPtr[4] = { &intArray[0], &intArray[1], &intArray[2], &intArray[3] };
	
	cout << "intPtr[0] : " << &intPtr[0] << " > " << intPtr[0] << " > " << *intPtr[0] << endl;
	cout << "intPtr[1] : " << &intPtr[1] << " > " << intPtr[1] << " > " << *intPtr[1] << endl;	
	cout << endl;
	
	//////////////////////////////////////////////
	float *floatPointer[4] = { 
			(float*)&intArray[0], (float*)&intArray[1], 
			(float*)&intArray[2], (float*)&intArray[3] };
			
	cout << "floatPointer[0] : " << &floatPointer[0] << " > " << floatPointer[0] << 
			" > " << *(int*)floatPointer[0] << endl;
	cout << "floatPointer[1] : " << &floatPointer[1] << " > " << floatPointer[1] << 
			" > " << *(int*)floatPointer[1] << endl;
	cout << "floatPointer[2] : " << &floatPointer[2] << " > " << floatPointer[2] << 
			" > " << (int)*floatPointer[2] << endl;
	cout << "floatPointer[3] : " << &floatPointer[3] << " > " << floatPointer[3] << 
			" > " << *floatPointer[3] << endl;
	cout << endl;
	
	//////////////////////////////////////////////	
	int **int2Ptr = NULL;
	int2Ptr = intPointer;
	
	cout << "int2Ptr : " << &int2Ptr << " > " << int2Ptr << " > " << *int2Ptr << 
			" > " << **int2Ptr << endl;
			int2Ptr++;
	cout << "int2Ptr : " << &int2Ptr << " > " << int2Ptr << " > " << *int2Ptr << 
			" > " << **int2Ptr << endl;
			int2Ptr++;
	cout << "int2Ptr : " << &int2Ptr << " > " << int2Ptr << " > " << *int2Ptr << 
			" > " << **int2Ptr << endl;
			int2Ptr++;
	cout << "int2Ptr : " << &int2Ptr << " > " << int2Ptr << " > " << *int2Ptr << 
			" > " << **int2Ptr << endl;	
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "pointer notation and array element" << endl;
	cout << endl; main_da(); getch(); system("cls");
	cout << "pointer notation or pointer and array element" << endl;
	cout << endl; main_db(); getch(); system("cls");
	cout << "pointer-array and pointer-pointer" << endl;
	cout << endl; main_dc(); getch(); system("cls");
	
	return 0;
}