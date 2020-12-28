#include<iostream>
using namespace std;

int main()
{
    int arr[]={-4,2,5,-7,10,-10};
    int n=6;

    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
                swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<< " ";
}
