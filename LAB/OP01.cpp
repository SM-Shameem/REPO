#include <iostream>
#include <string>
#include <cstdlib>

using namespace std; 

class employee_info {
    protected: 
    char name[20];
    int  age;
    char address[25];
    char contact[12];
    char e_mail[25]; 
};

class employee : public employee_info {
    private: 
    int   serial = 0; 
    char  id[10];
    char  post[20];
    float salary = 0.0;

    public:
    void getData(void);
    void showData(void);
};


void employee::getData(void) {
    // cin.ignore - is used just between the (integer and string)
    // cin.getline - is used to take a string with with-space
    
    cout << "Serial : "; cin >> serial;
    cin.ignore();  
    cout << "ID     : "; cin.getline(id, 10);    
    cout << "Post   : "; cin.getline(post, 20);
    cout << "Salary : "; cin >> salary; 
    cin.ignore();
    cout << "Name   : "; cin.getline(name, 20);
    cout << "Age    : "; cin >> age; 
    cin.ignore();
    cout << "Address: "; cin.getline(address, 25);
    cout << "Contact: "; cin.getline(contact, 12);
    cout << "E-Mail : "; cin.getline(e_mail, 25);
}

void employee::showData(void) {
    cout << "Serial  : " << serial << endl;
    cout << "ID      : " << id << endl;
    cout << "Name    : " << name << endl; 
    cout << "Age     : " << age << endl;
    cout << "Address : " << address << endl; 
    cout << "Contact : " << contact << endl;
    cout << "E-Mail  : " << e_mail << endl; 
    cout << "Post    : " << post << endl; 
    cout << "Salary  : " << salary << endl; 
}

int main(void) {
    int option = 0;
    int optionKey = 0;
    int number = 0;
    int count = 0;
    int data = 0;
    employee* emp = nullptr;

    do {

        // option active or invalid to exit option 
        // option active to new active option 
        // option invalid to new active option
        if (option == optionKey) {
            option = 0;
            number = 0;
            count = 0;
            optionKey = 0;
        } 
        
        if (option == 0) {
            system("cls");
            cout << "Employer Information ........" << endl; 
            cout << "[1] - New Employer" << endl;
            cout << "[2] - Show Data" << endl;
            cout << "[0] - Exit" << endl;
            cout << endl;
            cout << "Select : ";
            cin >> option;
        }
        else if (option == 1) {
            if (number == 0) {
                cout << endl;
                cout << "Number of Entry (Range 10): ";
                cin >> number; 
                emp = new employee[number];            
            } 
            else if (number > 0 && number <= 10 && number != count) {
                system("cls");
                cout << "----------------------------------------" << endl;
                cout << "DATA INDEX - " << count + 1 << endl;
                cout << "----------------------------------------" << endl;
                emp[count].getData();
                count++;
                if (number == count) {
                    optionKey = option;
                    data += count;
                    cout << endl;
                    cout << "All Entry Completed ...." << endl;
                    cin.ignore();
                    cin.get();
                }
            }
            else if (count == 0) {
                optionKey = option;
                cout << endl; 
                cout << "Invalid Range ......";
                cin.ignore();
                cin.get();   
            } 
        }
        else if (option == 2) {
            system("cls");
            cout << "----------------------------------------" << endl;
            cout << "DATA INDEX - " << count + 1 << endl;
            cout << "----------------------------------------" << endl;
            emp[count].showData();
            count++;
            if (data == count) {
                optionKey = option;
                cout << endl;
                cout << "Completed ...." << endl;
                cin.ignore();
                cin.get();
            }
        } 
        else {
            optionKey = option;
            cout << endl; 
            cout << "Invalid Option ......";
            cin.ignore();
            cin.get();;
        }
    } while(option != 0);

    delete[] emp;
    return 0;
}