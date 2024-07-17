# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def delNodes(
        self, root: Optional[TreeNode], to_delete: List[int]) -> List[TreeNode]:
        result = set([root])
        toDelete = set(to_delete)

        def dfs(currNode):
            if not currNode:
                return None
            ret = currNode
            if currNode.val in toDelete:
                result.discard(currNode)
                ret = None
                if currNode.left:
                    result.add(currNode.left)
                if currNode.right:
                    result.add(currNode.right)
            currNode.left = dfs(currNode.left)
            currNode.right = dfs(currNode.right)
            return ret

        dfs(root)
        return list(result)
