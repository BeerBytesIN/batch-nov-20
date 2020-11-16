class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *out=new int[2];
        int missing,duplicate;
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])-1]<0)
            duplicate=abs(arr[i]);
            else
            arr[abs(arr[i])-1]*=-1;
        }
        for(int i=0;i<n;i++){
        if(arr[i]>0)
        {
           missing=i+1;
           break;
        }
        }
        out[0]=duplicate;
        out[1]=missing;
        return out;
    }
};