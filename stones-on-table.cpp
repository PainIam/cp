#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s,c;
    cin >> n; cin >> s;
    c=s;
    
    int counter=0;
    int x = c.size()-1;
    for(int j=0; j < x;j++){
           if (c[j] == c[j+1]) {
               counter++;
           }
     }
 
    cout << counter << "\n";
}
