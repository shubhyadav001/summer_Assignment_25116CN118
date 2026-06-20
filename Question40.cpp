//Write a program to Print character pyramid. 
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Print increasing characters
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }

        // Print decreasing characters
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}