// https://codeforces.com/problemset/problem/1904/C
// DT aug 19,25 5.45 AM
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if (k >= 3){
        cout << "0\n";
        return ;
    }
    sort(begin(a), end(a));
    long long minValue = a[0];
    for (int i = 1; i < n; i++){
        minValue = min(minValue, a[i] - a[i-1]);
    }
    if ( k == 1){
        cout << minValue << '\n';
        return ;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            long long value = a[i] - a[j];
            int idx = lower_bound(begin(a),end(a), value) - a.begin();
            if (idx < n){
                minValue = min(minValue,a[idx] - value);
            }
            if(idx > 0){
                minValue = min(minValue, value - a[idx-1]);
            }
        }
    }
    cout << minValue << '\n';


}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
