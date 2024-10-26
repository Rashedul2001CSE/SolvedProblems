#include <bits/stdc++.h>
using namespace std;

class FenwickTree
{
    vector<int> tree;

public:
    FenwickTree(int size) : tree(size + 1, 0) {}

    void update(int index, int value)
    {
        while (index < tree.size())
        {
            tree[index] += value;
            index += index & -index;
        }
    }

    int query(int index) const
    {
        int sum = 0;
        while (index > 0)
        {
            sum += tree[index];
            index -= index & -index;
        }
        return sum;
    }

    int queryRange(int index) const
    {
        return query(tree.size() - 1) - query(index);
    }
};

vector<int> countLargerElements(const vector<int> &arr)
{
    int n = arr.size();
    vector<int> result(n);
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    unordered_map<int, int> rank;
    for (int i = 0; i < n; ++i)
    {
        if (rank.find(sortedArr[i]) == rank.end())
        { 
            rank[sortedArr[i]] = i + 1;
        }
    }

    FenwickTree fenwickTree(n);
    for (int i = n - 1; i >= 0; --i)
    {
        int r = rank[arr[i]];
        result[i] = fenwickTree.queryRange(r);
        fenwickTree.update(r, 1);
    }
    return result;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &it : vec)
    {
        cin >> it;
    }

    vector<int> result = countLargerElements(vec);
    int ans = INT_MAX, i = 0;
    for (auto it : result)
    {
        ans = min(ans, i + it);
        i++;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
