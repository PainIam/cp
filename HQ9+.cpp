#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i=0; i < s.size(); i++) {
        if (s[i] == 72 || s[i] == 81 || s[i] == 57) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
