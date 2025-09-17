#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a;
    cin >> b;

    for (int i=0; i<a.size(); i++) {
        if (tolower(a[i]) < tolower(b[i])) {
            cout << "-1" << "\n";
            break;
        } else if (tolower(a[i]) > tolower(b[i])) {
            cout << "1" << "\n";
            break;
        }else if (i==a.size()-1) {
            if (tolower(a[i]) == tolower(b[i])) {
                cout << "0" << "\n";
            }
        }

    }
}
