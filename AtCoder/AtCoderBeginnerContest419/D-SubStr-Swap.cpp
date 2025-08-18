#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>> n >> k;
    string str1, str2;
    cin >> str1 >> str2;
    vector<int> pos(n+2);
    while(k--){
        int x,y;
        cin >> x >> y;
        pos[x] += 1;
        pos[y+1] -= 1;
        
        
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        cnt += pos[i];
        pos[i] = cnt;
        if (cnt & 1) {
            str1[i-1] = str2[i-1];
        }
    }
    cout << str1 << "\n";
    return 0;
}