//Write a program to Check whether a number is palindrome.

#include <iostream>
using namespace std;
bool isPalindromeMath(long long n) {
    // Negative numbers are not palindromes
    if (n < 0) return false;
    
    // Single digit numbers are always palindromes
    if (n < 10) return true;
    
    // Numbers ending with 0 (except 0 itself) are not palindromes
    if (n % 10 == 0 && n != 0) return false;
    
    long long original = n;
    long long reversed = 0;
    
    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n /= 10;
    }
    
    return original == reversed;
}