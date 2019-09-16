#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int time[1000] = { 0 };

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> time[i];
	}
	sort(time, time + n);
	long long int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (n - i) * time[i];
	}
	cout << sum;
}

