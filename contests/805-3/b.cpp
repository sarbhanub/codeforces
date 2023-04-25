/*
* author: sbaidya
* problem: 1702/B
*/

#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)

using namespace std;

int cald(string word) {
}

main() {
    int t; cin >> t;
    string word;
    int arr[t];
    forn(t) {
        cin >> word;
        arr[i] = cald(word);
    }
    forn(t) {cout << arr[i] << endl;}
}