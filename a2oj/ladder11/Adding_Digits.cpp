#include <iostream>

using namespace std;
 
int a,b,n;
main() 
{
cin >> a >> b >> n;
for (int i = 0 ; i < 10; i++) {
    if ((a*10+i)%b == 0) {
    cout << a << i;
        for (int j = 0; j < (n-1); j++) {
            cout << 0;
        }
    return 0;
    }
}
cout << -1 << endl;
}