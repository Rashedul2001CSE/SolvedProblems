#include <bits/stdc++.h>
using namespace std;

void solve()
{
    map<string, pair<int, int>> mm;

    for (int i = 0; i < 12; i++)
    {
        string name1, name2, gar;
        int value1, value2;
        cin >> name1 >> value1 >> gar >> value2 >> name2;

        if (value1 > value2)
        {
            mm[name1].first += 3;
        }
        else if (value1 < value2)
        {
            mm[name2].first += 3;
        }
        else
        {
            mm[name1].first++;
            mm[name2].first++;
        }
        mm[name1].second += value1 - value2;
        mm[name2].second += value2 - value1;
    }
    set<pair<pair<int, int>, string>, greater<>> ss;
    for (auto it : mm)
    {
        ss.insert(make_pair(make_pair(it.second.first, it.second.second), it.first));
    }
    if (ss.size() >= 2)
    {
        auto it = ss.begin();
        cout << (*it).second << " " << (*(++it)).second << '\n';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
