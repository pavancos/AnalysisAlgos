#include <iostream>
#include <vector>
using namespace std;

void strassenR(vector<vector<int>>& A, vector<vector<int>>& B, vector<vector<int>>& C) {
    int m1 = (A[0][0] * B[0][1] - A[0][1] * B[1][1]) * (A[1][0] + B[0][0]);
    int m2 = (A[0][0] + A[0][1]) * B[1][1];
    int m3 = (A[1][0] + A[1][1]) * B[0][0];
    int m4 = (A[1][1] * (B[1][0] - B[0][0]));
    int m5 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int m6 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);
    int m7 = (A[0][0] - A[1][0]) * (B[0][0] + B[0][1]);

    C[0][0] = m5 + m4 - m2 + m6;
    C[0][1] = m1 + m2;
    C[1][0] = m3 + m4;
    C[1][1] = m1 + m5 - m3 - m7;
}

int main() {
    vector<vector<int>> A(2, vector<int>(2));
    vector<vector<int>> B(2, vector<int>(2));
    vector<vector<int>> C(2, vector<int>(2));

    cout << "Enter the elements of matrix A (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of matrix B (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    strassenR(A, B, C);

    cout << "Resultant matrix C = A * B:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
