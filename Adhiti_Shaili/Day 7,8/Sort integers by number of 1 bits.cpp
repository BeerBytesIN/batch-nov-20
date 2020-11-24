class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int k=0;
        map<int,vector<int>> hash;
        for(int i=0;i<arr.size();i++)
        {
            int count=0;
            int temp=arr[i];
            while(temp>0)
            {
                int i=temp&1;
                temp=temp>>1;
                count+=i;
            }
            hash[count].push_back(arr[i]);
        }
        
        for(auto i=hash.begin();i!=hash.end();i++)
        {
            for(int j=0;j<i->second.size();j++)
            {
                arr[k++]=i->second[j];
            }
        }
        return arr;
    }
};