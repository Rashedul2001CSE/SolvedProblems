# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getDirections(
        self, root: Optional[TreeNode], startValue: int, destValue: int
    ) -> str:
        def dfs(root, path, target):
            if not root:
                return ""
            if root.val == target:
                return path
            path.append("L")
            res = dfs(root.left, path, target)
            if res:
                return res
            path.pop()
            path.append("R")
            res = dfs(root.right, path, target)
            if res:
                return res
            path.pop()
            return ""

        startPath = dfs(root, [], startValue)
        destPath = dfs(root, [], destValue)
        i = 0
        while i < min(len(startPath), len(destPath)) and startPath[i] == destPath[i]:
            i += 1
        return "".join(["U"] * len(startPath[i:]) + destPath[i:])
