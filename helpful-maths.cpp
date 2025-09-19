#include <bits/stdc++.h>
using namespace std;

int main() {
   string s,c;
   cin >> s;
   c=s;

   if(c.size() != 1) {
       for (int j=0; j < c.size()-2; j++) {
            for (int i=0; i < (c.size()-2); i++) {
                if (c[i] > c[i+2])
                    swap(c[i], c[i+2]);
            }
   
         }
    }
   cout << c << "\n";
}
