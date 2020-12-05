# Time Complexity - O(1N)
# Space Complexity - O(N)

def reverseQueue(q):
    #add code here
    n=q.qsize()
    
    left,right=0,n//2
    sta=[]
    while (left<n):
        x=q.get()
        sta.append(x)
        left+=1
    k=len(sta)-1
    while (k>=0):
        q.put(sta[k])
        k-=1
    return q
        