/*Create a C++ program that displays a menu with options:
1. Addition
2. Subtraction
3. Multiplication
4. Division
The user selects an option, inputs two numbers, 
and the program calls the corresponding function to display the result.*/
#include <iostream>
using namespace std;

// Functions for each operation
void add(double a, double b) {
    cout << "Result: " << a + b << endl;
}

void subtract(double a, double b) {
    cout << "Result: " << a - b << endl;
}

void multiply(double a, double b) {
    cout << "Result: " << a * b << endl;
}

void divide(double a, double b) {
    if (b != 0)
        cout << "Result: " << a / b << endl;
    else
        cout << "Error: Division by zero is not allowed." << endl;
}

int main() {
    int choice;
    double num1, num2;

    cout << "Calculator Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
