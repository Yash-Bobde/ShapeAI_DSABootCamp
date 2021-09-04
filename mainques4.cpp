#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, neTerm = 0;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Fibonacci Series of the number : ";

    for (int i = 1; i <= n; ++i) {
        
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        neTerm = t1 + t2;
        t1 = t2;
        t2 = neTerm;
        
        cout << neTerm << ", ";
    }
    return 0;
}