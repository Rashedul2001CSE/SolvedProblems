#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	multiset<int> l,r;
	while(n--){
		char c;
		int a, b;
		cin >> c >> a >> b;
		if (c == '+'){
			l.insert(a);
			r.insert(b);
		}
		else{
			auto it = l.find(a);
			if (it != l.end())
				l.erase(it);
			auto it2 = r.find(b);
			if (it2 != r.end())
				r.erase(it2);
		}
		if (r.empty() or l.empty() or *r.begin() >= *l.rbegin())
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	solve();
	return 0;
}