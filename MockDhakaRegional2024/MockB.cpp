#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;
#define print(flag) (flag) ? cout << "YES\n" : cout << "NO\n";
#define all(x) x.begin(), x.end()
#define nl cout << endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int, int>
#define out(x) cout << x << '\n';
#define out2(x, y) cout << x << " " << y << '\n';
#define vii vector<int>
#define vll vector<ll>
#define dqii deque<int>
#define dqll deque<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    char a, b;
    cin >> a >> b;
    int d = b - a - 1;
    int c = a - 32, cc = b - 32;
    int prevA = a - 33, prevB = b - 33;
    vector<pii> v;
    for (int i = 1; i <= 94; i++)
    {
        if (c % i == cc % i)
        {
            for (int j = 1; j <= 94; j++)
            {
                if (i * j >= 94)
                {
                    v.pb({i, j});
                    break;
                }
            }
        }
    }
    for (auto it : v)
    {
        cout << it.first << " " << it.second << endl;
    }
}
love
{
    Alamgir int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
        cout << endl;
    }
    return 0;
}