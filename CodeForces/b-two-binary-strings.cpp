#include<bits/stdc++.h>
using namespace std;

void solve(){
	string str1,str2;
	cin >> str1 >> str2;
	if (str1 == str2){
		cout << "YES\n";
		return ;
	}
	for (int i = str1.size()-1; i >= 0; i--){
		if (str1[i] ==str2[i] and str1[i] == '1' and i>0 and str1[i-1] == str2[i-1] and str1[i-1] == '0'){
			cout << "YES\n";
			return ;
		}
	}
	cout << "NO\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}