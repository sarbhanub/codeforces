#include <iostream>

using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int var;
		cin >> var;
		sum += var;
	}
	long double total = (long double) sum;
	cout << (total/n) << endl;
}
