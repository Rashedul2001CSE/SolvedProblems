#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long n, k;
	cin >> n >> k;
	vector<int> a(n),h(n);
	for (auto& it : a) cin >> it;
	for (auto& it : h) cin >> it;
	int ans = 0;
	vector<pair<int,int>> list;
	for (int i = 0;i < n; i++){
		if (a[i] <= k) ans = 1;
		list.push_back(make_pair(i,i));
		while(i<n-1){
			if (a[i] <= k) ans = 1;
			if (h[i]%h[i+1] == 0){
				list[list.size()-1].second = i+1;
				i++;
			}
			else
				break;
		}
	}
	if (ans != 1){
		cout << "0\n";
		return ;
	}
	int size = 0;
	for (auto it : list){
		int pt = it.first, mx = 0;
		long long sum = 0;
		for ( int i = it.first; i <= it.second; i++){
			sum += a[i];
			if(sum > k){
				sum -= a[pt];
				pt++;
			}
			else{
				mx = max(mx,i-pt+1);
			}
		}
		ans = max(mx,ans);
	}
	cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}

	
		

			
		