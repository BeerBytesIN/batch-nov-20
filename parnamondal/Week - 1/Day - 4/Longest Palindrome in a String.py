# Time Complexity - O(N*N)
# Space Complexity - O(1)

def find (s):
    n=len(s)
    if s==s[::-1]:
        return s
    if len(set(s))==n:
        return s[0]
    res=""
    exist=0
    for i in range (n):
        for j in range (i+1,n):
            t=s[i:j+1]
            if t ==t[::-1] and len(t)>exist:
                exist=len(t)
                res=t
    return res if res!="" else s[0]
for _ in range (int(input())):
    s=str(input())
    res=find(s)
    print (res)