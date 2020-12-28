class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> ans;
        if(n<k)
            return ans;
        deque<int> q;
        for(int i=0;i<k;i++){
            while(!q.empty() && arr[q.front()]<arr[i])
                q.pop_front();
             while(!q.empty() && arr[q.back()]<arr[i])
                q.pop_back();
            q.push_back(i);
        }
        for(int i=k;i<n;i++){
            ans.push_back(arr[q.front()]);
            while(!q.empty() && (arr[q.front()]<arr[i] || i-q.front()>=k ))
                q.pop_front();
            while(!q.empty() && arr[q.back()]<arr[i])
                q.pop_back();
            q.push_back(i);
        }
         ans.push_back(arr[q.front()]);
        return ans;
        
    }
};