#include <stdio.h>
#include <conio.h>

void EVEN_ODD(void); 

int main(void) {
    EVEN_ODD();
    return 0;
}

void EVEN_ODD(void) {
    int input = 0;

    printf("INPUT NUMBER :- ");
    scanf("%d", &input);

    if(input % 2 == 0)
        printf("\nTHE NUMBER (%d) IS EVEN", input);
    else printf("\nTHE NUMBER (%d) IS ODD", input);

    getch();
} 


// What is Programming?
// ---------------------
// -    to solve a problem using a computer, you must express the solution to 
//      the problem in terms of the instructions of the particular computer. 
// -    a computer program is just a collection of the instructions of the 
//      instructions necessary to solve a specific problem. 
// -    the approach or method that is used to solve the problem is known as
//      an algorithm 

// -    for example, if you want to develop a program that tests if a number 
//      is odd or even - 
// -    the set of statements that solves the problem becomes the program
// -    the method that is used to test if the number is even or odd is the 
//      algorithm   