#include <iostream>

using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int lo=1, hi=1000;

        while (lo < hi) {
            ll mid1 = lo + (hi-lo)/3;
            ll mid2 = hi - (hi-lo)/3;
            cout << "? " << mid1 << " " << mid2 << '\n';
            cout.flush();
            int response;
            cin >> response;
            if (response == -1) return 0;
            if (response == mid1*mid2) {
                lo = mid2 + 1;
            } else if (response == (mid1+1)*(mid2+1)) {
                hi = mid1;
            } else {
                lo = mid1 + 1;
                hi = mid2;
            }
        }
        cout << "! " << lo << "\n";
        cout.flush();
    }
    return 0;
}