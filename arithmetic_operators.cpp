#include <iostream>
using namespace std;

int main() {
    int a, b;

    // User input
    cout << "Enter the first number (a): ";
    cin >> a;

    cout << "Enter the second number (b): ";
    cin >> b;

    // Arithmetic operations
    cout << "\n--- Arithmetic Operations ---\n";
    cout << "Addition (a + b): " << (a + b) << endl;
    cout << "Subtraction (a - b): " << (a - b) << endl;
    cout << "Multiplication (a * b): " << (a * b) << endl;

    // Handle divide by zero
    if (b != 0) {
        cout << "Division (a / b): " << (a / b) << endl;
        cout << "Modulus (a % b): " << (a % b) << endl;
    } else {
        cout << "Division and Modulus not possible (b is zero)." << endl;
    }

    return 0;
}
