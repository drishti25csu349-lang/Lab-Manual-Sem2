#include <iostream>

using namespace std;

int main() {
    double stocks[5];

    cout << "Enter 5 stock values: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> stocks[i];
    }

    double firstLargest = stocks[0];
    double secondLargest = -1.0;

    for (int i = 1; i < 5; i++) {
        if (stocks[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = stocks[i];
        } else if (stocks[i] > secondLargest && stocks[i] != firstLargest) {
            secondLargest = stocks[i];
        }
    }


    cout << "Largest stock value       : " << firstLargest << endl;
    if (secondLargest != -1.0) {
        cout << "Second largest stock value: " << secondLargest << endl;
    } else {
        cout << "Second largest stock value: None (all values are identical)" << endl;
    }


    return 0;
}

