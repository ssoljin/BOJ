#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<map>

using namespace std;
struct _app {
	int first;
	int second;
};

bool cmp(_app a, _app b) {
	return a.first < b.first;
}


_app app[100000];
int main(){
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int count = 1;
		for (int i = 0; i < n; i++) {
			cin >> app[i].first >> app[i].second;
		}
		sort(app, app + n, cmp);
		int temp = app[0].second;
		for (int i = 1; i < n; i++) {
			if (temp > app[i].second) {
				count++;
				temp = app[i].second;
			}
		}
		cout << count << endl;
	}
}