#include <iostream>
using namespace std;

int main() {
    int lower, upper;
    cin >> lower >> upper;
    for (int num = lower; num <= upper; num++) {
        if (num > 1) {
            bool is_prime = true;
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime) cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
