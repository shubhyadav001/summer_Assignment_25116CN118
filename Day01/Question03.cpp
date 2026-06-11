// Write a program to Find factorial of a number. 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;

    cout << n << "! = " << fact << endl;
    return 0;
}
