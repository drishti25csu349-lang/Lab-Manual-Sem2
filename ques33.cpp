#include <iostream>

using namespace std;

int main() {
    int marks[3][5];

    for (int i = 0; i < 3; i++) {
        cout << "Enter marks in 5 subjects for student " << i + 1 << ":" << endl;
        for (int j = 0; j < 5; j++) {
            cin >> marks[i][j];
        }
    }

  
    cout << "Marks in 2nd subject of 1st student: " << marks[0][1] << endl;
    cout << "Marks in 5th subject of 3rd student: " << marks[2][4] << endl;


    return 0;
}
