//Write a program to Find sum of digits of a number.

#include <iostream>
using namespace std;

int sumOfDigits(long long n) {
    // Handle negative numbers
    if (n < 0) n = -n;
    
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Sum of digits of " << num << " = " << sumOfDigits(num) << endl;
    
    return 0;
}