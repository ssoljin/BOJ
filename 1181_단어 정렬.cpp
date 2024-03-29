#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<map>
#define MIN(x, y) ((x)<(y))?(x):(y)
#define MAX(x, y) ((x)>(y))?(x):(y)

using namespace std;

vector<string> v;
int most[4001] = { 0 };

bool cmp(string a, string b);

int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), cmp);
	cout << v.at(0) << endl;
	for (int i = 1;i < n;i++) {
		if (v.at(i - 1) == v.at(i)) {
			continue;
		}
		cout << v.at(i) << endl;
	}
}

bool cmp(string a, string b) {
	if (a.size() == b.size()) {
		return a.compare(b) < 0;
	}
	else {
		return a.size() < b.size();
	}
}