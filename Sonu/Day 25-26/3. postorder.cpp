class Solution {
public:
    
    vector<int> ans;
    void fun(TreeNode* root){
        if(!root) return;
        fun(root->left);
        
        fun(root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
                fun(root);
        return ans;
    }
};
