// Three Strings (Codeforces)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1e9;
static int dp[1001][1001];

int main(){
    int t; cin >> t;
    while(t--){
        string a, b, c;
        cin >> a >> b >> c;
        
        int n = a.size(), m = b.size();
        
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){
                dp[i][j] = INF;
            }
        }
        dp[0][0] = 0;
        
        for(int i = 1; i <= n; i++){
            dp[i][0] = dp[i-1][0] + (a[i-1] != c[i-1]); 
        }
        
        for(int j = 1; j <= m; j++){
            dp[0][j] = dp[0][j-1] + (b[j-1] != c[j-1]);
        }
        

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                int idx = i + j - 1;
                int cost_a = dp[i-1][j] + (a[i-1] != c[idx]);
                int cost_b = dp[i][j-1] + (b[j-1] != c[idx]);
                dp[i][j] = min(cost_a, cost_b);
            }
        }
        
        cout << dp[n][m] << "\n";
    }
    return 0;
}
