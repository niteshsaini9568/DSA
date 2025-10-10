#include <iostream>
#include <vector>
using namespace std;

void SieveOfEratosthenes(int n) {
    vector<bool> prime(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter value of N: ";
    cin >> n;
    cout << "Prime numbers less than or equal to " << n << " are:\n";
    SieveOfEratosthenes(n);
    return 0;
}
