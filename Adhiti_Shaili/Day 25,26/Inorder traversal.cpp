#include <bits/stdc++.h>
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
 


//Method 1 : Recursion
class Solution {
public:
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)
        {
            return ans;
        }
        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);
        
        return ans;
        
    }
};

//Method 2 : Iterative
class Solution {
public:
    vector<int> v;
    vector<int> inorderTraversal(TreeNode* root) {
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
                while(currP->right!=NULL&&currP->right!=curr)
                {
                    currP=currP->right;
                }
                if(currP->right==NULL)
                {
                    currP->right=curr;
                    curr=curr->left;
                }
                else
                {
                    currP->right=NULL;
                    v.push_back(curr->val);
                    curr=curr->right;
                    
                }
            }
        }
        return v;
        
        
    }
};