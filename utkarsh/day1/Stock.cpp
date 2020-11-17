#include <iostream>
using namespace std;
   
   int calculate(int arr[],int j,int n)
   {
       int max=0;
         for(int i=j;i<n;i++)
            if(arr[i]>max)
              max=arr[i];

        return max;      
   }

int main() {
      int arr[]={7,6,4,3,1};
        int max_curr=0,max_till=0,final=0;
       int n=5;
        for(int i=0;i<n;i++)
        {
            max_curr=arr[i];
             max_till=calculate(arr,i+1,n);

             if(max_till>max_curr)
                 if(max_till-max_curr >final)
                     final=max_till-max_curr;

              //cout<<final;       

        }
         cout<<final;  
}


