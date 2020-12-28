#include<bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    
    
    int helper(TreeNode* root,int& maxi)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int left=helper(root->left,maxi);
        int right=helper(root->right,maxi);
        
        
        int leftAns=root->val+left;
        int rightAns=root->val+right;
        int ans=max(max(leftAns,rightAns),root->val);
        if(maxi<ans)
        {
            maxi=ans;
            
        }
        if(maxi<root->val+left+right)
        {
            maxi=root->val+left+right;
        }
        return ans;
        
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        int ans=helper(root,maxi);
        if(maxi>ans)
        {
            return maxi;
        }
        else
        {
            return ans;
        }  
    }
};