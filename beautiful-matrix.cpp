#include <bits/stdc++.h>
using namespace std;

/*
basically a manhattan distance problem
no need to simulate swaps, just apply 
the manahattan distance formula
where the min moves will be
m = |x-x^target| + |y-y^target|
notice, though, x[target] will be subtracted by 1 
since we use 0 based indexing
*/

int main() {
    int arr[5][5];
    
    for (int i=0; i < 5; i++) {
        for (int j=0; j < 5;j++) {
            int a;
            cin >> a;
            arr[i][j]=a;
        }
    }

    int r,c;
    for (int i=0; i < 5; i++){
        for (int j=0; j < 5;j++) {
            if (arr[i][j]!=0){
                r=i;c=j; 
            }

        }
    }
    
    int ans = abs(c-2)+abs(r-2);
    cout << ans << "\n";
}

