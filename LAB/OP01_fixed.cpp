#include <iostream>
#include <vector>
#include <string>
#include <limits> // Required for numeric_limits
#include <iomanip> // For setw and left alignment

// Use standard namespace for cleaner code
using namespace std;

// --- Best Practice: Use std::string for safety and convenience ---
class EmployeeInfo {
protected:
    string name;
    int age;
    string address;
    string contact;
    string email;
};

class Employee : public EmployeeInfo {
private:
    int serial;
    string id;
    string post;
    double salary; // Use double for better precision with currency

public:
    // Default constructor
    Employee() : serial(0), salary(0.0) {}

    void getData();
    void showData() const; // Use const as this function doesn't modify the object
};

// --- Helper function to handle invalid input ---
void clearInputBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// --- Robust input function ---
void Employee::getData() {
    cout << "----------------------------------------" << endl;
    cout << "Enter details for new employee:" << endl;
    cout << "----------------------------------------" << endl;

    // Loop until valid integer input is received
    while (true) {
        cout << "Serial : ";
        if (cin >> serial) {
            clearInputBuffer();
            break;
        } else {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear(); // Clear error flags
            clearInputBuffer(); // Discard bad input
        }
    }

    cout << "ID     : ";
    getline(cin, id);

    cout << "Name   : ";
    getline(cin, name);

    while (true) {
        cout << "Age    : ";
        if (cin >> age) {
            clearInputBuffer();
            break;
        } else {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            clearInputBuffer();
        }
    }

    cout << "Address: ";
    getline(cin, address);

    cout << "Contact: ";
    getline(cin, contact);

    cout << "E-Mail : ";
    getline(cin, email);

    cout << "Post   : ";
    getline(cin, post);

    while (true) {
        cout << "Salary : ";
        if (cin >> salary) {
            clearInputBuffer();
            break;
        } else {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            clearInputBuffer();
        }
    }
    cout << "----------------------------------------" << endl;
}

void Employee::showData() const {
    cout << "| " << left << setw(7) << serial
        << "| " << left << setw(5) << id
        << "| " << left << setw(20) << name
        << "| " << left << setw(5) << age
        << "| " << left << setw(25) << address
        << "| " << left << setw(15) << contact
        << "| " << left << setw(25) << email
        << "| " << left << setw(15) << post
        << "| " << right << fixed << setprecision(2) << setw(10) << salary << " |" << endl;
}

// --- Functions to make main() cleaner ---
void displayMenu() {
    cout << "\n===== Employee Information System =====" << endl;
    cout << "[1] - Add New Employee" << endl;
    cout << "[2] - Show All Employee Data" << endl;
    cout << "[0] - Exit" << endl;
    cout << "=====================================" << endl;
    cout << "Select an option: ";
}

void addNewEmployee(vector<Employee>& employees) {
    system("cls");
    Employee newEmp;
    newEmp.getData();
    employees.push_back(newEmp);
    cout << "\nEmployee added successfully!" << endl;
    cout << "Press Enter to continue...";
    cin.get();
}

void showAllEmployees(const vector<Employee>& employees) {
    system("cls");
    if (employees.empty()) {
        cout << "No employee data found. Please add an employee first." << endl;
    } else {
        cout << "Showing data for " << employees.size() << " employee(s):\n" << endl;
        
        // Print table top border
        cout << "+---------+-------+----------------------+-------+-------------------------+-----------------+-------------------------+-----------------+------------+" << endl;

        // Print table header
        cout << "| " << left << setw(7) << "Serial"
            << "| " << left << setw(5) << "ID"
            << "| " << left << setw(20) << "Name"
            << "| " << left << setw(5) << "Age"
            << "| " << left << setw(25) << "Address"
            << "| " << left << setw(15) << "Contact"
            << "| " << left << setw(25) << "E-Mail"
            << "| " << left << setw(15) << "Post"
            << "| " << right << setw(10) << "Salary" << " |" << endl;

        // Print header separator
        cout << "+---------+-------+----------------------+-------+-------------------------+-----------------+-------------------------+-----------------+------------+" << endl;

        for (const auto& emp : employees) {
            emp.showData();
        }

        // Print table bottom border
        cout << "+---------+-------+----------------------+-------+-------------------------+-----------------+-------------------------+-----------------+------------+" << endl;
    }
    cout << "\nPress Enter to continue...";
    cin.get();
}


int main() {
    // --- Best Practice: Use std::vector for dynamic arrays ---
    // It handles memory automatically, preventing leaks.
    vector<Employee> employees;
    int option = -1;

    do {
        system("cls");
        displayMenu();

        // --- Robust input validation ---
        if (!(cin >> option)) {
            cout << "Invalid input. Please enter a number (0, 1, or 2)." << endl;
            cin.clear(); // Clear the error flag
            clearInputBuffer(); // Discard the invalid input
            cout << "Press Enter to continue...";
            cin.get();
            continue; // Skip the rest of the loop
        }
        
        // It's good practice to clear the buffer after reading a number
        // if you plan to use getline() later.
        clearInputBuffer();

        switch (option) {
            case 1:
                addNewEmployee(employees);
                break;
            case 2:
                showAllEmployees(employees);
                break;
            case 0:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                cout << "Press Enter to continue...";
                cin.get();
                break;
        }

    } while (option != 0);

    return 0;
}