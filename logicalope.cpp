#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for b: ";
    cin >> b;

    // Logical AND operator
    cout << "a && b: " << (a && b) << endl;

    // Logical OR operator
    cout << "a // b:" << (a || b) << endl;

   // Logical NOT
    cout << "!a = " << (!a) << endl;
    cout << "!b = " << (!b) << endl;
    return 0;

}
