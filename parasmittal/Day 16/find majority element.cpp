int majorityElement(int arr[], int size)
{
    
    // your code here
    int candidate=0;
    for(int i=0;i<32;i++){
        int val=1<<i;
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[j] & val)
                count++;
        }
        if(count>size/2)
            candidate|=val;
    }
    int count=0;
    for(int i=0;i<size;i++)
        if(arr[i]==candidate)
        count++;
    if(count>size/2)
        return candidate;
    return -1;
    
}