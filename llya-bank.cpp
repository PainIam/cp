#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;

    if (n >= 0) {
        cout << n << "\n";
    } else {
        ll tmp = n;
        int counter = 0;
        while(tmp) {
            counter++;
            tmp/=10;
        }
        if (counter==1) {
            cout << n << "\n";
        } else {
            tmp = n;
            int one, two;
            one = tmp%10;
            tmp/=10;
            two = tmp%10;
            tmp/=10;
            one = max(one, two);
            tmp = (tmp*10) + one;
            cout << tmp << "\n";
            // cout << 

        }
    }
    return 0;
}