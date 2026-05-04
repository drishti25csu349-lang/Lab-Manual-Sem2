#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    int evenSum = 0;
    int oddSum = 0;

    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            evenSum += numbers[i];
        } else {
            oddSum += numbers[i];
        }
    }

    cout << "\nEven numbers sum: " << evenSum << endl;
    cout << "Odd numbers sum : " << oddSum << endl;

    return 0;
}
