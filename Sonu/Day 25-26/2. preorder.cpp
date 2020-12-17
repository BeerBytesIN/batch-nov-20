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
