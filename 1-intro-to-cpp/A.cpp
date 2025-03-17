#include <vector>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int rowA = m - a;
        int rowB = m - b;
        int occupiedSeats = 0;
        if (rowA <= 0) {
            occupiedSeats+=m;
        } else {
            occupiedSeats+=a;
        }
        if (rowB <= 0) {
            occupiedSeats+=m;
        } else {
            occupiedSeats+=b;
        }

        int avaiableSeats = 2*m - occupiedSeats;
        if (avaiableSeats > 0) {
            if (c <= avaiableSeats) {
                occupiedSeats+=c;
            } else {
                occupiedSeats+=avaiableSeats;
            }
        }
        cout << occupiedSeats << '\n';
    }
    return 0;
}