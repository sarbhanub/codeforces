/*
* author: sbaidya
* problem: 339/A
*/

#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)

using namespace std;

main() {
    string eqn; cin >> eqn;
    eqn.erase(remove(eqn.begin(), eqn.end(), '+'), eqn.end());
    sort(eqn.begin(), eqn.end());
    forn(eqn.size()) {
        (i < eqn.size()-1) ? cout << eqn[i] << "+" : cout << eqn[i] << endl;
    }
}