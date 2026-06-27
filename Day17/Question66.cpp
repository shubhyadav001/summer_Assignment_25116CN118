//Write a program to Union of arrays. 
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int arr1[n1];

    cout << "Enter first array elements: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;

    int arr2[n2];

    cout << "Enter second array elements: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    cout << "Union of arrays: ";

    // Print unique elements of first array
    for (int i = 0; i < n1; i++) {
        bool duplicate = false;

        for (int j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
            cout << arr1[i] << " ";
    }

    // Print elements of second array not present in first
    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            bool duplicate = false;

            for (int k = 0; k < i; k++) {
                if (arr2[i] == arr2[k]) {
                    duplicate = true;
                    break;
                }
            }

            if (!duplicate)
                cout << arr2[i] << " ";
        }
    }

    return 0;
}