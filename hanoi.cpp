#include<bits/stdc++.h>
using namespace std;

void hanoi(int n,int src,int aux,int dst) {
   if (n==1){
    cout<<src<<" "<<dst<<"\n";
    return;
   } else {
        hanoi(n-1, src, dst, aux);
        cout <<src<<" "<<dst<<"\n";
        hanoi(n-1, aux, src, dst);
   }      
}
int main(){
    int n;cin>>n;
    int src=1,aux=2, dst=3;
    cout << pow(2, n)-1<<"\n";
    hanoi(n, src, aux, dst);

    return 0;
}
