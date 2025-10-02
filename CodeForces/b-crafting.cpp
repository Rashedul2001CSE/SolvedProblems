#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (auto& it : a) cin >> it;
	for (auto& it : b) cin >> it;
	int canGet = 1e9, need = 0;
	int belowCnt = 0;
	for (int i = 0; i < n; i++){
		if (a[i] < b[i]){
			belowCnt ++;
			if (belowCnt > 1){
				cout << "NO\n";
				return ;
			}
			need = b[i] - a[i];
		}
		else
			canGet = min(canGet, a[i] - b[i]);
		
	}
	cout << (canGet < need ? "NO" : "YES") << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}


		
	
	