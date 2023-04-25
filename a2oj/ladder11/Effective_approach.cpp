/*
* author: sbaidya
* problem: 227/B
*/

#include<bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
 
using namespace std;
using ll = long long;
 
main() {
    int n, s, el;
    ll c1 = 0, c2 = 0;
    cin >> n;
    vector<int> num(100001);
    forn(n) {
        int x; cin >> x; num[x] = i;
    }
    cin >> s;
    forn(s) {
        cin >> el;
        c1 += num[el]+1;
        c2 += (n-num[el]);
    }
    cout << c1 << " " << c2 << endl;
}