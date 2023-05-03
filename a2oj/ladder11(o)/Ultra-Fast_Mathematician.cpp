#include <iostream>

using namespace std;

int main() {
	string m, n;
	cin >> m >> n;
	int ml = m.length(); 
	int nl = n.length();
	if (ml != nl) {
		return 1;
	}
	for (int i = 0; i < ml; i++) {
		cout << (m[i]^n[i]);
	}
	return 0;
}
