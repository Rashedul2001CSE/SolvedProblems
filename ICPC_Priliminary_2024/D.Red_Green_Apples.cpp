#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;
#define all(x) x.begin(), x.end()
#define nl cout << endl;
#define endl '\n'
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
const int MOD = 998244353;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll mod_pow(ll base, ll exp, ll mod)
{
    ll result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
ll mod_inv(ll x, ll mod)
{
    return mod_pow(x, mod - 2, mod);
}
vector<ll> solution(ll N, const vector<ll> &a, const vector<ll> &b)
{
    ll total_weight_sum = 0;
    for (int i = 0; i < N; ++i)
    {
        total_weight_sum = (total_weight_sum + a[i] + b[i]) % MOD;
    }

    ll Q = 2 * N;
    ll Q_inv = mod_inv(Q, MOD);

    vector<ll> results;
    for (int K = 1; K <= N; ++K)
    {
        ll P = K * total_weight_sum % MOD;
        ll expected_value_mod = (P * Q_inv) % MOD;
        results.push_back(expected_value_mod);
    }

    return results;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<ll> ans = solution(n, a, b);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
        if (i != n - 1)
            cout << " ";
    }
    nl;
}

int main()
{
    Alamgir int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}