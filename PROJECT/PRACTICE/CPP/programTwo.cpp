#include <conio.h>
#include <iostream>

class calculateClass {
    private:
        int numOne = 0;
        int numTwo = 0;
        int result = 0;
        char OPERATOR;

    public:
        void operation(void) {
            switch(OPERATOR) {
                case '+': result = numOne + numTwo; break;
                case '-': result = numOne - numTwo; break;
                case '*': result = numOne * numTwo; break;
                case '/': result = numOne / numTwo; break;
                case '?': std::cout << "Program Terminated ..." << std::endl; break;
                default : std::cout << "Invalid Operation" << std::endl; break;
            }
        }

    public:
        char input(void) {
            system("cls");
            numOne = numTwo = 0;

            std::cout << "INPUT must be digit, else unexpected result" << std::endl;
            std::cout << "OPERATION [+] [-] [*] [/] or Exit [?] : ";
            std::cin >> OPERATOR;

            if(OPERATOR == '+' || OPERATOR == '-' || OPERATOR == '*' || OPERATOR == '/') {
                std::cout << "1st INPUT : ";
                std::cin >> numOne;
                std::cout << "2nd INPUT : ";
                std::cin >> numTwo;
                operation();
                std::cout << "Result : " << result << std::endl;
                std::cout << std::endl;
            } 
            else if(OPERATOR == '?') operation();
            else operation();
        
            getch();
            return OPERATOR;
        }
};

int main(void) {
    calculateClass cc = calculateClass();
    while (cc.input() != '?') cc.input();
    return 0;
}
