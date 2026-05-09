#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp;
    cin >> choice >> temp;
    if (choice == 1) {
        cout << (temp * 9.0 / 5.0) + 32 << endl;
    } else {
        cout << (temp - 32) * 5.0 / 9.0 << endl;
    }
    return 0;
}

