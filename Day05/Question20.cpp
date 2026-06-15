//Write a program to Find largest prime factor. 
#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    long long largestPrimeFactor = 0;

    while (num % 2 == 0) {
        largestPrimeFactor = 2;
        num /= 2;
    }

    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }

    if (num > 2)
        largestPrimeFactor = num;

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}