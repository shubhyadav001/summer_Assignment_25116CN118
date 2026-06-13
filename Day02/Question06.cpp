//Write a program to Reverse a number. 

#include <iostream>
using namespace std;

long long reverseNumber(long long n) {
    // Handle negative numbers
    bool isNegative = (n < 0);
    if (isNegative) n = -n;
    
    long long reversed = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n /= 10;
    }
    
    return isNegative ? -reversed : reversed;
}

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Reversed number of " << num << " = " << reverseNumber(num) << endl;
    
    return 0;
}