# Time Complexity- O(N)
# Space Complexity - O(N)

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: TreeNode) -> List[List[int]]:
        if root==None:
            return 
        q = []
        q.append(root)
        ans = []
        l = 1
        
        while len(q)>0:
            level_size = len(q)
            
            ##### put all the elements at the current level in the ans list
            li = []
            if l%2 == 0:#if level is even then insert at front
                i = 0
                while i <level_size:
                    li.insert(0,q[i].val)
                    i += 1
            else:
                for i in range(level_size):
                    li.append(q[i].val)
            
            ans.append(li)
            
            ## push both the childrens of the elements at the current level in the queue.
            j = 0
            while j<level_size:
                temp = q.pop(0)
                if temp.left!=None:
                    q.append(temp.left)
                if temp.right!=None:
                    q.append(temp.right)
                j += 1
            l += 1
        return ans
