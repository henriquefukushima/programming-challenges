// Minimum LCM
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
typedef long long ll;
#define INF 0x3f3f3f3f

int main() {
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;

        vector<long long> divisors;
        for (ll i=1; i*i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n/i) {
                    divisors.push_back(n/i);
                }
            }
        }

        ll min_lcm = INF;
        ll best_a=0, best_b=0;
        for (ll i=0; i < divisors.size(); i++) {
            ll a = divisors[i];
            ll b = n-divisors[i];
            if (a*b==0) continue; 
            if ((a/gcd(a,b))*b < min_lcm) {
                best_a = a;
                best_b = b;
                min_lcm = (a/gcd(a,b))*b;
            }
        }
        cout << best_a << " " << best_b << "\n";
    }
    return 0;
}