// Write a program to Check Armstrong number. 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder;
    int result = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, 3);
        num /= 10;
    }

    if (result == originalNum)
        cout << originalNum << " is an Armstrong number.";
    else
        cout << originalNum << " is not an Armstrong number.";

    return 0;
}