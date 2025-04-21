#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    vector<int> h(N);
    for (int i=0; i<N; i++) cin >> h[i];

    vector<int> costs(N, 1e9);
    costs[0] = 0;

    for (int i=1; i<N; i++) {
        for (int j=max(0, i-K); j<i; j++) {
            costs[i] = min(costs[i], costs[j] + abs(h[i] - h[j]));
        }
    }

    cout << "Minimum total cost to reach stone " << N  << " is " << costs[N - 1] << "\n";

    return 0;
}
