// Minimum LCM
#include <iostream>
#include <numeric>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll a=1, b=n-1;
        ll gcd_val = gcd(a,b);
        ll min_lcm = (a*b)/gcd(a,b);
        ll best_a=a, best_b=b;
        for (ll i=2; i<=n/2; i++) {
            a = i;
            b = n-i;
            if ((a*b)/gcd(a,b) < min_lcm) {
                best_a = a;
                best_b = b;
            }
        }
        cout << best_a << " " << best_b << "\n";
    }
    return 0;
}