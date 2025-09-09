/*week-5)Define a class Student with attributes: name, roll number, and marks of 3 subjects. 
Create a function to calculate the average and decide pass/fail (pass if average ≥ 40). 
Create objects for 3 students and display their results.*/
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    int marks[3];

    // Function to calculate average and determine pass/fail
    void displayResult() {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        double average = sum / 3.0;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Average: " << average << endl;
        if (average >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    Student students[3];

    // Input data for 3 students
    for (int i = 0; i < 3; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter roll number: ";
        cin >> students[i].rollNumber;
        cout << "Enter marks for 3 subjects: ";
        for (int j = 0; j < 3; j++) {
            cin >> students[i].marks[j];
        }
        cout << endl;
    }

    // Display results
    for (int i = 0; i < 3; i++) {
        students[i].displayResult();
    }

    return 0;
}
