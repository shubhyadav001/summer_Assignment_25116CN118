//Write a program to Find product of digits. 

#include <iostream>
using namespace std;

long long productOfDigits(long long n) {
    // Handle negative numbers
    if (n < 0) n = -n;
    
    // Handle 0 explicitly
    if (n == 0) return 0;
    
    long long product = 1;
    while (n > 0) {
        int digit = n % 10;
        
        // If any digit is 0, product becomes 0
        if (digit == 0) return 0;
        
        product *= digit;
        n /= 10;
    }
    return product;
}

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Product of digits of " << num << " = " << productOfDigits(num) << endl;
    
    return 0;
}