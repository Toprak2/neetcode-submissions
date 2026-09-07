# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:

        if (p == None) != (q == None):
            return False

        if p == None and q == None:
            return True
        
        if(p.val != q.val):
            return False
        
        if (p.left == None) != (q.left == None):
            return False

        if (p.right == None) != (q.right == None):
            return False

        isLChildSame = self.isSameTree(p.left,q.left)

        isRChildSame = self.isSameTree(p.right,q.right)

        if isLChildSame and isRChildSame:
            return True

        return False