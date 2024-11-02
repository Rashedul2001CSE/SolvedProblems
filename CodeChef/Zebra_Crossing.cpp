#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    bool curr = s[0] - '0';
    for (int i = 1; i < n; i++)
    {
        if (s[i] != curr + '0')
        {
            cnt++;
            curr = !curr;
        }
    }
    if (cnt < k)
    {
        cout << "-1\n";
        return;
    }
    curr = s[0] - '0';
    if (k % 2)
        curr = !curr;
    for (int i = n - 1; i > 0; i--)
    {
        if (s[i] == curr + '0')
        {
            cout << i + 1 << "\n";
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
