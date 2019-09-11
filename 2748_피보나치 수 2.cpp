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

int main() {
	int n;
	cin >> n;
	long long int fibo[91] = { 0 };
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2;i <= n;i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	cout << fibo[n];

}