#include <bits/stdc++.h>
using namespace std;
// Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL)
        {
            return NULL;
        }
        TreeNode* leftAns=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightAns=lowestCommonAncestor(root->right,p,q);
        
        if(root->val==p->val||root->val==q->val)
        {
            return root;
        }
        
        if(leftAns==NULL&&rightAns==NULL)
        {
            return NULL;
        }
        else if(leftAns==NULL&&rightAns!=NULL)
        {
            return rightAns;
        }
        else if(leftAns!=NULL&&rightAns==NULL)
        {
            return leftAns;
        }
        else
        {
            return root;
        }
        
        
    } 
};