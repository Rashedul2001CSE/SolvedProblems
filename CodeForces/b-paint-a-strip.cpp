#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	for (int i = 1,mx = 1; ; i++, mx = mx * 2 + 2){
		if (mx >= n){
			cout << i << '\n';
			break;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}