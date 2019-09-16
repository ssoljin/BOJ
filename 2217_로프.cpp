#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rope[1000] = { 0 };

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> rope[i];
	}
	sort(rope, rope + n);
	int max = 0;
	for (int i = 0; i < n; i++) {
		max = max > rope[i] * (n - i) ? max : rope[i] * (n - i);
	}
	cout << max;
}

