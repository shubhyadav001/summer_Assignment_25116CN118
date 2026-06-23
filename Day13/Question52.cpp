//Write a program to Count even and odd elements.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int even = 0, odd = 0;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even Elements = " << even << endl;
    cout << "Odd Elements = " << odd << endl;

    return 0;
}