#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
#define MIN(x, y) (x)<(y)?(x):(y);
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int min6 = 1001, min1 = 1001;
	for (int i = 0;i < m;i++) {
		int l6, l1;
		cin >> l6 >> l1;
		min6 = MIN(min6, l6);
		min1 = MIN(min1, l1);
	}
	int packageCount = n / 6 + 1;
	int soloCount = n % 6;
	int minPrice = n * min1;
	minPrice = MIN(minPrice, packageCount*min6);
	minPrice = MIN(minPrice, (packageCount - 1)*min6 + soloCount * min1);
	cout << minPrice;
}
