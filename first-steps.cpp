#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int>x;
    vector<int>counts;
    cin >> n;

    while(n--) {
        int a;
        cin >> a;
        x.push_back(a);
    }
    int counter = 1;
    for (int i=0; i<x.size()-1; i++) {
        if (x[i+1] >= x[i]) {
            counter++;
        } else {
            counts.push_back(counter);
            counter = 1;
        }
    }
    if (counts.empty()) {
        cout << counter << "\n";
        return 0;
    }

    int mx = *max_element(counts.begin(), counts.end());
    if (mx >= counter) {
        cout << mx << "\n";
    } else {
        cout << counter << "\n";
    }
}



