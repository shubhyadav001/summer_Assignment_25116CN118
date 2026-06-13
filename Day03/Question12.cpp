//Write a program to Find LCM of two numbers. 
#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    x = a;
    y = b;

    // Find GCD
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int gcd = x;
    int lcm = (a * b) / gcd;

    cout << "LCM = " << lcm;

    return 0;
}