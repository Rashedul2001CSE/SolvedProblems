/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution
{
public:
    int findHeight(TreeNode *curr, int level, vector<int> &nodeLevel, vector<int> &nodeHeight, vector<pair<int, int>> &top2Height)
    {
        if (!curr)
            return 0;
        int height = 1 + max(findHeight(curr->left, level + 1, nodeLevel, nodeHeight, top2Height), findHeight(curr->right, level + 1, nodeLevel, nodeHeight, top2Height));
        nodeLevel[curr->val] = level;
        nodeHeight[curr->val] = height;

        if (height > top2Height[level].first)
        {
            top2Height[level].second = top2Height[level].first;
            top2Height[level].first = height;
        }
        else if (height > top2Height[level].second)
        {
            top2Height[level].second = height;
        }

        return height;
    }
    vector<int> treeQueries(TreeNode *root, vector<int> &queries)
    {
        int n = 1e6;
        vector<int> nodeLevel(n, -1);
        vector<int> nodeHeight(n, 0);
        vector<pair<int, int>> top2Height(n, {0, 0});

        findHeight(root, 0, nodeLevel, nodeHeight, top2Height);
        vector<int> result;
        for (auto it : queries)
        {
            int level = nodeLevel[it];
            int height = nodeHeight[it];
            result.push_back((top2Height[level].first == height ? top2Height[level].second : top2Height[level].first) + level - 1);
        }
        return result;
    }
};