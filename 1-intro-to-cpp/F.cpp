#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        multiset<long long> min_set;
        vector<long long> arr_final;
        for (int i = 0; i<n; i++) {
            cin >> arr[i];
            min_set.insert(arr[i]);
        }

        for (long long element:arr) {
            auto it = min_set.begin();
            if (element == *it) {
                arr_final.push_back(element);
                min_set.erase(min_set.find(element));
            } else {
                min_set.erase(min_set.find(element));
                element += 1;
                arr_final.push_back(element);
                min_set.insert(element);
            }
        }
        sort(arr_final.begin(), arr_final.end());
        for (int i = 0; i<n; i++) {
            cout << arr_final[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}