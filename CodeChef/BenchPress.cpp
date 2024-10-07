#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w, wr;
        cin >> n >> w >> wr;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        if (wr >= w)
        {
            cout << "YES\n";
            continue;
        }
        sort(vec.begin(), vec.end());
        long long int total = wr, prevW = vec[0];
        for (int i = 1; i < n; i++)
        {
            if (prevW == vec[i])
            {
                total += vec[i] * 2;
                prevW = vec[++i];
            }
            else
                prevW = vec[i];
        }
        if (total >= w)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
