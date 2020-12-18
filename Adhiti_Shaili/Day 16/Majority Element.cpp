#include<bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{
    int count=1,val=a[0];
    for(int i=1;i<size;i++)
    {
        if(a[i]==val)
        {
            count++;
        }
        else if(count==1)
        {
            val=a[i];
            count=1;
        }
        else
        {
            count--;
        }
    }
    count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==val)
        {
            count++;
        }
    }
    if(count>size/2)
    {
        return val;
    }
    return -1;
    
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}