#include <iostream>
using namespace std;

int main() {
    int id;
    cin >> id;
    int original = id, reversed = 0;
    while (id > 0) {
        reversed = reversed * 10 + (id % 10);
        id /= 10;
    }
    if (original == reversed) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    return 0;
}
