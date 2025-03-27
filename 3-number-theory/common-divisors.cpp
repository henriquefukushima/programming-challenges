#include <iostream>
#include <vector>
using namespace std;

const int maxn = 200005;
const int maxval = 1000005;
int f[maxval];

int main() {
    int n; cin >> n;

    for(int i=0; i < n; i++) {
        int x; cin >> x;
        for(int i = 1; i*i <= x; i++) {
            if(x%i ==0) {
                f[i]++;
                if(i*i != x) f[x/i]++;
            }
        }
    }
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        
    }
}