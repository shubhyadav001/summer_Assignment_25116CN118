//Write a program to Reverse a string. 
#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = 0;

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    cout << endl;

    return 0;
}