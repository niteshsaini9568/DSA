#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 24;

    int root = sqrt(num); 

    for (int i = 1; i <= root; i++) {
        if (num % i == 0) {
            cout << i << " ";  
            if (num / i != i) {
                cout << num / i << " ";  
            }
        }
    }

    return 0;
}
