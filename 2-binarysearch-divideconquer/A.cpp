#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int lo = 1, hi = 1000;

        while (lo < hi) {
            int mid=(lo + hi)/2;
            cout << "? " << mid << " " << mid << '\n';
            cout.flush();

            int response;
            cin >> response;
            if (response == -1) return 0;
            if (response == mid*mid) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        cout << "! " << lo << "\n";
        cout.flush();
    }
    return 0;
}