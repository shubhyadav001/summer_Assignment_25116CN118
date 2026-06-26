//Write a program to Find missing number in array.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    cout << "Missing Number = " << total - sum;

    return 0;
}