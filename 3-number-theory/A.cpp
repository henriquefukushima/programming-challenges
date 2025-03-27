// k-th divisor
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ll n, k; cin >> n >> k;

    vector<long long> divisors;
    for (ll i=1; i*i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n/i) {
                divisors.push_back(n/i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());
    
    if (divisors.size() >= k) {
        cout << divisors[k-1];
    } else {
        cout << -1;
    }
    return 0;
}