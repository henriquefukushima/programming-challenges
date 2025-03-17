#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        a[i] = e;
    }

    //count each element
    unordered_map<string, int> dict;
    for (int i = 0; i < n; i++) {
        string key = to_string(a[i]);
        if (dict.count(key)) {
            dict[key]++;
        } else {
            dict[key] = 1;
        }
    }

    //iterate again and create new vector
    int lenght = dict.size();
    vector<int> v;
    for (int i = 0; i < n; i++) {
        string key = to_string(a[i]);
        if (dict[key] == 1) {
            v.push_back(a[i]);
        } else {
            dict[key]--;
        }
    }

    //print number of elements
    cout << v.size() << "\n";
    // print vector
    for (int x : v) {
        cout << x << " ";
    }
    return 0;
}