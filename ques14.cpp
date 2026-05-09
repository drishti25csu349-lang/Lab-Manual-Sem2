#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        double num1, num2;
        char op;
        cin >> num1 >> op >> num2;
        switch (op) {
            case '+': cout << num1 + num2 << endl; break;
            case '-': cout << num1 - num2 << endl; break;
            case '*': cout << num1 * num2 << endl; break;
            case '/': cout << (num2 != 0 ? num1 / num2 : 0) << endl; break;
        }
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
