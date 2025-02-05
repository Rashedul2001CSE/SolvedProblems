#include <iostream>
#include <vector>
#include<cstring>
using namespace std;
typedef long long ll;
#define case(cc) cout << "Case " << cc << ": "

int n, arr[16][16], memo[16][1 << 16];

int getAns(int ind, int mask)
{
    if (ind == n)
        return 0;
    if (memo[ind][mask] != -1)
        return memo[ind][mask];
    int currAns = 0;
    for (int i = 0; i < n; i++)
    {
        if ((mask & (1 << i)) == 0)
        {
             currAns= max(currAns, arr[ind][i] + getAns(ind + 1, mask | (1 << i)));
        }
    }
    return memo[ind][mask] = currAns;
}

void solve(int cc)
{
    memset(memo, -1, sizeof(memo));
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    int ans = getAns(0, 0);
    case(cc) << ans << "\n";

}

int main()
{
    int tt, cc = 1;
    cin >> tt;
    ios::sync_with_stdio(false);cin.tie(nullptr),cout.tie(nullptr);

    while (tt--)
        solve(cc++);

    return 0;
}
