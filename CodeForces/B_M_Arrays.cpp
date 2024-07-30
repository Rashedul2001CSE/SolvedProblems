#include <iostream>
#include <map>

using namespace std;

void solve(){

	int n, m;
	cin >> n >> m;
	map<int, int> mp;
	int temp;
	for (int i = 0; i < n; i++){
		cin >> temp;
		mp[temp % m]++;
	}
	int result = 0;
	for (int num = 0; num <= m / 2; num++){
		int compli = (m-num)%m;
		if (mp[num] + mp[compli]>0){
			result += max(abs(mp[num] - mp[compli]),1);
		}

	}
	cout << result << "\n";


}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
		
return 0;
}
