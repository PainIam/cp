#include <bits/stdc++.h>
using namespace std;
// used a set to remove character duplicates then count set size
int main(){
    string a;
    set<char> s;
    cin >> a;

    for (int i=0; i < a.size(); i++) {
        s.insert(a[i]);
    }

    if (s.size() % 2 == 0)
        cout << "CHAT WITH HER!" << "\n";
    else
        cout << "IGNORE HIM!" << "\n";
}
