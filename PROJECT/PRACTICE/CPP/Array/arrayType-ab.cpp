// VS2015 - optimized (version 19)
// Standard - 11-14-17

#include <iostream>
#include <string.h>
#include <conio.h> 
using namespace std; 
///////////////////////////////////////////////////////////////////////////////
void main_da(void) {
	
	int int_array[3];
	float float_array[3] = { 10.11, 20.22, 30.33 };
	char char_array[3] = { 'A', 'B', 'C' };
	char string_array[15];
	
	int_array[0] = 10;
	int_array[1] = 20;
	int_array[2] = 30;
	
	strcpy(string_array, "string ..");
	
	cout << "int_array    : " << int_array << endl;
	cout << "int_array[0] : " << int_array[0] << " -> " << &int_array[0] << endl;
	cout << "int_array[1] : " << int_array[1] << " -> " << &int_array[1] << endl;
	cout << "int_array[2] : " << int_array[2] << " -> " << &int_array[2] << endl;
	cout << endl;
	
	cout << "float_array    : " << float_array << endl;
	cout << "float_array[0] : " << float_array[0] << " -> " << &float_array[0] << endl;
	cout << "float_array[1] : " << float_array[1] << " -> " << &float_array[1] << endl;
	cout << "float_array[2] : " << float_array[2] << " -> " << &float_array[2] << endl;
	cout << endl;
	
	//cout << "char_array  : " << char_array << " -> " << hex << (int)&char_array << endl;
	for(int i=0; i<3; i++)
		cout << "char_array[" << i << "] : " << char_array[i] <<
				" -> " << &char_array[i] << endl;
	cout << endl;
	
	cout << "string_array (string) : " << string_array << endl;
	cout << "string_array (string) : " << &string_array << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void main_db(void) {
	int int_dArray[2][3] = { 11, 22, 33, 44, 55, 66 };
	float float_dArray[3][3] = { 
		{ 10.11, 20.22, 30.33 },
			{ 40.44, 50.55, 60.66 },
				{70.77, 80.88, 90.99 }
	};
	char char_dArray[2][2];
	char_dArray[0][0] = 'a';
	char_dArray[0][1] = 'b';
	char_dArray[1][0] = 'c';
	char_dArray[1][1] = 'd';
		
	for(int i=0; i<2; i++)
		for(int j=0; j<3; j++)
			cout << "int_dArray[" << i << "][" << j << "] : " << 
					int_dArray[i][j] << " -> " << &int_dArray[i][j] << endl;
	cout << endl;
					
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			cout << "float_dArray[" << i << "][" << j << "] : " << 
					float_dArray[i][j] << " -> " << &float_dArray[i][j] << endl;
	cout << endl;
	
	for(int i=0; i<2; i++)
		for(int j=0; j<2; j++)
			cout << "char_dArray[" << i << "][" << j << "] : " << 
					char_dArray[i][j] << " -> " << &char_dArray[i][j] << endl;
					
	cout << endl;
	cout << "int_dArray   : " << int_dArray << endl;
	cout << "float_dArray : " << float_dArray << endl;
	cout << "char_dArray  : " << char_dArray << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_dc(void) {
	char string_dArray[3][15] = { "string one", "string two", "string three" };
	
	cout << "string_dArray[0] : " << string_dArray[0] << endl;
	cout << "string_dArray[1] : " << string_dArray[1] << endl;
	cout << "string_dArray[2] : " << string_dArray[2] << endl;
	cout << endl;
	
	strcpy(string_dArray[0], "physics");
	strcpy(string_dArray[1], "chemistry");
	strcpy(string_dArray[2], "mathematics");
	
	cout << "string_dArray[0] : " << string_dArray[0] << endl;
	cout << "string_dArray[1] : " << string_dArray[1] << endl;
	cout << "string_dArray[2] : " << string_dArray[2] << endl;	
	cout << endl;
	
	cout << "s_dArray[0][0]  : " << string_dArray[0][00] << 
			" -> " << &string_dArray[0][00] << endl;
	cout << "s_dArray[0][1]  : " << string_dArray[0][01] << 
			" -> " << &string_dArray[0][01] << endl;
	cout << "s_dArray[0][2]  : " << string_dArray[0][02] << 
			" -> " << &string_dArray[0][02] << endl;
	cout << "s_dArray[0][3]  : " << string_dArray[0][03] << 
			" -> " << &string_dArray[0][03] << endl;
	cout << "s_dArray[0][4]  : " << string_dArray[0][04] << 
			" -> " << &string_dArray[0][04] << endl;
	cout << "s_dArray[0][5]  : " << string_dArray[0][05] << 
			" -> " << &string_dArray[0][05] << endl;
	cout << "s_dArray[0][6]  : " << string_dArray[0][06] << 
			" -> " << &string_dArray[0][06] << endl;
	cout << "s_dArray[0][7]  : " << string_dArray[0][07] << 
			" -> " << &string_dArray[0][07] << endl;
	cout << "s_dArray[0][8]  : " << string_dArray[0][ 8] << 
			" -> " << &string_dArray[0][ 8] << endl;
	cout << "s_dArray[0][9]  : " << string_dArray[0][ 9] << 
			" -> " << &string_dArray[0][ 9] << endl;
	cout << "s_dArray[0][10] : " << string_dArray[0][10] << 
			" -> " << &string_dArray[0][10] << endl;	
	cout << endl;
	
	cout << "s_dArray[0][15] : " << string_dArray[0][15] << 
			" -> " << &string_dArray[0][15] << endl;
	cout << "s_dArray[0][19] : " << string_dArray[0][19] << 
			" -> " << &string_dArray[0][19] << endl;
	cout << "s_dArray[0][20] : " << string_dArray[0][20] << 
			" -> " << &string_dArray[0][20] << endl;
	cout << endl;
	
	cout << "s_dArray[2][0]  : " << string_dArray[2][00] << 
			" -> " << &string_dArray[2][00] << endl;
	cout << "s_dArray[2][1]  : " << string_dArray[2][01] << 
			" -> " << &string_dArray[2][01] << endl;
	cout << "s_dArray[2][4]  : " << string_dArray[2][04] << 
			" -> " << &string_dArray[2][04] << endl;
	cout << endl; 
	
	cout << "s_dArray : " << string_dArray << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_dd(void) {
	int int_mdArray[2][2][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 } ;
		
	cout << "int_mdArray[0][0][0]  : " << int_mdArray[0][0][0] << endl;
	cout << "int_mdArray[0][0][1]  : " << int_mdArray[0][0][1] << endl;
	cout << "int_mdArray[0][0][2]  : " << int_mdArray[0][0][2] << endl;
	cout << "int_mdArray[0][0][3]  : " << int_mdArray[0][0][3] << endl;
	cout << "int_mdArray[0][0][4]  : " << int_mdArray[0][0][4] << endl;
	cout << "int_mdArray[0][0][5]  : " << int_mdArray[0][0][5] << endl;
	cout << "int_mdArray[0][0][6]  : " << int_mdArray[0][0][6] << endl;
	cout << "int_mdArray[0][0][7]  : " << int_mdArray[0][0][7] << endl;
	cout << "int_mdArray[0][0][8]  : " << int_mdArray[0][0][8] << endl;
	cout << "int_mdArray[0][0][9]  : " << int_mdArray[0][0][9] << endl;
	cout << "int_mdArray[0][0][10] : " << int_mdArray[0][0][10] << endl;
	cout << "int_mdArray[0][0][11] : " << int_mdArray[0][0][11] << endl;
	cout << endl;
	
	cout << "int_mdArray[0][0][0] : " << int_mdArray[0][0][0] << endl;
	cout << "int_mdArray[0][0][1] : " << int_mdArray[0][0][1] << endl;
	cout << "int_mdArray[0][0][2] : " << int_mdArray[0][0][2] << endl;
	cout << endl;
	
	cout << "int_mdArray[0][1][0] : " << int_mdArray[0][1][0] << endl;
	cout << "int_mdArray[0][1][1] : " << int_mdArray[0][1][1] << endl;
	cout << "int_mdArray[0][1][2] : " << int_mdArray[0][1][2] << endl;
	cout << endl;
	
	cout << "int_mdArray[1][0][0] : " << int_mdArray[1][0][0] << endl;
	cout << "int_mdArray[1][0][1] : " << int_mdArray[1][0][1] << endl;
	cout << "int_mdArray[1][0][2] : " << int_mdArray[1][0][2] << endl;
	cout << endl;
	
	cout << "int_mdArray[1][1][0] : " << int_mdArray[1][1][0] << endl;
	cout << "int_mdArray[1][1][1] : " << int_mdArray[1][1][1] << endl;
	cout << "int_mdArray[1][1][2] : " << int_mdArray[1][1][2] << endl;
	cout << endl;
}
///////////////////////////////////////////////////////////////////////////////
void main_de(void) {
	int int_mdArray[2][3][2][2] = {
		01, 02, 03, 04, 05, 06, 07,  8,  9, 10, 11, 12, 
		13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24
	};
	
	cout << "int_mdArray[0][0][0][0] : " << int_mdArray[0][0][0][0] << endl;
	cout << "int_mdArray[0][0][0][1] : " << int_mdArray[0][0][0][1] << endl;
	
	cout << "int_mdArray[0][0][1][0] : " << int_mdArray[0][0][1][0] << endl;
	cout << "int_mdArray[0][0][1][1] : " << int_mdArray[0][0][1][1] << endl;
	
	cout << "int_mdArray[0][1][0][0] : " << int_mdArray[0][1][0][0] << endl;
	cout << "int_mdArray[0][1][0][1] : " << int_mdArray[0][1][0][1] << endl;
	
	cout << "int_mdArray[0][1][1][0] : " << int_mdArray[0][1][1][0] << endl;
	cout << "int_mdArray[0][1][1][1] : " << int_mdArray[0][1][1][1] << endl;
	
	cout << "int_mdArray[0][2][0][0] : " << int_mdArray[0][2][0][0] << endl;
	cout << "int_mdArray[0][2][0][1] : " << int_mdArray[0][2][0][1] << endl;
	
	cout << "int_mdArray[0][2][1][0] : " << int_mdArray[0][2][1][0] << endl;
	cout << "int_mdArray[0][2][1][1] : " << int_mdArray[0][2][1][1] << endl;
	cout << endl;
	
	cout << "int_mdArray[0][0][0][0] : " << int_mdArray[1][0][0][0] << endl;
	cout << "int_mdArray[0][0][0][1] : " << int_mdArray[1][0][0][1] << endl;
	
	cout << "int_mdArray[0][0][1][0] : " << int_mdArray[1][0][1][0] << endl;
	cout << "int_mdArray[0][0][1][1] : " << int_mdArray[1][0][1][1] << endl;
	
	cout << "int_mdArray[0][1][0][0] : " << int_mdArray[1][1][0][0] << endl;
	cout << "int_mdArray[0][1][0][1] : " << int_mdArray[1][1][0][1] << endl;
	
	cout << "int_mdArray[0][1][1][0] : " << int_mdArray[1][1][1][0] << endl;
	cout << "int_mdArray[0][1][1][1] : " << int_mdArray[1][1][1][1] << endl;
	
	cout << "int_mdArray[0][2][0][0] : " << int_mdArray[1][2][0][0] << endl;
	cout << "int_mdArray[0][2][0][1] : " << int_mdArray[1][2][0][1] << endl;
	
	cout << "int_mdArray[0][2][1][0] : " << int_mdArray[1][2][1][0] << endl;
	cout << "int_mdArray[0][2][1][1] : " << int_mdArray[1][2][1][1] << endl;	
	
	cout << endl;
	cout << "int_mdArray : " << int_mdArray << endl;	
}
///////////////////////////////////////////////////////////////////////////////
void main_df(void) {
	char char_mdArray[2][2][2][15];
	
	strcpy(char_mdArray[0][0][0], "string 1 ..");
	strcpy(char_mdArray[0][0][1], "string 2 ..");
	strcpy(char_mdArray[0][1][0], "string 3 ..");
	strcpy(char_mdArray[0][1][1], "string 4 ..");
	strcpy(char_mdArray[1][0][0], "string 5 ..");
	strcpy(char_mdArray[1][0][1], "string 6 ..");
	strcpy(char_mdArray[1][1][0], "string 7 ..");
	strcpy(char_mdArray[1][1][1], "string 8 ..");
	
	for(int i=0; i<2; i++)
		for(int j=0; j<2; j++)
			for(int k=0; k<2; k++)
				cout << "char_mdArray[" << i << "][" << j << "][" << k << "] : " 
						<< char_mdArray[i][j][k] << endl;
}
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	system("cls");

	cout << "array declaration and value assigning" << endl;
	cout << endl; main_da(); getch(); system("cls");
	cout << "2d-array declaration and value assigning" << endl;
	cout << endl; main_db(); getch(); system("cls");
	cout << "2d-string-array declaration and value assigning" << endl;
	cout << endl; main_dc(); getch(); system("cls");
	cout << "3d-array declaration and value assigning" << endl;
	cout << endl; main_dd(); getch(); system("cls");
	cout << "md-array declaration and value assigning" << endl;
	cout << endl; main_de(); getch(); system("cls");
	cout << "string-md-array declaration and value assigning" << endl;
	cout << endl; main_df(); getch(); system("cls");
	
	return 0;
}