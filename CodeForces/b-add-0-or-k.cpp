#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int> vec(n);	
	for (auto& it : vec){
		cin >> it;
		it += (it%(k+1))*k;
	}
	for (auto it : vec)
		cout << it << ' ';
	cout << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}

	