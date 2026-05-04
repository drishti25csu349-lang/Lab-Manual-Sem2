#include <iostream>

using namespace std;

int main() {
    double temperatures[30];

    cout << "Enter daily temperatures for 30 days: " << endl;
    for (int i = 0; i < 30; i++) {
        cin >> temperatures[i];
    }

    double minTemp = temperatures[0];

    for (int i = 1; i < 30; i++) {
        if (temperatures[i] < minTemp) {
            minTemp = temperatures[i];
        }
    }

    cout << "\nMinimum temperature for the month: " << minTemp << " degrees" << endl;

    return 0;
}

