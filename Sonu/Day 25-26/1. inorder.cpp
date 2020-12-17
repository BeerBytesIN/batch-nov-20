
// https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/

class Solution {
public:
    
    vector<int> ans;
    void fun(TreeNode* root){
        if(!root) return;
        fun(root->left);
        ans.push_back(root->val);
        fun(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        fun(root);
        return ans;
    }
};





public:
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        
        stack<TreeNode* > st;
        
        while(root || !st.empty()){
            
            while(root){
                st.push(root);
                root=root->left;
            }
            
            root=st.top();
            st.pop();
            
            ans.push_back(root->val);
            
            root=root->right;
        }
        return ans;
    }
};


