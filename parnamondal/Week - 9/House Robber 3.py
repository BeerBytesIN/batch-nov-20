# Time Complexity - O(N*N)
# Space Complexity - O(N*N)

#import defaultdict

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rob(self, root: TreeNode) -> int:
        if not root:
            return 0
        index=0
        value=[]
        dq=deque([(root,index)])
        graph=defaultdict(list)
        def bfs (root):
            nonlocal index
            while dq:
                size=len(dq)
                for i in range (size):
                    node,indexp=dq.popleft()
                    value.append(node.val)
                    if node.left:
                        index+=1
                        graph[indexp].append(index)
                        dq.append((node.left,index))
                    if node.right:
                        index+=1
                        graph[indexp].append(index)
                        dq.append((node.right,index))
        bfs(root)
        lev=index+1
        dp_rob=[0]*lev
        dpnotrub=[0]*lev
        for i in range (index,-1,-1):
            if not graph[i]:
                dp_rob[i]=value[i]
                dpnotrub[i]=0
            else:
                dp_rob[i]=value[i]+sum(dpnotrub[child] for child in graph[i])
                dpnotrub[i]=sum(max(dpnotrub[child],dp_rob[child]) for child in graph[i])
        return max(dp_rob[0],dpnotrub[0])
        
        