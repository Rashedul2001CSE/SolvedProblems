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
    vii a(3);
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    sort(all(a));
    reverse(all(a));
    bool flag = true;
    if (a[0] == 6)
    {
        if ((a[1] == 1 && a[2] == 1) || (a[1] == 3 && a[2] == 0))
        {
            flag = true;
        }
        else
            flag = false;
    }
    else if (a[0] == 4)
    {
        if ((a[1] == 4 && a[2] == 0) || (a[1] == 3 && a[2] == 1) || (a[1] == 2 && a[2] == 1))
            flag = true;
        else
            flag = false;
    }
    else if (a[0] == 3)
    {
        if ((a[1] == 3 && a[2] == 3))
            flag = true;
        else
            flag = false;
    }
    else if (a[0] == 2)
    {
        if (a[1] == 2 && a[2] == 2)
            flag = true;
        else
            flag = false;
    }
    else
        flag = false;
    if (flag)
    {
        cout << "perfectus\n";
    }
    else
        cout << "invalidum\n";
}
love
{
    Alamgir int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}