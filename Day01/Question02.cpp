// Question 2 Write a program to Print multiplication table of a given number.

#include <iostream>
using namespace std;

int main() {
    int num, start = 1, end = 10;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter range (start end): ";
    cin >> start >> end;

    cout << "\nMultiplication Table of " << num << ":\n";
    cout << "----------------------------\n";

    for (int i = start; i <= end; i++) {
        cout << num << " x " << i << " = " << num * i << "\n";
    }

    return 0;
}