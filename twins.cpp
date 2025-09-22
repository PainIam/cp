#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int>c;
    cin >> n;

    while(n--) {
        int x;
        cin >> x;
        c.push_back(x);
    }

    sort(c.begin(), c.end());
    int sum = accumulate(c.begin(), c.end(), 0);
    int tot = 0;
    int counter = 0;
    for (int i=c.size()-1; i>=0; i--) {
        tot += c[i];
        counter++;
        if (tot > sum-tot) {
            cout << counter << "\n";
            return 0;
        }
    }
}
