#include <iostream>
#include <algorithm>

using namespace std;

int lex(string s1, string s2) {
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int len = (s1.length() == s2.length()) ? s1.length() : 0;
    for (int i = 0; i < len; i++) {
        if (s1[i] == s2[i]) {
            if (i == len-1) {
                return 0;
            }
            else {
                continue;
            }
        }
        else if (s1[i] < s2[i]) {
                return -1;
            }
        else if (s1[i] > s2[i]) {
                return 1;
            }
    }
    return -2;
}

main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << lex(s1, s2) << endl;
}