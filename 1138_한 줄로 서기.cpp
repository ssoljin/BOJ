#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
#define MIN(x, y) (x)<(y)?(x):(y);

using namespace std;

int people[11] = { 0 };
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int p;
		cin >> p;
		for (int j = 0;j <= p;j++) {
			if (people[j] != 0) {
				p++;
			}
		}
		
		people[p] = i + 1;

	}
	for (int i = 0;i < n;i++) {
		cout << people[i] << ' ';
	}
}
