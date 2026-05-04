#include <iostream>

using namespace std;

int main() {
    double salaries[10];
    double totalSalary = 0.0;

    cout << "Enter salaries of 10 employees: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> salaries[i];
        totalSalary += salaries[i];
    }

    double averageSalary = totalSalary / 10;

    cout << "\nTotal Salary  : " << totalSalary << endl;
    cout << "Average Salary: " << averageSalary << endl;

    return 0;
}
