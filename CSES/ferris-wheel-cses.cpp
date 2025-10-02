#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
	int n, x;
	cin >> n  >> x;
	vector<int> vec(n);
	for (auto& it: vec) cin >> it;
	int i = 0, j = n-1, cnt = 0;
	sort(vec.begin(),vec.end());
	while(i <= j){
		if (vec[i]+vec[j] <= x){
			i++;
			j--;
		}
		else{
			j--;
		}
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
		