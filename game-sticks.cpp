#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    cin >> m;

    int in = n*m; 
    int win = 0; // for Akshat
    while(in>0) {
        n--;
        m--;
        in = n*m;
        win++;
    }
    if(win%2==0) {
        cout << "Malvika\n";
    } else {
        cout << "Akshat\n";
    }

     
}