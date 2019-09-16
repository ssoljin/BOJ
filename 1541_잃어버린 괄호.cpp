#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

char str[51];
string num;
int main() {
	cin >> str;
	int res = 0;
	bool isPlus = true;
	for (int i = 0; str[i] != '\0'; i++) {

		if (str[i] >= '0' && str[i] <= '9') {
			num += str[i];
		}
		else {
			if (isPlus) {
				res += atoi(num.c_str());
			}
			else {
				res -= atoi(num.c_str());
			}
			num = "";
		}
		if (str[i] == '-') {
			if (isPlus) {
				isPlus = false;
			}
		}
	}
	if (isPlus) {
		res += atoi(num.c_str());
	}
	else {
		res -= atoi(num.c_str());
	}
	cout << res;
}

