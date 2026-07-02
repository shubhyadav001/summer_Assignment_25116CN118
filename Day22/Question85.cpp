//Write a program to Check palindrome string. 
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}