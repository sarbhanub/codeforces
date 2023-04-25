#include <iostream>
#include <cstring>

using namespace std;

bool outP(string p) {
    for (int i = 0; i < p.length(); i++) {
        if (p[i] < 33 || p[i] > 126) {
            return false; 
        }
    }
    for (int i = 0; i < p.length(); i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            return true;
        }
    }
    return false;
}

main() {
    string p, out;
    cin >> p;
    out = (outP(p)) ? "YES" : "NO";
    cout << out << endl;
}