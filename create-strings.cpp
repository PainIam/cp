#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin >> s;
   int counter=1;
   vector<string> v;
   sort(s.begin(), s.end());
   v.push_back(s);
   while(next_permutation(s.begin(), s.end())) {
       v.push_back(s);
       counter++;
   }
   cout<<counter<<"\n";
   for(auto&a:v){
    cout<<a<<"\n";
   }

}
