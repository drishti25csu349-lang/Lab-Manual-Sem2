#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch >= '0' && ch <= '9') {
        cout << "Number" << endl;
    } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        char low = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
        if (low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u') {
            cout << "Vowel" << endl;
        } else {
            cout << "Consonant" << endl;
        }
    }
    return 0;
}
