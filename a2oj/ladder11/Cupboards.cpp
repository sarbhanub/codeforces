#include <iostream>

using namespace std;

int calt(int doors[], int cup) {
    int time = 0;
    int nze = 0, nzo = 0;
    for (int i = 0; i < 2*cup; i++) {
        if (i == 0 || i%2 ==0) {
            if (doors[i] == 0) {
                nze++;
            }
        }
        else {
            if (doors[i] == 0) {
                nzo++;
            }
        }   
    }

    int noe = cup - nze;
    int noo = cup - nzo;

    time += (nze <= cup/2) ? nze : noe;
    time += (nzo <= cup/2) ? nzo : noo;

    return time;
}

main() {
int cup;

cin >> cup;

int doors[2*cup];

for (int i = 0; i < 2*cup; i++) {
    cin >> doors[i];
}
cout << calt(doors, cup);
}