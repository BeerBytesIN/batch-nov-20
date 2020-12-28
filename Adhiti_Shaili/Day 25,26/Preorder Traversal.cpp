
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
    vector<int> v;
    vector<int> preorderTraversal(TreeNode* root) {
        
        TreeNode* curr=root;
        while(curr!=NULL)
        {
            if(curr->left==NULL)
            {
                v.push_back(curr->val);
                curr=curr->right;
            }
            else
            {
                TreeNode* currP=curr->left;
                // v.push_back(curr->val);
                while(currP->right!=NULL&&currP->right!=curr)
                {
                    currP=currP->right;
                }
                if(currP->right==NULL)
                {
                    currP->right=curr;
                    v.push_back(curr->val);//
                    curr=curr->left;
                    //
                }
                else
                {
                    currP->right=NULL;
                    curr=curr->right;
                }
            }
        }
        return v;
    }
};