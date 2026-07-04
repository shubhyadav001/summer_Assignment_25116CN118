//Write a program to Check string rotation.  
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], temp[200];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        cout << "The strings are not rotations." << endl;
        return 0;
    }

    // Concatenate first string with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if second string is a substring
    if (strstr(temp, str2))
        cout << "The strings are rotations of each other." << endl;
    else
        cout << "The strings are not rotations." << endl;

    return 0;
}