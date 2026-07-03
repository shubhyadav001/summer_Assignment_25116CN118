//Write a program to Find maximum occurring character.
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int freq[256] = {0};
    char maxChar;
    int maxFreq = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find maximum occurring character
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] > maxFreq) {
            maxFreq = freq[(int)str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}