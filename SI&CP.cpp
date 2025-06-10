#include <iostream>
#include <cmath> // For using pow() function
using namespace std;

// Function to calculate Simple Interest
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

// Function to calculate Compound Interest
float calculateCompoundInterest(float principal, float rate, float time) {
    return principal * pow((1 + rate / 100), time) - principal;
}

int main() {
    float principal, rate, time;

    // Input
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate (in %): ";
    cin >> rate;

    cout << "Enter the time (in years): ";
    cin >> time;

    // Calculations
    float simpleInterest = calculateSimpleInterest(principal, rate, time);
    float compoundInterest = calculateCompoundInterest(principal, rate, time);

    // Output
    cout << "\nSimple Interest = " << simpleInterest << endl;
    cout << "Compound Interest = " << compoundInterest << endl;

    return 0;
}
