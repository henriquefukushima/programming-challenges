#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    int timeElapsed = 0;
    int inflatedBaloons = 0;

    vector<int> arr(N);
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end(), greater<int>());

    for (int x:arr) {
        inflatedBaloons+=x;
    }

    for (int x:arr) {
        if (inflatedBaloons <= S) {
            break;
        }
        else {
            timeElapsed++;
            inflatedBaloons-= (x - (x/2));
        }
    }

    cout << timeElapsed;
    return 0;
}