#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
#define MIN(x, y) (x)<(y)?(x):(y);
using namespace std;
char change[26] = { 0 };
int main() {
	
	string code = "ejp mysljylc kd kxveddknmc re jsicpdrysi";
	string ans = "our language is impossible to understand";
	int len = code.size();
	for (int i = 0;i < len;i++) {
		if (code[i] == ' ') {
			continue;
		}
		change[code[i] - 'a'] = ans[i];
	}
	code = "rbcpc ypc rtcsra dkh wyfrepkym veddknkmkrkcd";
	ans = "there are twenty six factorial possibilities";
	len = code.size();
	for (int i = 0;i < len;i++) {
		if (code[i] == ' ') {
			continue;
		}
		change[code[i] - 'a'] = ans[i];
	}
	code = "de kr kd eoya kw aej tysr re ujdr lkgc jv";
	ans = "so it is okay if you want to just give up";
	len = code.size();
	for (int i = 0;i < len;i++) {
		if (code[i] == ' ') {
			continue;
		}
		change[code[i] - 'a'] = ans[i];
	}
	change['z' - 'a'] = 'q';
	change['q' - 'a'] = 'z';
	int t = 0;
	cin >> t;
	getchar();
	for (int i = 0;i < t;i++) {
		getline(cin, code);
		string answer="";
		len = code.size();
		for (int j = 0;j < len;j++) {
			if (code[j] == ' ') {
				answer += ' ';
				continue;
			}
			else if (code[j] == '\n') {
				answer += '\n';
				continue;
			}
			answer += change[code[j] - 'a'];
		}
		cout << "Case #" << i + 1 << ": " << answer<<endl;
	}
	
}
