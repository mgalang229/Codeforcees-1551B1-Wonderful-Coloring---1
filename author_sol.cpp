#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		// count the frequency of the letters in the string
		vector<int> counter(26, 0);
		for (int i = 0; i < (int) s.size(); i++) {
			counter[s[i] - 'a']++;
		}
		// 'cnt1' = letters which appear EXACTLY once
		int cnt1 = 0;
		// 'cnt2' = letters which appear MORE THAN once
		int cnt2 = 0;
		for (int i = 0; i < (int) counter.size(); i++) {
			if (counter[i] == 1) {
				cnt1++;
			} else if (counter[i] > 0) {
				cnt2++;
			}
		}
		// calculate the sum of 'cnt2' and half of 'cnt1' (since we will divide these
		// individual letters into equal halves of upon using red and green colors)
		cout << (cnt2 + cnt1 / 2) << '\n';
	}
	return 0;
}
