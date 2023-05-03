#include <iostream>

using namespace std;

main() {
    int n, a, b, c, nop = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
            cin >> a >> b >> c;
    nop += (a+b+c > 1) ? 1 : 0;
    }
    cout << nop << endl;
}