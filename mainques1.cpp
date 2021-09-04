/* QUES1 SWAPPING 2 NUMBERS */
#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;
    cout << "a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

