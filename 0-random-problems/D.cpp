#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > matrix(n, vector<int>(m));
    //Receive Matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    long long subsets = 0;

    // Process rows
    for (int i = 0; i < n; i++) {
        int sum_line = 0;
        for (int j = 0; j < m; j++) {
            sum_line += matrix[i][j];
        }

        int line_zeros = m - sum_line;
        
        subsets += (1LL << sum_line) - 1;
        subsets += (1LL << line_zeros) -1;
    }
    for (int j = 0; j < m; j++) {
        int sum_column = 0;
        for (int i = 0; i < n; i++) {
            sum_column += matrix[i][j];
        }
        int column_zeros = n - sum_column;

        subsets += ((1LL << sum_column) - 1);
        subsets += ((1LL << column_zeros) -1);
    }
    subsets -= m*n;
    cout << subsets;
    return 0;
}