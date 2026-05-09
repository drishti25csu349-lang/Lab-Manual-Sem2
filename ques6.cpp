#include <iostream>
using namespace std;

int main() {
    int num_employees;
    cin >> num_employees;
    for (int i = 0; i < num_employees; i++) {
        double basic;
        cin >> basic;
        double bonus = basic * 0.12;
        double net = basic + bonus;
        cout << bonus << " " << net << endl;
    }
    return 0;
}
