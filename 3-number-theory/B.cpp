#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> count_fatores(n+1, 0);

    for (int i=2; i<=n; i++) {
        if (count_fatores[i] == 0) {
            for (int j=i; j <= n; j+=i) {
                count_fatores[j]++;
            }
        }
    }
    
    int count_almost_primes=0;
    for (int i=2; i<=n; i++) {
        if (count_fatores[i] == 2) count_almost_primes++;
    }
    cout << count_almost_primes;
    return 0;
}