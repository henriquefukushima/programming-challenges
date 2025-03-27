#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int q;
    cin >> q;
    while (q--) {
        long long mi;
        cin >> mi;

        if (arr[0] > mi) {
            cout << 0 << "\n";
        } else if (arr[n-1] <= mi) {
            cout << n << "\n";
        } else {
            int lo=0, hi=n-1;
            while (lo < hi) {
                int mid = (lo+hi)/2;
                if (arr[mid] <= mi) {
                    lo = mid + 1;
                } else {
                    hi = mid;
                }
            }
            cout << lo << '\n';
        }
    }
    return 0;
}