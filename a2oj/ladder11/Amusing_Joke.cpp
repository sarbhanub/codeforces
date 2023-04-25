/*
* author: sbaidya
* problem: 141/A
*/

#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)

using namespace std;

main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;
    if (guest.size() + host.size() != pile.size()) {cout << "NO";}
    else{
        guest.append(host);
        sort(guest.begin(), guest.end()); sort(pile.begin(), pile.end());
        if (guest != pile) {
            cout << "NO";
        }
        else {
            cout << "YES";
        }
    }    
}