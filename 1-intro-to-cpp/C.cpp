#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    long long N, S;
    cin >> N >> S;
    int timeElapsed = 0;
    long long inflatedBaloons = 0;
    priority_queue<int> pq;

    for (int i=0; i<N; i++) {
        long long x;
        cin >> x;
        inflatedBaloons += x;
        pq.push(x);
    }

    while (inflatedBaloons > S && !pq.empty()) {
        long long x = pq.top();
        pq.pop();
        inflatedBaloons-= (x - (x/2));
        x = x/2;
        pq.push(x);
        timeElapsed++;
    }
    cout << timeElapsed << "\n";
    return 0;
}