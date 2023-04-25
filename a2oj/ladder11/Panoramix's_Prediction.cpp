#include <iostream>

using namespace std;
bool isPrime(int num) {
	for (int i = 2; i < num; i++) {
		if (num%i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int m, n;
	cin >> n >> m;
	if (isPrime(m) == false) {
		cout << "NO";
		return 0;
	}
	for (int num = n+1; num < m; num++) {
		if (isPrime(num)) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}