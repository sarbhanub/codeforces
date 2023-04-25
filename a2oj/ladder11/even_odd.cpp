/*
* author: sbaidya
* problem: 318/A
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int val (bool f, ll n, ll k) {
    if(f) {
        if (k <= n/2) {
            return (2*k-1);
        }
        else {
            return 2*(k-(n/2));
        }
    }

    else {
        if (k <= (n/2)+1) {
            return (2*k-1);
        }
        else {
            return 2*(k-((n/2)+1));
        }
    }
}

main() {
    ll n, k;
    cin >> n >> k;
    bool f = (n%2 == 0) ? true : false;
    cout << val(f, n, k);
}
