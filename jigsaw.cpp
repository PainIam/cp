#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    cin >> m;

    vector<int>p;
    int h=m;
    while(h--) {
        int x;
        cin >> x;
        p.push_back(x);
    }
    sort(p.begin(), p.end());
    int min_unfair = INT_MAX;
    for(int i=0; i<=m-n; i++) {
        int diff = p[i+n-1] - p[i];
        min_unfair = min(min_unfair, diff);
    }
    cout << min_unfair << "\n";
}
