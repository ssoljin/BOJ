#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
pair<int, int> semina[100000];

bool cm(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int s, e;
		cin >> s >> e;
		semina[i] = make_pair(s, e);
	}
	sort(semina, semina + n, cm);

	int count = 1;
	int start = semina[0].first, end = semina[0].second;
	for (int i = 1; i < n; i++) {
		if (semina[i].first >= end) {
			start = semina[i].first, end = semina[i].second;
			count++;
		}

	}
	cout << count;
}

