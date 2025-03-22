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
        
        for (int i=0; i<strSize ; i++) {
            string s_copy = s;
            int actualNumber = s[i];
            int max = 0;
            int max_index;
            for (int j=i+1; j <= strSize && j <= i+9; j++) {
                int delta_ij = j-i;
                int forwardNumber = s[j] - delta_ij;

                if (forwardNumber > max) {
                    max = forwardNumber;
                    max_index = j;
                }
            }
            if (max > actualNumber) {
                char lChar = max;
                for (int k=i+1; k<=max_index; k++) {
                    s[k] = s_copy[k-1];
                }
                s[i] = lChar;
            } 
            }
        cout << s << '\n';
        }
    return 0;
}