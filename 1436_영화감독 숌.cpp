#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#define MIN(x, y) ((x)<(y))?(x):(y)
#define MAX(x, y) ((x)>(y))?(x):(y)

using namespace std;

int main() {
	long long int a = 665;
	int count = 0, n;
	cin >> n;
	string s;
	while (true) {
		s = to_string(a);
		int temp = s.find("666");
		if (temp!=string::npos) {
			count++;
			if (count == n) {
				cout << a;
				return 0;
			}
		}
		a++;
	}
}
