#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


int main(){
	char a[51];
	char b[51];
	cin >> a >> b;
	int min = INT32_MAX;
	int lena = strlen(a);
	int lenb = strlen(b);
	for (int i = 0; i <= lenb - lena; i++) {
		int count = 0;
		for (int j = 0; j < lena; j++) {
			if (a[j] != b[i + j]) {
				count++;
			}
		}
		min = count < min ? count : min;
	}
	cout << min;
}