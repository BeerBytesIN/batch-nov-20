// https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1


// your task is tocomplete this function
// function should return an pointer to output array int*
// of size k*k
#define ppi pair<int, pair<int, int> > 
int *mergeKArrays(int arr[][N], int k)
{
    //code here
    priority_queue< ppi, vector<ppi>, greater<ppi> > minh;
    for(int i=0; i<k; i++)
        minh.push({arr[i][0], {i,0} });
        
    
    int* ans= new int[N*k];
    int i=0;
    while(minh.size()>0)
    {
        int d=minh.top().first;
        ans[i++]=d;
        
        int l=minh.top().second.first;
        int h=minh.top().second.second;
       
       cout<<d<<' '<<l<<' '<<h<<endl;
        minh.pop(); 
       
       
        if(h>=(N-1)) continue;
        else{
            minh.push({arr[l][h+1], {l, h+1}});
        }
       
    }
    return ans;
    
}
