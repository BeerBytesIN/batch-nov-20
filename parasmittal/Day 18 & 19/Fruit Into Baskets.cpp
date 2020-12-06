class Solution {
public:
    int totalFruit(vector<int>& tree) {
     int start=0;
        int end=0;
        unordered_map<int,int> um;
        int n=tree.size();
        int ans=0;
        while(end<n){
            um[tree[end]]++;
            end++;
            while(um.size()>2){
                um[tree[start]]--;
                   if(um[tree[start]]==0)
                       um.erase(tree[start]);
                start++;
            }
            ans=max(ans,end-start);
        }
        return ans;
    }
};