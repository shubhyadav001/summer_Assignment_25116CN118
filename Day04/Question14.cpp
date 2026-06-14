//Write a program to Find nth Fibonacci term. 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int first = 0, second = 1, next;

    if (n == 0)
        cout << "Nth Fibonacci term = " << first;
    else if (n == 1)
        cout << "Nth Fibonacci term = " << second;
    else {
        for (int i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        cout << "Nth Fibonacci term = " << second;
    }

    return 0;
}