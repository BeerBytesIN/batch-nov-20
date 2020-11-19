//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
#include<iostream>
#include<algorithm>
using namespace std;
// lomuto partition
// void rearrange(int arr[],int n){
//     int i=-1,j=0;
//     while(j<n){
//         if(arr[j]<0){
//             ++i;
//             swap(arr[i],arr[j]);
//         }
//         j++;
//     }
// }
//Hoares partition - 2 pointer approach
void rearrange(int arr[],int n){
    int i=-1,j=n;
    while(true){
        do{
            i++;
        }while(arr[i]<0);
        do{
            j--;
        }while(arr[j]>0 or arr[j]==0);
        if(i>=j) return;
        swap(arr[i],arr[j]);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,-3,5,-2,8,-6,-9,10};
    int n=sizeof(arr)/sizeof(int);
    print(arr,n);
    rearrange(arr,n);
    print(arr,n);
    return 0;
}