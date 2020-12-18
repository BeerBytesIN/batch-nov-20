
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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> v;
        if(root==NULL)
        {
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()!=0)
        {
            int count=q.size();
            while(count>0)
            {
                TreeNode* temp=q.front();
                q.pop();
                count--;
                if(count==0)
                {
                    v.push_back(temp->val);
                }
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
            }
        }
        return v;
        
    }
};