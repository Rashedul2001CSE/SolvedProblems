#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	if (n == 0){
		cout << "1\n";
		return ;
	}
	vector<pair<int, int>> val = {{0,6},{1,8},{2,4},{3,2}};
	int check = n % 4;
	for (auto it : val)
		if (it.first == check)
			cout << it.second;
	cout << '\n';
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--)
		solve();
	return 0;
}