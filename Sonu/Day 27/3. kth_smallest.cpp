//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#

int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    priority_queue<int> maxh;
    
    for(int i=l ; i<=r; i++)
    {
        maxh.push(arr[i]);
        
        if(maxh.size()>k)
            maxh.pop();
            
        
    }
    return maxh.top();
}
