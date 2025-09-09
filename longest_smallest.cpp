/* week-5)Write a C++ program that takes 10 integers from the user, 
stores them in an array, and prints the largest and smallest numbers.*/
#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    cout << "Enter 10 integers:\n";
    
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    int largest = numbers[0];
    int smallest = numbers[0];

    for (int i = 1; i < 10; i++) {
        if (numbers[i] > largest)
            largest = numbers[i];
        if (numbers[i] < smallest)
            smallest = numbers[i];
    }

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}
