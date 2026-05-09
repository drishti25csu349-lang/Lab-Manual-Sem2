#include <iostream>
#include <string>
using namespace std;

int main() {
    int lower = 10, upper = 50;
    for (int num = lower; num <= upper; num++) {
        if (num > 1) {
            bool isPrime = true;
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                cout << num << " ";
            }
        }
    }
    cout << endl;

    string pass = "SecureP@ss1";
    bool has_upper = false, has_lower = false, has_digit = false, has_special = false;
    for (int i = 0; i < pass.length(); i++) {
        char c = pass[i];
        if (c >= 'A' && c <= 'Z') has_upper = true;
        else if (c >= 'a' && c <= 'z') has_lower = true;
        else if (c >= '0' && c <= '9') has_digit = true;
        else if (c == '@' || c == '#' || c == '$' || c == '%' || c == '!' || c == '&' || c == '*') has_special = true;
    }
    if (has_upper && has_lower && has_digit && has_special) {
        cout << "Valid Password" << endl;
    } else {
        cout << "Invalid Password" << endl;
    }
    return 0;
}
