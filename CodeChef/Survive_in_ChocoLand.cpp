#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, s;
        cin >> n >> k >> s;
        if (n < k or (s >= 7 and n * 6 < 7 * k))
        {
            cout << -1 << "\n";
            continue;
        }
        int totalNeed = s * k;
        int current = n, cnt = 0;
        while (totalNeed > 0)
        {
            if (current < k)
            {
                cnt++;
                current += n;
            }

            totalNeed -= k;
            current -= k;
        }
        cout << cnt + 1 << "\n";
    }
}
