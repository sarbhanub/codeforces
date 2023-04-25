#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n], ma = 0, mi = 101, max, min;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > ma) {
			ma = arr[i];
			max = i;
		}
		if (arr[i] <= mi) {
			mi = arr[i];
			min = i;
		}
	}
	if (max > min) {
		min++;
	}
	cout << max+(n-1)-min << endl;
	return 0;
}