#include <iostream>
#include <cstring>

using namespace std;

string bog(string username) {
    int count = 0, l = username.length();
    char userc[l+1];
    strcpy(userc, username.c_str());
    string b = "IGNORE HIM!";
    string g = "CHAT WITH HER!";
    for (int i = 0; i < l; i++) {
        for (int j = i+1; j < l; j++) {
            if (userc[j] == userc[i]) {
                count++; break;
            }
        }
    }
    return ((l-count)%2 == 0) ? g : b;
}

main() {
string username;
cin >> username;
cout << bog(username) << endl;
}