#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nline "\n";

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
bool multiTest = true;
void solve(int testCase)
{
    ll n;
    cin >> n;
    ll sum = 1;
    ll lim = sqrt(n);
    if (n == 1)
    {
        cout << "0\n";
        return;
    }
    for (int i = 2; i <= lim; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    cout << sum << nline;
}
int main()
{
    fastio();

    int testCase = 1;
    int T{1};
    if (multiTest)
        cin >> T;
    while (T--)
    {
        solve(testCase++);
    }
}
