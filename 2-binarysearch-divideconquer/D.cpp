#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;
    vector<long long> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());

    long long lo=0, hi=t*arr[0];

    while (lo < hi) {
        long long mid = (lo+hi)/2;
        long long sum = 0;
        for (int i=0; i<n; i++) {
            sum += mid/arr[i];
        }
        if (sum >= t) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    cout << lo;
    return 0;
}