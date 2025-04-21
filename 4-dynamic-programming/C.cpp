#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    int steps = 0;
    while (n != 0) {
        string s = to_string(n);
        int max = 0;
        for (char c : s) {
            int digit = c - '0';
            if (digit > max) max = digit;
        }
        n -= max;
        steps++;
    }
    cout << steps;
}