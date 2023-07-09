#include <iostream>

using namespace std;

int main() {
    
    // Find prime numbers in the range 0-100
    for (int i = 2; i <= 100; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i%j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }

    return 0;
}