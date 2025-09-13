#include <bits/stdc++.h>
using namespace std;
vector<string> gray(int n){
    if (n==1)
        return {"0", "1"};
    vector<string> smaller = gray(n-1);
    vector<string> result;
    for (auto&s:smaller){
        result.push_back(s+"0");
    }
    reverse(smaller.begin(), smaller.end()); 
    for(auto&x:smaller){
        result.push_back(x+"1");
    }
    return result;
}
int main(){
    int n;cin>>n;
    vector<string>ans= gray(n);
    for(const auto&s:ans){
        cout<<s<<"\n";
    }
}
