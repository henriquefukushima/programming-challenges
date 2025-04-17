//Modular Exponentiation
#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;


ll modpow(ll x, ll n, ll m) {
    if (n == 0) return 1%m;
    ll u = modpow(x,n/2,m);
    u = (u*u)%m;
    if (n%2 == 1) u = (u*x)%m;
return u; }

int main() {
    int n; cin >> n;
    while(n--) {
        ll a, b, c; cin >> a >> b >> c;
        ll m = 1e9 + 7;
        ll e = modpow(b, c, m - 1);
        ll result = modpow(a, e, m);
        cout << result << "\n";
    }
    return 0;
}