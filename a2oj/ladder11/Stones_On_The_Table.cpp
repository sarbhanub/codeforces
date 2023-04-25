#include <iostream>

using namespace std;

int main()
{
    int n, len;
    cin >> n;
    char str[n];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int i = 1; i <= n; i++) {
        if (str[i-1] == str[i]) {
            len++;
        }
    }
    cout << len;
    return 0;
}
