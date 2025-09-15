#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl "\n"
#define ios ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;

int main(){
    ios; 
    ll n;
    cin>>n;
    set<ll>f;
    while(n--){
        ll a;cin>>a;f.insert(a);
    }
    cout<<f.size()<<endl;
    return 0;
}
