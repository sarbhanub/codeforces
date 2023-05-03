#include <iostream>

using namespace std;

main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    if (np != 0 && nl != 0) {
        int ttd = (k*l)/nl, nol = (c*d), st = (p/np);
        int toast = st < ((ttd < nol) ? ttd : nol) ? st : ((ttd < nol) ? ttd : nol);
        cout << (toast/n);
    }
    else {
        cout << 0;
    }
}