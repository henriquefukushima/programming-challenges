#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    multiset<long long> inventory;

    for (int i=0; i<n; i++) {
        long long sneakerSize;
        cin >> sneakerSize;
        inventory.insert(sneakerSize);
    }
    
    while (q--) {
        long long clientSize;
        cin >> clientSize;

        auto it = inventory.lower_bound(clientSize);

        if (it == inventory.end()) {
            cout << -1 << '\n';
        } else {
            cout << *it << '\n';
            inventory.erase(it);
        }
    }  
    return 0; 
}