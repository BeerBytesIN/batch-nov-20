// https://leetcode.com/problems/binary-tree-preorder-traversal/

class Solution {
public:
    
    vector<int> ans;
    void fun(TreeNode* root){
        if(!root) return;
        ans.push_back(root->val);
        
        fun(root->left);
        
        fun(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
                fun(root);
        return ans;
    }
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        stack<TreeNode*> st;
        
        while(root || !st.empty()){
            
            if(root){
                ans.push_back(root->val);
                st.push(root);
                root=root->left;
            }
            else{
                root=st.top();
                st.pop();
                root=root->right;
            }
        }
        return ans;
    }
};
