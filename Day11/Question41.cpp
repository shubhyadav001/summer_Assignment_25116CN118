//Write a program to Write function to find sum of two numbers.



#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum = " << sum(num1, num2);

    return 0;
}