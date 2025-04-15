// VS2015 : Optimized (Version 19)
// Standard : 11-14-17
#include <iostream>
#include <conio.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
void main_aa(void) {	
	unsigned char charArray[3] = { NULL };
	// array can be accessed through pointer-notation
	int *intPtr = new int;			
	float *floatPtr = new float;	
	// in-case of pointer memory allocation is required
	void const *vcPtr = NULL;
	void *const cvPtr = NULL;
	// const-pointer - can be any built-in type or void 
	void *voidPtr = 0;				
	void **voidPtr_ptr = NULL;
	void ***voidPtr_ptr_ptr = NULL;
	// void-pointer - can be NULL - but it has no target till assign
	// void-pointer - can't be initialized by (New)	
	
	cout << "intPtr          : " << intPtr << endl;	
	cout << "floatPtr        : " << floatPtr << endl;	
	cout << "voidPtr         : " << voidPtr << endl;	
	cout << "vcPtr           : " << vcPtr << endl;	
	cout << "voidPtr_ptr     : " << voidPtr_ptr << endl;
	cout << "voidPtr_ptr_ptr : " << voidPtr_ptr_ptr << endl;
	cout << "charArray       : " << charArray << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_ab(void) {
	void *voidPtr = NULL;		// void-pointer can't be allocate using (NEW)
	int *intPtr = new int;
	
	int intVar = 100;
	unsigned short intArray[3] = { 11, 22, 33 };
	
	// assigning array
	voidPtr = intArray;
	cout << "intArray : " << intArray << endl;
	cout << "voidPtr  : " << voidPtr << " -> " << *(unsigned short*)voidPtr << endl; 
	
	// void - pointer can't increment or decrement
	voidPtr = &intArray[1];
	cout << "voidPtr  : " << voidPtr << " -> " << *(unsigned short*)voidPtr << endl; 
	
	// assigning array element
	voidPtr = (void*)&intArray[2];	// casting is not required here - invalid but not error
	cout << "voidPtr  : " << voidPtr << " -> " << *(unsigned short*)voidPtr << endl;
	cout << endl;
	
	// assinging void-pointer to array-element 
	// in-case of void-pointed value - casting is required - but type should be relative or not
	intArray[1] = *(unsigned short*)voidPtr;
	cout << "intArray[0] : " << intArray[0] << " -> " << intArray[0] << endl;
	cout << "intArray[1] : " << intArray[1] << " -> " << intArray[1] << endl;
	cout << "intArray[2] : " << intArray[2] << " -> " << intArray[2] << endl;
	cout << endl;
	
	///////////////////////////////////////////////////////
	// assingning void-pointer to int-pointer
	voidPtr = intArray;
	intPtr = (int*)voidPtr;		// casting is required - and type must be relevent
	cout << "intArray : " << intArray << " -> " << *intArray << endl;
	cout << "voidPtr  : " << voidPtr << " -> " << *(unsigned short*)voidPtr << endl;
	cout << "intPtr   : " << intPtr << " -> " << *intPtr << endl; intPtr++;	
	cout << endl;
		
	// assigning scalar to void-pointer 
	// casting for data-accessing 
	voidPtr = &intVar;
	intPtr = (int*)voidPtr;
	cout << "intVar  : " << &intVar << " -> " << intVar << endl;
	cout << "voidPtr : " << voidPtr << " -> " << *(int*)voidPtr << endl;	
	cout << "voidPtr : " << voidPtr << " -> " << *(char*)voidPtr << endl;
	cout << "voidPtr : " << voidPtr << " -> " << (unsigned)*(char*)voidPtr << endl;
	cout << "voidPtr : " << voidPtr << " -> " << (unsigned char)*(char*)voidPtr << endl;
	cout << "voidPtr : " << voidPtr << " -> " << (unsigned char)*(int*)voidPtr << endl;
	cout << "voidPtr : " << voidPtr << " -> " << (unsigned char)*(float*)voidPtr << endl;	
	cout << "intPtr  : " << intPtr << " -> " << *intPtr << endl;
	cout << endl;
	
	//////////////////////////////////////////////////////
	char const ccArray[2] = { 'a', 'b' };
	char const ccVar = 'A';
	// assigning const-array to void-pointer
	// casting can be - void or assigned type or any relevent type 
	voidPtr = (float*)ccArray;	// casting is required - in-case of const-variable and void-pointer
	cout << "voidPtr : " << voidPtr << " -> " << *(char*)voidPtr << endl;
	// assigning const-scalar to void-pointer 
	voidPtr = (char*)&ccVar;	// casting is required - in-case of const-variable and void-pointer
	cout << "voidPtr : " << voidPtr << " -> " << *(char*)voidPtr << endl;
	cout << endl;
	
	//////////////////////////////////////////////////////
	// void-pointer exression
	voidPtr = intArray;	
	cout << "intArray : " << intArray << endl;
	cout << "voidPtr  : " << voidPtr << " -> " << *(unsigned short*)voidPtr << endl;
	voidPtr = (unsigned short*)voidPtr + 1;		// for expression casting is required 
	cout << "voidPtr  : " << voidPtr << " -> " << *(unsigned short*)voidPtr << endl;
	voidPtr = (int*)voidPtr + 1;
	cout << "voidPtr  : " << voidPtr << " -> " << *(unsigned short*)voidPtr << endl;
	
	// direct increment or decrement - or assigne increment or assigne decrement - not allowed
}
///////////////////////////////////////////////////////////////////////////////
void main_ac(void) {	
	const int *ciPointer = new int;
	int const *icPointer = new int;
	
	int intArray[2] = { 11, 22 };	
	cout << "intArray    : " << intArray << endl;
	cout << "intArray[0] : " << &intArray[0] << " -> " << intArray[0] << endl;
	cout << endl;
	
	ciPointer = intArray;
	cout << "ciPointer : " << ciPointer << " -> " << *ciPointer << endl; ciPointer++;
	cout << "ciPointer : " << ciPointer << " -> " << *ciPointer << endl; 
	cout << endl;
	
	icPointer = intArray;
	cout << "icPointer : " << icPointer << " -> " << *icPointer << endl; icPointer++;
	cout << "icPointer : " << icPointer << " -> " << *icPointer << endl; 
	cout << endl;
	
	// in-case of const-pointer (constant address) - variable must assign at the time of declaration
	int *const icPtr = intArray;
	
	cout << "icPtr : " << icPtr << " -> " << *icPtr << endl; (*icPtr)++;
	cout << "icPtr : " << icPtr << " -> " << *icPtr << endl; 	
	cout << endl;
	
	// here (address and value) both are constant 
	const int *const cicPointer = &intArray[1];
	cout << "cicPointer : " << cicPointer << " -> " << *cicPointer << endl; 
	cout << "cicPointer : " << cicPointer << " -> " << *cicPointer << endl; 
	cout << endl;

	//////////////////////////////////////////////////////////
	icPointer = icPtr;
	ciPointer = cicPointer;
	cout << "icPointer : " << icPointer << " -> " << *icPointer << endl; 
	cout << "ciPointer : " << ciPointer << " -> " << *ciPointer << endl; ciPointer++;
	cout << endl;
	
	//////////////////////////////////////////////////////////
	char charArray[3] = { 100, 101, 102 };
	const void *cvPointer = NULL;
	void *const vcPointer = &charArray[1];	
	const void *const cvcPointer = &charArray[2];
	
	cvPointer = charArray;	
	
	cout << "cvPointer  : " << cvPointer << " -> " << *(char*)cvPointer << endl; 
	cout << "vcPointer  : " << vcPointer << " -> " << *(char*)vcPointer << endl; 
	cout << "cvcPointer : " << cvcPointer << " -> " << *(char*)cvcPointer << endl; 
	cout << endl;
	
	//////////////////////////////////////////////////////////	
	unsigned short *const uscPointer = (unsigned short*)charArray;
	cout << "uscPointer  : " << uscPointer << " -> " << (char)*uscPointer << endl;
	const unsigned short *cusPointer = (unsigned short*)&charArray[1];
	cout << "cusPointer  : " << cusPointer << " -> " << (char)*cusPointer << endl;
	const unsigned short *const cuscPointer = (unsigned short*)&charArray[2];
	cout << "cuscPointer : " << cuscPointer << " -> " << (char)*cuscPointer << endl;
	
	unsigned char ucArray[3] = { 'A', 'B', 'C' };
	
	signed int *const sicPointer = (signed int*)ucArray;
	cout << "sicPointer  : " << sicPointer << " -> " << (char)*sicPointer << endl;
	const signed int *csiPointer = (signed int*)&ucArray[1];
	cout << "csiPointer  : " << csiPointer << " -> " << (char)*csiPointer << endl;
	const signed int *const csicPointer = (signed int*)&ucArray[2];
	cout << "csicPointer : " << csicPointer << " -> " << (char)*csicPointer << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void main_ad(void) {	
	unsigned short usVar = 11;
	unsigned short *usPtr = new unsigned short;
	unsigned short **us2Ptr = NULL;			
	unsigned short ***us3pPtr = NULL;
	unsigned short ****us4pPtr = NULL;
	unsigned short *****us5pPtr = NULL;
	// in-case of > pointer to pointer > initialization with (NEW) > is forbidden
	usPtr = &usVar;
	us2Ptr = &usPtr;
	us3pPtr = &us2Ptr;
	us4pPtr = &us3pPtr;
	us5pPtr = &us4pPtr;
	
	*****us5pPtr = 20;
	cout << "usVar   : " << &usVar << " -> " << usVar << endl;		// required to show data of pointer
	cout << "usPtr   : " << &usPtr << " -> " << usPtr << " -> " << *usPtr << endl;
	cout << "us2Ptr  : " << &us2Ptr << " -> " << us2Ptr << " -> " << *us2Ptr << 
			" -> " << **us2Ptr << endl;	
	cout << "us5pPtr : " << &us5pPtr << " -> " << us5pPtr << " -> " << *us5pPtr << 
			" -> " << *****us5pPtr << endl;
	cout << endl;
	
	***us3pPtr = 30; 
	cout << "usVar   : " << &usVar << " > " << usVar << endl;
	cout << "us3pPtr : " << &us3pPtr << " : " << us3pPtr << " > " << *us3pPtr << 
			" > " << **us3pPtr << " > " << ***us3pPtr << endl;	
	cout << "us5pPtr : " << &us5pPtr << " : " << us5pPtr << " > " << *us5pPtr << 
			" > " << **us5pPtr << " > " << ***us5pPtr << " > " << ****us5pPtr << 
			" > " << *****us5pPtr << endl;
	cout << endl;
			
	///////////////////////////////////////////////////
	unsigned int uintVar = 10;
	short *shortPtr = new short;
	long *longPtr = new long;
	float *floatPtr = new float;	
	
	shortPtr = (short*)&uintVar;	// small-pointer = large-scalar > ok
	cout << "shortPtr : " << &shortPtr << " -> " << shortPtr << " -> " << *shortPtr << endl;
	longPtr = (long*)shortPtr;		// large-pointer = samall-pointer > ok
	cout << "longPtr  : " << &longPtr << " -> " << longPtr << " -> " << *longPtr << endl;  
	longPtr = (long*)uintVar;		// large-pointer = samll-scallar > data output error
	cout << "longPtr  : " << &longPtr << " -> " << longPtr << endl; //<< " -> " << *longPtr << endl;
	cout << endl;
	
	///////////////////////////////////////////////////
	int *intPtr = new int;	
	unsigned long **ul2Ptr = NULL;
	short ***s3Ptr = NULL;
	unsigned float ****uf4Ptr = NULL;
	
	intPtr = (int*)&uintVar;			// same-pointer = same-scalar > ok
	ul2Ptr = (unsigned long**)&intPtr;	// large-pointer-ptr = small-pointer-ptr > ok
	s3Ptr = (short***)&ul2Ptr;			// small-pointer-ptr = large-pointer-ptr > ok
	uf4Ptr = (unsigned float****)&s3Ptr;// large-pointer-ptr = small-pointer-ptr > ok
	
	cout << "intPtr : " << &intPtr << " > " << intPtr << " > " << *intPtr << endl;	
	cout << "ul2Ptr : " << &ul2Ptr << " > " << ul2Ptr << " > " << *ul2Ptr << 
			" > " << **ul2Ptr << endl;
	cout << "s3Ptr  : " << &s3Ptr << " > " << s3Ptr << " > " << *s3Ptr << 
			" > " << **s3Ptr << " > " << ***s3Ptr << endl;
	cout << "uf4Ptr : " << &uf4Ptr << " > " << uf4Ptr << " > " << *uf4Ptr << 
			" > " << **uf4Ptr << " > " << ***uf4Ptr << " > " << ****uf4Ptr << endl;
	cout << endl;
			
	**ul2Ptr = 50;
	cout << "intPtr : " << &intPtr << " > " << intPtr << " > " << *intPtr << endl;
	cout << "uf4Ptr : " << &uf4Ptr << " > " << uf4Ptr << " > " << *uf4Ptr << 
			" > " << **uf4Ptr << " > " << ***uf4Ptr << " > " << ****uf4Ptr << endl;
	cout << endl;
			
	****uf4Ptr = 22.40;
	cout << "intPtr : " << &intPtr << " > " << intPtr << " > " << *intPtr << endl;
	cout << "uf4Ptr : " << &uf4Ptr << " > " << uf4Ptr << " > " << *uf4Ptr << 
			" > " << **uf4Ptr << " > " << ***uf4Ptr << " > " << ****uf4Ptr << endl;
	cout << endl;
	
	///////////////////////////////////////////////////
	short shortVar = 10.56;
	short *short1Ptr = new short;
	short **short2Ptr = NULL;	
	
	short1Ptr = &shortVar;
	short2Ptr = (short**)&shortVar;	
	
	cout << "shortVar  : " << &shortVar << " -> " << shortVar << endl;
	cout << "short1Ptr : " << &short1Ptr << " -> " << short1Ptr << " -> " << *short1Ptr << endl;
	cout << "short2Ptr : " << &short2Ptr << " -> " << short2Ptr << " -> " << **short2Ptr << endl;
	
	unsigned long ****ul4Ptr = NULL;
	ul4Ptr = (unsigned long****)&short2Ptr;		
	cout << "ul4Ptr    : " << &ul4Ptr << " -> " << ul4Ptr << endl;			
	
	unsigned char ****c4Ptr = NULL;
	c4Ptr = (unsigned char****)&short2Ptr;	
	cout << "c4Ptr     : " << &c4Ptr << " > " << c4Ptr << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_ae(void) {
	short sVar = 10;
	void *vPtr = NULL;
	void **v2Ptr = NULL;
	
	vPtr = &sVar;
	v2Ptr = &vPtr;
	
	cout << "sVar  : " << &sVar << " > " << sVar << endl;
	cout << "vPtr  : " << &vPtr << " > " << vPtr << " > " << *(short*)vPtr << endl;
	cout << "v2Ptr : " << &v2Ptr << " > " << v2Ptr << " > " << *(short*)v2Ptr << 
			" > " << **(short**)v2Ptr << endl;
	cout << endl;

	//////////////////////////////////////////////	
	int const *icPtr = new int;
	int const **ic2Ptr = NULL;
	int const ****ic4Ptr = NULL;
		
	icPtr = (int*)&sVar;
	ic2Ptr = &icPtr;
		
	cout << "icPtr  : " << &icPtr << " > " << icPtr << " > " << *icPtr << endl;
	cout << "ic2Ptr : " << &ic2Ptr << " > " << ic2Ptr << " > " << *ic2Ptr << 
			" > " << **ic2Ptr << endl;
	cout << endl;
	
	ic4Ptr = (int const****)&ic2Ptr;
	cout << "ic4Ptr : " << &ic4Ptr << " > " << ic4Ptr << endl;
	
	ic4Ptr = (int const****)&v2Ptr;
	cout << "ic4Ptr : " << ic4Ptr << " > " << ic4Ptr << endl;
	cout << endl;
	
	//////////////////////////////////////////////	
	int *const ciPtr = (int*)&sVar;
	int **const ci2Ptr = (int**)&ciPtr;
	int ***const ci3Ptr = (int***)&ciPtr;
	
	cout << "ciPtr  : " << &ciPtr << " > " << ciPtr << endl;
	cout << "ci2Ptr : " << &ci2Ptr << " > " << ci2Ptr << endl;
	cout << "ci3Ptr : " << &ci3Ptr << " > " << ci3Ptr << endl;
	
	int ****const ci4Ptr = (int****)&ic2Ptr; 
	cout << "ci4Ptr : " << &ci4Ptr << " > " << ci4Ptr << endl;
	cout << endl;

	//////////////////////////////////////////////	
	const int *const cicPtr = (int*)&sVar;
	const int **const cic2Ptr = (int const**)&cicPtr;
	
	cout << "cicPtr  : " << &cicPtr << " > " << cicPtr << endl;
	cout << "cic2Ptr : " << &cic2Ptr << " > " << cic2Ptr << endl;
	cout << endl;
	
	//////////////////////////////////////////////	
	void const *vcPtr = NULL;
	void const **vc2Ptr = NULL;
	void *const cvPtr = NULL;
	void **const cv2Ptr = NULL;
	const void *const cvcPtr = NULL;
	const void **const cvc2Ptr = NULL;
	
	cout << "vcPtr   : " << &vcPtr << " > " << vcPtr << endl;
	cout << "vc2Ptr  : " << &vc2Ptr << " > " << vc2Ptr << endl;
	cout << "cvPtr   : " << &cvPtr << " > " << cvPtr << endl;
	cout << "cv2Ptr  : " << &cv2Ptr << " > " << cv2Ptr << endl;
	cout << "cvcPtr  : " << &cvcPtr << " > " << cvcPtr << endl;
	cout << "cvc2Ptr : " << &cvc2Ptr << " > " << cvc2Ptr << endl;
	cout << endl;
	
	//////////////////////////////////////////////	
	ic2Ptr = (int const**)&ci4Ptr;
	v2Ptr = (void**)&ci2Ptr;
	vPtr = (void*)&ic4Ptr;
	//ciPtr = (int*)&vPtr;		// address constant 
	icPtr = (int*)&v2Ptr;
	
	cout << "ic2Ptr : " << &ic2Ptr << " > " << ic2Ptr << endl;
	cout << "v2Ptr  : " << &v2Ptr << " > " << v2Ptr << endl;
	cout << "vPtr   : " << &vPtr << " > " << vPtr << endl;
	cout << "icPtr  : " << &icPtr << " > " << icPtr << endl;
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");
	
	cout << "pointer > NULL-VOID-CONST-POINTER" << endl;
	cout << endl; main_aa(); getch(); system("cls");
	cout << "void-pointer > scalar, array, pointer, const > casting > data-access > expression" << endl;
	cout << endl; main_ab(); getch(); system("cls");
	cout << "const-pointer (address / value / both) > void > modifier" << endl;
	cout << endl; main_ac(); getch(); system("cls");
	cout << "pointer of pointer > modifier" << endl;
	cout << endl; main_ad(); getch(); system("cls");
	cout << "pointer of pointer > void > const" << endl;
	cout << endl; main_ae(); getch(); system("cls");
}