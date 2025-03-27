//The Sieve of Eratosthenes is a classic algorithm used to find all prime numbers up to a given limit 
//𝑛 efficiently. Its time complexity is 𝑂(𝑛log(log𝑛)), which makes it highly efficient for generating a list of primes.

#include <iostream>
#include <vector>
using namespace std;

void sieve_of_eratosthenes(int n){
    vector<int> sieve(n + 1, 0); // 0 means prime

    for (int x=2; x<=n; x++) {
        if (sieve[x]) continue; //already marked
        for (int u = 2 * x; u <= n; u += x) {
            sieve[u] = x; // mark u as not prime and store a prime factor
        }
    }

    // Output primes
    for (int i = 2; i <= n; i++) {
        if (sieve[i] == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    int n = 50;
    sieve_of_eratosthenes(n);
    return 0;
}