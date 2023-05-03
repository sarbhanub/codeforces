#include <bits/stdc++.h>

using namespace std;

int valx(string s[], int c) {
    int ret = 0;
    for (int i = 0; i < c; i++) {
        if (s[i].length() == 3) {
            string l = s[i];
            if (l[0] == '+' && l[1] == '+' && l[2] == 'X') {
                ret++;
            }
            else if (l[0] == 'X' && l[1] == '+' && l[2] == '+') {
                ret++;
            }
            else if (l[0] == '-' && l[1] == '-' && l[2] == 'X') {
                ret--;
            }
            else if (l[0] == 'X' && l[1] == '-' && l[2] == '-') {
                ret--;
            }
            else {
                continue;
            }
        }
        else {
            continue;
        }
    }
    return ret;
}

main() {
    int c;
    cin >> c;
    string s[c];
    for (int i = 0; i < c; i++) {
        cin >> s[i];
    }
    cout << valx(s, c) << endl;
}