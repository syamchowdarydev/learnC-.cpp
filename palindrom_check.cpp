/*week-5)Take a number from the user, reverse it using a loop, 
and check if it is a palindrome number (e.g., 121 → Palindrome, 123 → Not Palindrome).*/
#include <iostream>
using namespace std;

int main() {
    int number, original, reversed = 0, digit;
    cout << "Enter a number: ";
    cin >> number;

    original = number;

    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }

    cout << "Reversed number: " << reversed << endl;

    if (original == reversed)
        cout << original << " is a Palindrome." << endl;
    else
        cout << original << " is Not a Palindrome." << endl;

    return 0;
}
