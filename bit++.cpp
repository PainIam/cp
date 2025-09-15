#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<string>x;
    int i=0;
    int b=0;
    while(i<n){
        string bit;cin>>bit;
        x.push_back(bit);
        i++;
    }

    for(int k=0;k<n;k++){
        if(x[k][0]=='+'||x[k][x[k].size()-1]=='+'){
            b++;
        }else{
            b--;
        }
    }
    cout<<b<<"\n";
}
