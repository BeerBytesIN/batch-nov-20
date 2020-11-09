#include <iostream>
using namespace std;
// Approach 1
void merge(int arr1[], int arr2[], int n, int m) 
{ 
     for(int i=m-1;i>=0;i--){
         int last=arr1[n-1];
         int j;
         for(j=n-2;j>=0 && arr1[j]>arr2[i];j--) 
            arr1[j+1]=arr1[j];
            
         if(j!=n-2 || last>arr2[i]){
             arr1[j+1]=arr2[i];
             arr2[i]=last;
         }
     }
     return ;
} 
// Approach 2: GAP Algorithm 
// T.C.= log(n)*n
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}
void merge(int arr1[], int arr2[], int n, int m) 
{ 
     int gap=(n+m) ;
     int i,j;
     for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)){
         for( i=0;i+gap<n;i++)
          if(arr1[i]>arr1[i+gap]) swap(arr1[i],arr1[i+gap]);
           
         j=gap>n ? gap-n : 0;

         for(;i<n &&j<m ;i++,j++)
         if(arr1[i]>arr2[j]) swap(arr1[i],arr2[j]);
         
         if(j<m){
             for( j=0;j+gap<m;j++)
             if(arr2[j]>arr2[j+gap]) swap(arr2[j],arr2[j+gap]);
         }
         
     }
     
     return ;
} 

int main()
{
    int n=4,m=5;
    int a[n]={1,3,5,7};
    int b[m]={2,4,6,8,10};
    merge(a,b,n,m);
    return 0;
}