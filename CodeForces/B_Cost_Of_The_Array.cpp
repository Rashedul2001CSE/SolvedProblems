#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (auto& it: vec) cin >> it;
    if (n == k){
        for (int i = 1,j=1; j < n; i++,j+=2){
            if (vec[j] != i) {
                cout << i <<"\n";
                return;
            }
        }
        cout << k/2 + 1 << "\n";

    }
    else{
        int s = n - k + 2;
            s = (s>n? n:s);
        if (count(vec.begin()+1, vec.begin()+s, 1) == s-1){
            cout << 2 << "\n";
        }
        else{
            cout << "1\n";
        }
    }
}

int main(){
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}