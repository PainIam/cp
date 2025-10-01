#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    cin >> m;
    vector<int>v;
    while(n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int sum = 0;
    for(int i=0;i<m&&v[i]<0;i++) {
        sum+=abs(v[i]);
    }
    cout << sum << "\n";
    return 0;
}