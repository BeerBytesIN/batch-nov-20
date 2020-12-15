class Solution {
public:
    struct tree{
        int val;
        int dup;
        int count;
        tree* left;
        tree* right;
        tree(int v){
            val=v;
            count=0;
            dup=0;
            left=NULL;
            right=NULL;
        }
    };
    tree* insert(tree* root,int val){
        if(!root){
            return new tree(val);
        }
        if(root->val==val){
            root->dup++;
            return root;
            
        }
       else if(root->val>val){
           root->count++;
            root->left=insert(root->left,val);
        }
        else{
            root->right=insert(root->right,val);
        }
        
        return root;
        
    }
    int search(tree* root,int val){
        if(!root){
            return 0;
        }
        if(root->val==val){
            return root->count;
        }
        if(root->val<val){
            return root->dup+root->count+1+search(root->right,val);
        }
        return search(root->left,val);
    }
    
    vector<int> countSmaller(vector<int>& nums) {
        tree* root=NULL;
        int n=nums.size();
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
        root=    insert(root,nums[i]);
            ans.push_back(search(root,nums[i]));
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};