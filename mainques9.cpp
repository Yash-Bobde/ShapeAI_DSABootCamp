#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;
    for(int a,x,i = 0; i < n; i++){
        cin >> a;
        if(a >= 38 && (x = (5 - (a % 5))) < 3)cout << a + x << endl;
        else cout << a << endl;
    }
}