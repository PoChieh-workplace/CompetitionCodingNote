#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <string>

using namespace std;

struct Matrix {
    int rows, cols;
    Matrix(int r = 0, int c = 0) : rows(r), cols(c) {}
};

int calculateMultiplications(const Matrix& a, const Matrix& b) {
    // Assuming matrix multiplication is possible, this is the number of operations required.
    return a.rows * a.cols * b.cols;
}

int main() {
    int n;
    cin >> n;
    
    unordered_map<char, Matrix> matrices;

    // Reading matrix dimensions
    for (int i = 0; i < n; ++i) {
        char matrixName;
        int rows, cols;
        cin >> matrixName >> rows >> cols;
        matrices[matrixName] = Matrix(rows, cols);
    }

    cin.ignore();  // To ignore the newline character after reading integers

    string line;
    while (getline(cin, line) && !line.empty()) {
        stack<Matrix> s;
        bool error = false;
        int result = 0;

        for (char ch : line) {
            if (ch == '(' || ch == ' ') {
                continue;
            } else if (ch == ')') {
                if (s.size() < 2) {
                    error = true;
                    break;
                }
                Matrix m2 = s.top();
                s.pop();
                Matrix m1 = s.top();
                s.pop();

                // Check if multiplication is possible
                if (m1.cols != m2.rows) {
                    error = true;
                    break;
                }

                result += calculateMultiplications(m1, m2);
                s.push(Matrix(m1.rows, m2.cols));
            } else {
                s.push(matrices[ch]);
            }
        }

        if (error || s.size() != 1) {
            cout << "error" << endl;
        } else {
            cout << result << endl;
        }
    }

    return 0;
}
