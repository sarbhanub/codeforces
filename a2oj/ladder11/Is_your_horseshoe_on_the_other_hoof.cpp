#include <iostream>

using namespace std;

int noShoe(int color[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (color[j] == color[i]) {
                count++; break;
            }
        }
    }
    return count;
}

main() {
int n = 4;
int color[n];
for (int i = 0; i < n; i++) {
    cin >> color[i];
}
cout << noShoe(color, n);
}