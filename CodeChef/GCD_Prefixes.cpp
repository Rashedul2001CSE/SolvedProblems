#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &it : vec)
    {
        cin >> it;
    }
    for (int i = 1; i < n; i++)
    {
        if (vec[i - 1] % vec[i])
        {
            cout << -1 << "\n";
            return;
        }
    }
    for (auto it : vec)
    {
        cout << it << ' ';
    }
    cout << "\n";
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
        solve();
}
