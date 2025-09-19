#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;cin >> a; cin >> b;
    int counter = 0;

    do {
        a *=3;
        b *=2;
        counter++;
    } while (b>=a);

    cout << counter << "\n";
}
