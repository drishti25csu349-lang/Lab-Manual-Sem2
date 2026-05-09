#include <iostream>
using namespace std;

int main() {
    int item_no;
    double qty, price;
    cin >> item_no >> qty >> price;
    double amount = qty * price;
    double final_bill = amount * 0.80;
    cout << final_bill << endl;
    return 0;
}

