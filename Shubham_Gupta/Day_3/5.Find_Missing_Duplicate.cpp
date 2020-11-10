#include <iostream>
using namespace std;
int *findTwoElement(int *nums, int n) {
         for (int i = 0; i < n; i++)
    {
        if (nums[i] == i + 1)
            continue;
        while (nums[i] != i + 1)
        {
            int j = nums[i] - 1;
            if (nums[j] == j + 1)
                break;
            swap(nums[i], nums[j]);
        }
    }
    int *ans=new int[2]();
    for (int i = 0; i < n; i++){
        if (nums[i] != i + 1){
            ans[0]=nums[i];
            ans[1]=i+1;
        }
    }
        return ans;
    }
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int *ans=findTwoElement(arr,n);
        return 0;
}