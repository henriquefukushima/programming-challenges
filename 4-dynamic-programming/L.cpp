//Grid Walk
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1e9;
static ll dp[2001][2001];

int main(){
    int n, a, b; cin >> n >> a >> b;
    
    vector<ll> f(n+1), g(n+1);
    for(int i=1; i<=n; i++){
        f[i] = gcd(i,a);
        g[i] = gcd(i,b);
    }
    
    dp[1][1] = f[1] + g[1];
    
    for(int i=2; i<=n; i++){
        dp[i][1] = dp[i-1][1] + f[i] + g[1];
    }
    
    for(int j = 2; j <= n; j++){
        dp[1][j] = dp[1][j-1] + f[1] + g[j];
    }
    
    for(int i = 2; i <= n; i++){
        for(int j = 2; j <= n; j++){
            ll cost = f[i] + g[j];
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + cost;
        }
    }

    cout << dp[n][n] << "\n";
    return 0;

}
