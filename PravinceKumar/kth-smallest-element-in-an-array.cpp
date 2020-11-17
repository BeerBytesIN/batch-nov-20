int Solution::kthsmallest(const vector<int> &A, int B) {

    priority_queue<int> maxh;
    for(int i=0;i<A.size();i++)
    {
        maxh.push(A[i]);
        if(maxh.size()>B)
        {
            maxh.pop();
        }
    }
    return maxh.top();
}

