#include<iostream>
#include<vector>
#include<cmath>
#define MIN(x, y) ((x)<(y))?(x):(y)

using namespace std;

bool isPrime(int x);

vector<int> prime;

int main() {
	prime.push_back(2);
	for (int i = 3;i <= 10000;i++) {
		if (isPrime(i)) {
			prime.push_back(i);
		}
	}
	int a, b;
	cin >> a >> b;
	int m = 0, M = prime.size() - 1;
	
	int mini = 0;
	int sum = 0;
	while (prime.at(m)<a) {
		m++;
		if (m > M) {
			break;
		}
	}
	if (m <= M) {
		mini = prime.at(m);
	}
	
	if (m <= M) {
		while (prime.at(m) <= b) {
			sum += prime.at(m);
			m++;
			if (m > M) {
				break;
			}
		}
	}
	
	if (sum == 0) {
		cout << -1;
		return 0;
	}
	cout << sum << endl << mini;
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