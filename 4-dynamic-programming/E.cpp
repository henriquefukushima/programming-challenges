// Test of Love (Codeforces)
#include <bits/stdc++.h>
using namespace std;

static const int INF = 1e9;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        string a;
        cin >> a;
        a = "L" + a + "L"; //banks da esquerda e direita
        
        vector<int> nextSurf(n+2), swimDist(n+2);
        nextSurf[n+1] = n+1;
        swimDist[n+1] = 0;
        for(int i=n; i >= 0; --i){
            if(i==0 or a[i]=='L'){
            nextSurf[i] = i;
            swimDist[i] = 0;
            } else if(a[i]=='C'){
                nextSurf[i] = -1;
                swimDist[i] = INF;
            } else {
                int nxt = nextSurf[i+1];
                if(nxt < 0){
                    nextSurf[i] = -1;
                    swimDist[i] = INF;
                } else {
                    nextSurf[i] = nxt;
                    swimDist[i] = nxt-i;
                }
            }
        }
        
        vector<int> bestSwim(n+2, INF);
        bestSwim[0] = 0;
        
        for(int pos = 0; pos <= n; pos++){
            int used = bestSwim[pos];
            if(used > k) continue;
            
            for(int d=1; d<=m; d++){
                int j = pos + d;
                if(j > n+1) break;
                if(j <= n and a[j]=='C') continue;
                int surf = nextSurf[j];
                if(surf<0) continue;
                int sw = used + swimDist[j];
                if(sw < bestSwim[surf]){
                    bestSwim[surf] = sw;
                }
            }
        }
        cout << (bestSwim[n+1] <= k ? "YES\n" : "NO\n");
    }
    return 0;
}
