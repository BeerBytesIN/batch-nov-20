class Solution {
public:
    int NumberOfBits(int val){
        int count=0;
        for(int i=0;i<32;i++){
            if((val>>i)%2)
                count++;        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        unordered_map<int,vector<int>> um;
        int n=arr.size();
        if(n<=1)
            return arr;
        for(int i=0;i<n;i++)
        {
            int number=NumberOfBits(arr[i]);
            um[number].push_back(arr[i]);
        }
        vector<int> ans;
        for(int i=0;i<31;i++){
            if(um.find(i)!=um.end()){
                sort(um[i].begin(),um[i].end());
                for(int j=0;j<um[i].size();j++)
                    ans.push_back(um[i][j]);
            }
        }
        return ans;
    }
};