#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double disc = b * b - 4 * a * c;
    if (disc > 0) {
        double r1 = (-b + sqrt(disc)) / (2 * a);
        double r2 = (-b - sqrt(disc)) / (2 * a);
        cout << r1 << " " << r2 << endl;
    } else if (disc == 0) {
        double r = -b / (2 * a);
        cout << r << endl;
    } else {
        double real = -b / (2 * a);
        double imag = sqrt(-disc) / (2 * a);
        cout << real << "+" << imag << "i " << real << "-" << imag << "i" << endl;
    }
    return 0;
}
