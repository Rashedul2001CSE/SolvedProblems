#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long k;
    cin >> k;
    long long num = 9, skipped = 0;
    for (int len = 1; true; len++){
        if (k > len * num){
            k -= len * num;
            skipped += num;
        }
        else{
            long long more = (k-1) / len;
            skipped += more;
            k -= more*len;
            num = skipped + 1;
            cout << to_string(num)[k-1] << '\n';
            return ;
        }
        num *= 10;
        
    }
    

}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}