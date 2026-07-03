//Write a program to Check anagram strings. 
#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // Count characters of first string
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(int)str1[i]]++;
    }

    // Subtract characters of second string
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(int)str2[i]]--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "The strings are not anagrams." << endl;
            return 0;
        }
    }

    cout << "The strings are anagrams." << endl;

    return 0;
}