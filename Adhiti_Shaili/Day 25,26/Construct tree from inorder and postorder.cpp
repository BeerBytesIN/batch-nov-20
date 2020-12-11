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
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder,int ins,int ine,int pos, int poe, unordered_map<int,int>& hash)
    {
        if(ins>ine)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(postorder[poe]);
        int rootIndex=hash[postorder[poe]];
        
        int LinS=ins;
        int LinE=rootIndex-1;
        int LpoS=pos;
        int LpoE=LpoS+LinE-LinS;
        
        int RinS=rootIndex+1;
        int RinE=ine;
        int Rpos=LpoE+1;
        int RpoE=poe-1;
        root->left=helper(inorder,postorder,LinS,LinE,LpoS,LpoE,hash);
        root->right=helper(inorder,postorder,RinS,RinE,Rpos,RpoE,hash);
        return root;
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> hash;
        for(int i=0;i<inorder.size();i++)
        {
            hash[inorder[i]]=i;
        }
        return helper(inorder,postorder,0,inorder.size()-1,0,postorder.size()-1,hash);
        
        
    }
};