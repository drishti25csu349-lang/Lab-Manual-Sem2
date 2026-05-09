#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;
    int perfect_sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) perfect_sum += i;
    }
    int temp = num, armstrong_sum = 0, digits = 0;
    while (temp > 0) { digits++; temp /= 10; }
    temp = num;
    while (temp > 0) {
        armstrong_sum += pow(temp % 10, digits);
        temp /= 10;
    }
    if (perfect_sum == num) cout << "Perfect" << endl;
    if (armstrong_sum == num) cout << "Armstrong" << endl;
    return 0;
}
