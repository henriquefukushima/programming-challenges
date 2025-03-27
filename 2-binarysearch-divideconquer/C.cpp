#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, q; cin >> n >> k >> q;

    vector<vector<int> > a(n, vector<int>(k));
    for (int i=0; i<n; i++) {
        for (int j=0; j<k; j++) {
            cin >> a[i][j];
        }
    }

    vector<vector<int> > b(n, vector<int>(k));
    for (int j=0; j<k; j++) {
        b[0][j] = a[0][j];
        for (int i=1; i<n; i++) {
            b[i][j] = b[i-1][j] | a[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<k; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }

    while (q--) {
        int m; cin >> m;

        vector<tuple<int, char, int> > requirements(m);
        for (int i=0; i<m; i++) {
            int r, c; char o;
            cin >> r >> o >> c;
            r--;
            requirements[i] = {r, o, c};
        }

        int result;
    }
}