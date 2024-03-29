#include<iostream>
#include<vector>
#include<cmath>
#define MIN(x, y) ((x)<(y))?(x):(y)
#define MAX(x, y) ((x)>(y))?(x):(y)

using namespace std;

bool isPrime(int x);

vector<int> prime;

int main() {
	prime.push_back(2);
	for (int i = 3;i <= 10100;i++) {
		if (isPrime(i)) {
			prime.push_back(i);
		}
	}
	int t;
	cin >> t;
	bool isBreak = false;
	while (t--) {
		int a;
		cin >> a;
		int k = 0;
		while (prime.at(k) < a/2) {
			k++;
		}
		for (int i = k;i >= 0;i--) {
			for (int j = k;prime.at(j)<=a;j++) {
				if (a == prime.at(i) + prime.at(j)) {
					cout << prime.at(i) << ' ' << prime.at(j) << endl;
					isBreak = true;
					break;
				}
			}
			if (isBreak) {
				isBreak = false;
				break;
			}
		}
	}
}
bool isPrime(int x) {
	int len = prime.size();
	for (int i = 2;i<=sqrt(x);i++) {
		if (x%i == 0) {
			return false;
		}
	}
	return true;
}