//Write a program to Count digits in a number. 
#include <iostream>
using namespace std;

int countDigits(long long n) {
    if (n == 0) return 1;
    if (n < 0) n = -n;  // handle negatives

    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Digit count = " << countDigits(n) << endl;
    return 0;
}