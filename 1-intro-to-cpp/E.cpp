#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int strSize = s.size();
        bool changed = true;
        while (changed) {
            changed = false;
            for (int i=strSize-1; i>0; i--) {
                int actualNumber = s[i];
                int prevNumber = s[i-1];
                if (actualNumber > 0 && actualNumber-1 > prevNumber) {
                    char charToInsert = (actualNumber - 1);
                    s[i] = s[i-1];
                    s[i-1] = charToInsert;
                    changed = true;
                }
            }
        }
        cout << s << '\n';
    }
    return 0;
}