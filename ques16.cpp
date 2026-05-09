#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    bool is_prime = num > 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            is_prime = false;
            break;
        }
    }
    if (is_prime) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;
    return 0;
}
