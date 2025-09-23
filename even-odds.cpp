#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
    the main idea is to count the numbers of odd numbers, 
    since we take the first odd nums of n, followed by evens
    now a sequence for odd numbers is 1,3,5,7,9,..., notice
    how to find the k-th odd number? the first k-th odd number is 1
    now if k=1, can we say to find the k-th number we simply go k*2-1
    this will work, 1*2-1 = 1, 2*2-1 is 3

    for even numbers, it gets a bit tricky 
    say we had a sequence of even numbers {2,4,6,8,..,}
    notice to acquire the i-th even number we just go 2*i, i being the position
    but our sequence starts with odd numbers, but if we know the number of even numbers
    can we say k - odds will give us the i-th position? of a set of even numbers ? yes
    so from that we can just apply that 2*k formula after subtraction odds from k
    the general formul can be thought as 2*(k-odds)

    phew that was a pain in the ahh
*/

int main() {
    ll n,k;
    cin >> n;
    cin >> k;

    ll odds = (n+1)/2;
    ll ans = 0;
    if (k<=odds) {
        ans = k*2-1;
    } else {
        ans = 2*(k-odds);
    }

    cout << ans << "\n";
}
