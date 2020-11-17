 #include <iostream>

using namespace std;


int main()
{
  int arr[]={3,0,0,2,0,4};
  int frst=arr[0],sec=arr[0];
  int len=sizeOf(arr)/sizeOf(arr[0]);

   for(int i=1;i<len;i++)
     {
         if(arr[i]>frst)
               {
                        sec=frst;
                        frst=arr[i];
                }
          if(arr[i]>sec && arr[i]!=frst)
             {
                 sec=arr[i];
              }
         }
   int sum=0;
  
     for(int i=0;i<len;i++)
        {
            if(arr[i]<sec)
                  sum+=(sec-arr[i]);
         }
   cout<<sum<<” ”;
} 
