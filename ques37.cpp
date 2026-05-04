#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n, p, q;

    cout << "Enter rows and columns for first matrix (m and n): ";
    cin >> m >> n;

    cout << "Enter rows and columns for second matrix (p and q): ";
    cin >> p >> q;

    if (n != p) {
        cout << "Matrix multiplication not valid! Columns of first matrix must equal rows of second matrix." << endl;
        return 0;
    }

    vector<vector<int>> A(m, vector<int>(n));
    vector<vector<int>> B(p, vector<int>(q));
    vector<vector<int>> C(m, vector<int>(q, 0));

    cout << "Enter elements of first matrix (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix (" << p << "x" << q << "):" << endl;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
      
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nResultant Matrix (" << m << "x" << q << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
