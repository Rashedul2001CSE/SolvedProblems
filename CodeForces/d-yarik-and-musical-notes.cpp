#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	long long ans = 0;
	map<int, int> cnt;
	for (auto& it: a) cin >> it;
	for (int i = 0; i < n; i++){
		ans += cnt[a[i]];
		if (a[i] == 1)	ans += cnt[2];
		if (a[i] == 2) ans += cnt[1];
		cnt[a[i]]++;
	}
	cout << ans << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
