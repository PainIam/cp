#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main() {
    ll t,n;
    vector<int>v;
    cin >> t;

    while(t--) {
        cin >> n;
        int a,b,count;
        a=b=count=0;

        //count a's
        ll tmp = n;
        while(tmp%2==0) {
            a++;
            tmp/=2;
        }
        //count b's
        while(tmp%3==0) {
            b++;
            tmp/=3;
        }

        if (tmp!=1 || a>b) {
            v.pb(-1);
        } else {
            int x = (b-a);
            count = x+b;
            v.pb(count);
        }
        
    }
    
    for(auto&x:v)
        cout << x << "\n";
}