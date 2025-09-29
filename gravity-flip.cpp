#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;

    while(n--) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    sort(a.begin(), a.end());
    for(auto&x:a) {
        cout << x << " ";
    }
    cout << "\n";
}
