#include<bits/stdc++.h>
// 5
// 6
// 101011
// 5
// 00000
// 9
// 100100011
// 3
// 100
// 1
// 1

//9
//1001 0 0011
//0123456789
//0011111100

using namespace std;
void solve(){
	int n;
	string s;
	cin >> n >> s;
	int x=0, cnt = 0;
	while(x < n - x - 1){
		if (s[x] != s[n - x - 1]){
			cnt++;
		}
		x++;
	}
	for (int i = 0; i < cnt; i++){
		cout << 0;
	}
	cout << 1;
	x = 0;
	cnt ++;
	for (int i = cnt; i <= n; i++){
		if ((i&1) and (n&1) and x <= n / 2){
			cout << 1;
		}
		else if (i%2 == 0){
			while(x <= n / 2 and s[x] != s[n - x - 1])
				x++;
			if (x <= n / 2){
				cout << 1;
				x++;
			}
			else
				cout << 0;
			
		}
		else{
			cout << 0;
		}
	}
	cout << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
