#include <iostream>
using namespace std;

int main() {
    int k, n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (k = 2; k <= n / 2; ++k) {
            if (n % k == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}
