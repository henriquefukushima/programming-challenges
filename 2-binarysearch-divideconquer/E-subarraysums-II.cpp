#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

int main() {
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    map<ll, ll> m;
    ll sum = 0;
    ll count = 0;
    m[0]++;
    for (int i = 0; i<n; i++) {
        sum += arr[i];
        if (m[sum-x] != 0) {
            count += m[sum-x];
        }
        m[sum]++;
    }
    
    cout << count;
    return 0;
}   