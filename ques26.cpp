#include <iostream>
using namespace std;

int main() {
    float marks[5];
    float total = 0;
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }
    float percentage = (total / 500) * 100;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}

