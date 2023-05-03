/*
* author: sbaidya
* problem: 1701/A
*/

#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)

using namespace std;

int calMoves(int grass[]) {
    if (grass[0] + grass[1] + grass[2] + grass[3] > 0) {
        if (grass[0] + grass[1] + grass[2] + grass[3] <= 3) {return 1;}
        else if (grass[0] + grass[1] + grass[2] + grass[3] == 4) {return 2;}
    }
    return 0;
}

main() {
    int t; cin >> t; int grass[4], moves[t];
    forn(t) {
        cin >> grass[0] >> grass[1] >> grass[2] >> grass[3];
        moves[i] = calMoves(grass);
    }
    forn(t) {cout << moves[i] << endl;}
}