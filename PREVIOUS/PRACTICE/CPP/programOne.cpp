#include <conio.h>
#include <iostream>

void calculateFunc(void);

int main(void) {
    calculateFunc();
    return 0;
}

void calculateFunc(void) {
    int numOne = 0;
    int numTwo = 0;
    int result = 0;
    char OPERATOR;

    while(OPERATOR != '?') {
        system("cls");
        numOne = numTwo = 0;

        std::cout << "INPUT must be digit, else will get unexpected result" << std::endl;
        std::cout << "OPERATION [+] [-] [*] [/] or To Exit [?] : ";
        std::cin >> OPERATOR;
        
        if(OPERATOR == '+' || OPERATOR == '-' || OPERATOR == '*' || OPERATOR == '/') {
            std::cout << "1st INPUT : ";
            std::cin >> numOne;
            std::cout << "2nd INPUT : ";
            std::cin >> numTwo;

            switch(OPERATOR) {
                case '+': std::cout << "Result : " << numOne + numTwo << std::endl; break;
                case '-': std::cout << "Result : " << numOne - numTwo << std::endl; break;
                case '*': std::cout << "Result : " << numOne * numTwo << std::endl; break;
                case '/': std::cout << "Result : " << numOne / numTwo << std::endl; break;
            }
        }
        else if (OPERATOR == '?') {
            std::cout << "Program Terminated ......" << std::endl;
        }
        else {
            std::cout << "Operator Incorrect ....." << std::endl;
        }

        getch();
    }
}