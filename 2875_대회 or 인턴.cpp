#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>

using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int team = 0;
	team = min(n / 2, m);
	n = n - 2 * team;
	m = m - team;
	if (n + m >= k) {
		cout << team;
	}
	else {
		k = k - n - m;
		if (k % 3 == 0) {
			team = team - k / 3;
		}
		else {
			team = team - k / 3 - 1;
		}
		if (k <= 0) {
			cout << 0;
		}
		else {
			cout << team;
		}
	}

}
