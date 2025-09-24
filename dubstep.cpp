#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<string>words;
    size_t pos=0,found;
    while((found=s.find("WUB", pos))!= string::npos) {
            if(found>pos) {
                words.push_back(s.substr(pos, found-pos));
            }
            pos=found+3;
        }
        
        if(pos<s.size())
            words.push_back(s.substr(pos));

        for(int i=0; i<words.size(); i++) {
            if(i) cout<< " ";
            cout << words[i];
        }
        cout << "\n";
}
