//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 1e18;

int main(){
    int N; ll W;
    cin >> N >> W;
    
    vector<ll> w(N), v(N);
    ll sum_v = 0;
    for(int i = 0; i < N; i++){
        cin >> w[i] >> v[i];
        sum_v += v[i]; 
    }
    
    vector<ll> dp(sum_v+1, INF);
    dp[0] = 0;
    
    for(int i = 0; i < N; i++){
        for(ll val = sum_v; val >= v[i]; val--){
            dp[val] = min(dp[val], dp[val - v[i]] + w[i]);
        }
    }
    
    ll max_v = 0;
    for(ll val = sum_v; val >= 0; val--){
        if(dp[val] <= W){
            max_v = val;
            break;
        }
    }

    cout << max_v << "\n";
    return 0;
}
