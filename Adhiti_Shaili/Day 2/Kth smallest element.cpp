#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r)
{
    int i=l;
    for(int j=l;j<r;j++)
    {
        if(a[r]>=a[j])
        {
            swap(a[i],a[j]);
            i++;
        }
        
    }
    swap(a[i],a[r]);
    return i;


}

int kthSmallest(int arr[], int l, int r, int k)
{
    //code here
    int m=rand()%(r-l+1);
    swap(arr[l+m],arr[r]);
    int ind=partition(arr,l,r);
    if(ind-l+1==k)
    {
        return arr[ind];
    }
    if(ind-l+1>k)
    {
        return kthSmallest(arr,l,ind-1,k);
    }
    
    return kthSmallest(arr,ind+1,r,k-(ind-l+1));
    
    
}