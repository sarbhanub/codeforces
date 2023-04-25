/*
* author: sbaidya
* problem: 1702/A
*/

#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)

using namespace std;

int redCost(int pr) {
    int s = trunc(log10(pr)) + 1;
    if (pr == 1 || pr == 0 || s == log10(pr)+1) {
        return 0;
    }
    else if (pr <= 9) {
        return pr-1;
    }
    return (pr-pow(10, (s-1)));
}

main() {
    int t, pr = 0; cin >> t;
    int prices[t];
    forn(t) {cin >> prices[i];}
    forn(t) {
        pr = prices[i];
        cout << redCost(pr) << endl;
    }
}