//Write a program to Check whether a number is prime.

#include <iostream>
using namespace std;

bool isPrimeNaive(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;

    for (long long i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrimeNaive(n))
        cout << n << " is Prime\n";
    else
        cout << n << " is Not Prime\n";

    return 0;
}