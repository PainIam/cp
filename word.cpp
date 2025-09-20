#include <bits/stdc++.h>
#include <print>
using namespace std;

int main() {
    string s;
    int cl=0, cu=0;
    cin >> s;

    for (auto&x:s) {
        if (isupper(x)) {
            cu++;
        } else {
            cl++;
        }
    }
    
    if (cl>=cu) {
        for(auto&x:s) 
           x= tolower(x);
    }else {
        for(auto&x:s)
           x= toupper(x);
    }
    std::println("{}", s);

}
