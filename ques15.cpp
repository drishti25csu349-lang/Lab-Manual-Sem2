#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 0) return 0;
    double max_val, current;
    cin >> max_val;
    for (int i = 1; i < n; i++) {
        cin >> current;
        if (current > max_val) {
            max_val = current;
        }
    }
    cout << max_val << endl;
    return 0;
}

