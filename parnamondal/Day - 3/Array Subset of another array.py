# Time Complexity - O(min(A1,A2)
# Space Complexity - O(1)


def find (a,b,m,n):
    c=0
    for i in b:
        if i in a:
            c+=1
    if c==n:
        return "Yes"
    else:
        return "No"
    
    
for _ in range(int(input())):
    m,n=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    print (find(a,b,m,n))