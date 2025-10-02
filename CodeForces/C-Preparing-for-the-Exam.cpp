#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(m), q(k);
	for (auto& it : a) cin >> it;
	for (auto& it : q) cin >> it;
	if ( n == k){
		while(m--)
			cout << 1;
		cout << '\n';
		return ;
	}
	if ( n-1> k){
		while(m--)
			cout << 0;
		cout << '\n';
		return ;
	}
	int missing = 0;
	for (int i = 1; i <= k; i++)
		if (q[i-1] != i){
			missing = i;
			break;
		}
	if (missing == 0) missing = n;
	for (auto it : a){
		if (it == missing)
			cout << 1;
		else 
			cout << 0;
	}
	cout << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
	
	