#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n;cin>>k;
    int c=n;
    vector<int>p;
    while(c--){
        int t;cin>>t;
        p.push_back(t);
    }
    int counter=0;
    for(int i=0; i<n;i++){
        if(p[i]>0 &&p[i]>=p[k-1]){
            counter++;
        }
    }
    cout<<counter<<"\n";
}
