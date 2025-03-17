#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        
        bool redKey = false, greenKey = false, blueKey = false;
        bool canOpen = true;

        for (char ch : s) {
            if (ch == 'r') {
                redKey = true;
            } else if (ch == 'g') {
                greenKey = true;
            } else if (ch == 'b') {
                blueKey = true;
            } else if (ch == 'R') {
                if (!redKey) {
                    canOpen = false; 
                    break;
                }
            } else if (ch == 'G') {
                if (!greenKey) {
                    canOpen = false;
                    break;
                }
            } else if (ch == 'B') {
                if (!blueKey) {
                    canOpen = false;
                }
            }
        }
        cout << (canOpen ? "YES":"NO") << "\n";
    }
    return 0;
}