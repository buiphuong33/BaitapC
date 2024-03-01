#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int n = (int) s.size() - 1, one = 0, res = 0;
	for (int i = n; i >= 0; i--)
		if (s[i] == '1') {
			res += n - i - one;
			one++;
		}
	cout << res;
    return 0;
}

