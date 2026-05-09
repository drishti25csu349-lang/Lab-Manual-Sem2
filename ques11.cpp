#include <iostream>
using namespace std;

int main() {
    int items;
    double price;
    cin >> items >> price;
    double total = items * price;
    if (items > 1000) {
        total = total * 0.90;
    }
    cout << total << endl;
    return 0;
}
