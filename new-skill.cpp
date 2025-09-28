#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<pair<int, int>> p(n);
    cin >> n;

    for (int i=0; i<n; i++) {
        int a,b;cin>>a;cin>>b;
        p[i].first=a;
        p[i].second=b;
    }
    int counter = 0;
    if(p[0].first != 0 && p[0].second != 0) {
        cout << counter << "\n";
    } else if (n==2) {
        counter = 2;
        cout << counter << "\n";
    } else {
        for (int i=0; i<n; i++) {
            if (p[i].first == 0 && p[i].second==0) {
                counter++;
            }
        }
        int x = n-counter;
        if (x > 1) {
            counter += 2;
        } else if (x==1) {
            counter++;
        }
    }

    cout << counter << "\n";
}





