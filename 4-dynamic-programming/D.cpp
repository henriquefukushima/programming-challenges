// Grid 1
#include <bits/stdc++.h>
using namespace std;

static const int MOD = 1000000007;

int main() {
    int H, W; cin >> H >> W;
    
    vector<string> grid(H);
    for (int i=0; i<H; i++){
        cin >> grid[i];
    }
    
    vector<vector<int>> dp(H, vector<int>(W,0));
    
    if (grid[0][0]=='.') dp[0][0] = 1;
    
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            if(grid[i][j]=='#') {
                dp[i][j] = 0;
                continue;
            } 
            if(i>0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            if(j>0) dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
        }
    }
    
    cout << dp[H-1][W-1] << "\n";
    return 0;
}