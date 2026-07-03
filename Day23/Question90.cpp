//Write a program to Find first repeating character.
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int freq[256] = {0};

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find the first repeating character
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] > 1) {
            cout << "First repeating character: " << str[i] << endl;
            return 0;
        }
    }

    cout << "No repeating character found." << endl;

    return 0;
}
