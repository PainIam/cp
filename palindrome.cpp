#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;

    unordered_map<char, int> freq;
    for(auto&i:n) {
        freq[i]++; 
    }
    
    string start="";  
    string mid="";
    string end="";

    int oddcount=0;
    for(auto&fr:freq){
        if (fr.second%2!=0)
            oddcount++;
      }
    if (oddcount>1){
        cout<<"NO SOLUTION\n";
      }
    else
    {
    for (auto& f : freq) {
         int half = f.second / 2;
         start.append(half, f.first);
         end.append(half, f.first);
    
         if (f.second % 2 != 0) {
             mid.append(1, f.first);
        }
    }

    string final = start + mid + string(end.rbegin(), end.rend());
    cout<<final<<"\n";
    }
    return 0;


}

