#include<iostream>
using namespace std;

int main()
   {
     int arr[]= {-12,11,-13,-5,6,-7,5,-3,-6};
     int len= sizeOf(arr)/sizeof(arr[0]);
     int i=0,j=len-1;

     while(i<j)
            {
             if(arr[i]>0  && arr[j]<0)
                 {
                  int temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
                  J--;
                 }
              i++;
            }  
         for(i=0;i<len;i++)
            cout<<arr[i]<<” ”;
    }
