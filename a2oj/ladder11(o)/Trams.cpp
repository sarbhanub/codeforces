#include <iostream>

using namespace std;

int maxP(int pass[], int stops) {
    int max = 0, n = 0;
    if (pass[0] != 0 && pass[2*stops -1] != 0) {
       return -1;
    }
    for (int i = 0; i < 2*stops; i = i+2) {
        n += pass[i+1] - pass[i];
        max = (n > max) ? n : max;
    }
    return max;
}

main() {
int stops;

cin >> stops;

int pass[2*stops];

for (int i = 0; i < 2*stops; i++) {
    cin >> pass[i];
}
cout << maxP(pass, stops);
}