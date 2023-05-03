#include <iostream>
#include <cstring>

using namespace std;

string shWord(string word) {
    int l = word.length();
    string return_word;
    if (l <= 10) {
        return_word = word;
    }
    else {
        char wordsarr[l + 1];
        strcpy(wordsarr, word.c_str());
        return_word = wordsarr[0]+to_string(l-2)+wordsarr[l-1];
    }
    return return_word;
}

main() {
int n;
cin >> n;
string words[n];

for (int i = 0; i < n; i++) {
    cin >> words[i];
}

for (int i = 0; i < n; i++) {
    string word = words[i];
    cout << shWord(word) << endl;
}
}