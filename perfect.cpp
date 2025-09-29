#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    cin >> n; cin >> m; cin >> k;

    vector<pair<int,int>> p(k);

    for (int i=0; i<k; i++) {
        int a,b;cin >> a; cin >> b;
        p[i].first = a;
        p[i].second = b;
    }
    
    unordered_map<int, int> freq;
    for (int i=1; i<=n;i++) {
        freq[i]=i;
    }
    
    for (int i=0; i<k; i++) {
        for (int j=1; j < n; j++) {
            freq[p[i].first]++;
        }
    }
}
