#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a; cin >> b; cin >> c;

    if (a==b||a==c) {
        cout << "Yes\n";
    }else if (b==a||b==c) {
        cout << "Yes\n";
    } else {
        cout <<"No\n";
    }
}
