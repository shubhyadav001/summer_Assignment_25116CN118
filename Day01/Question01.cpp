#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter number : ";
    cin >> num;

    if (num < 1) {
        cout << "Given number is not a natural number";
    } 
    else {
        for (int i = 1; i <= num; i++) {
            sum = sum + i;
        }

        cout << "Sum of " << num << " natural number is : " << sum;
    }

    return 0;
}