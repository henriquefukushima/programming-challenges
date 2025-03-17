#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        string b;
        cin >> a;
        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] == 'p') {
                b+='q';
            } else if (a[i] == 'q') {
                b+='p';
            } else {
                b+='w';
            }
        }
        cout << b << '\n';
    }
    return 0;
}