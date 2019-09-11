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

pair<int, int> pv[100000];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		pv[i] = make_pair(x, y);
	}
	stable_sort(pv, pv+n);
	for (int i = 0;i < n;i++) {
		printf("%d %d\n", pv[i].first, pv[i].second);
	}

}