//Write a program to Find longest word. 
#include <iostream>
using namespace std;

int main() {
    char str[100], longest[100];
    int maxLen = 0, start = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int len = i - start;

            if (len > maxLen) {
                maxLen = len;

                // Copy the longest word
                for (int j = 0; j < len; j++) {
                    longest[j] = str[start + j];
                }
                longest[len] = '\0';
            }

            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    cout << "Longest word: " << longest << endl;
    cout << "Length: " << maxLen << endl;

    return 0;
}