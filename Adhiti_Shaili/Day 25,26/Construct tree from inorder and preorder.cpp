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
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int pres,int pree,int ins,int ine)
    {
        if(pres>pree)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[pres]);
        int rootIndex;
        for(int i=ins;i<=ine;i++)
        {
            if(inorder[i]==root->val)
            {
                rootIndex=i;
                break;
            }           
        }
        
        int lins=ins;
        int line=rootIndex-1;
        int lpres=pres+1;
        int lpree=lpres+line-lins;
        int rins=rootIndex+1;
        int rine=ine;
        int rpres=lpree+1;
        int rpree=pree;
        root->left=helper(preorder,inorder,lpres,lpree,lins,line);
        root->right=helper(preorder,inorder,rpres,rpree,rins,rine);
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int prel=preorder.size();
      //  int inol=inorder.size();
        return helper(preorder,inorder,0,prel-1,0,prel-1);
        
    }
};