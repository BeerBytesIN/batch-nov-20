# Time Complexity- O(N)
# Space Complexity - O(N)


#Complete this function
def majorityElement(a,n):
    #Your code here
    
    np=n//2
    ans=-1
    d={}
    for i in a:
        if i not in d:
            d[i]=1
        else:
            d[i]+=1
            
    for i in d.keys():
        if d[i]>np:
            ans=i
            
    return ans 
