class Solution {
public:
    void util(vector<int>& arr,int l,int r, vector<vector<int>>& out){
        if(l==r){
            out.push_back(arr);
        }
        else{
            for(int i=l;i<=r;i++){
                swap(arr[i],arr[l]);
                util(arr,l+1,r,out);
                swap(arr[i],arr[l]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>> out;
        int n=arr.size();
        util(arr,0,n-1,out);
        return out;
    }
};