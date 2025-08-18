#include<bits/stdc++.h>
using namespace std;
int N = 1e6 + 10;
vector<int> vec(N, 0);
void calc(){
    vec[1] = 1;
    int cnt = 2;
    
    for (int i = 2; (1LL << i) <= 1e6; i++){
        long long till = (1LL << i);
        for (int j = (1LL<< (i-1)); j <= till; j++){
            vec[j] = cnt;
        }
        cnt++;
    }
   
}

void solve(){
    string str;
    cin >> str;
    map<char, vector<int>> mp;
    for (int i = 0; i < str.size(); i++){
        if (mp[str[i]].size() == 0){
            mp[str[i]].push_back(0);
        }
        mp[str[i]].push_back(i+1);
    }
    int minGap = str.size();
    for (auto it: mp){
        it.second.push_back(str.size()+1);
        int maxGap = 0;
        for (int i = 1; i < it.second.size(); i++){
            maxGap = max(maxGap,it.second[i]-it.second[i-1]-1);
        }
        minGap = min(minGap,maxGap);
    }

   
    cout << vec[minGap] << '\n';

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    calc();
    while(t--){
        solve();
    }
}