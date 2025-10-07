#include<bits/stdc++.h>
using namespace std;

void solve(){
	string str;
	cin >> str;
	int n = str.size();
	for (int i = 0; i + 1 < n; i++){
		if (str[i] == str[i+1]){
			cout << str.substr(i,2) << '\n';
			return ;
		}
	}
	for (int i = 0; i + 2 < n; i++){
		if (str[i] != str[i+1] and str[i] != str[i+2] and str[i+1] != str[i+2]){
			cout << str.substr(i,3) << '\n';
			return ;
		}
	}
	cout << -1 << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}