#include<iostream>
#include<vector>

using namespace std;
vector <int> coin;

int main() {
	int n, k, count = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		coin.push_back(c);
	}
	int sum = 0;
	n--;
	while (sum != k) {
		sum += coin.at(n);
		count++;
		if (sum == k) {
			cout << count;
			return 0;
		}
		else if (sum > k) {
			sum -= coin.at(n);
			count--;
			n--;
		}
		else {
			continue;
		}
	}
}