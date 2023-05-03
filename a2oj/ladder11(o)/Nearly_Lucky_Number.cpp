#include <iostream>

using namespace std;

int main()
{
    int lucky = 0;
    unsigned long long int n;
    cin >> n;
    while (n > 0) {
        if (n%10 == 4 || n%10 == 7) {
            n /= 10;
            lucky++;
        }
        else {
            n /= 10;
        }
    }
    if (lucky == 4 || lucky == 7) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
