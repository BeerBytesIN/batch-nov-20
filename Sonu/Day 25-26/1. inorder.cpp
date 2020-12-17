


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


