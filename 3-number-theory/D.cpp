//Counting Divisors (tricky)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    
    vector<int> count_divisors(1e6+1,0);
    for (int i=1; i<=1e6; i++) {
        for (int j=i; j<=1e6; j+=i) {
            count_divisors[j]++;
        }
    }

    while (n--) {
        int x; cin >> x;
        cout << count_divisors[x] << "\n";
    }
    return 0;
}