class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        if(n<=1)
        return "";
        unordered_map<string,int> um;
        for(int i=0;i<n;i++)
             um[arr[i]]++;
        int count_first=0,count_second=0;
        string first="",second="";
        for(auto iterator:um){
            if(iterator.second>count_first){
                second=first;
                count_second=count_first;
                count_first=iterator.second;
                first=iterator.first;
                continue;
            }
            if(iterator.second==count_first)
            continue;
            if(iterator.second>count_second){
                count_second=iterator.second;
                second=iterator.first;
            }
        }
        return second;
    }
};