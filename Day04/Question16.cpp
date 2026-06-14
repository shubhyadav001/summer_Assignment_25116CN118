//Write a program to Check Armstrong number in a range .
#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        int temp = num, sum = 0, rem;

        while (temp > 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}