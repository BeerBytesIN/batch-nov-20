# Time Complexity - 0(N)
# Space Complexity - O(1)

def spiral(si,sj,r,c):
    for i in range (sj,c+1):
        yield si,i
    for i in range (si+1,r+1):
        yield i,c
    if si<r and sj<c:
        for i in range (c-1,sj-1,-1):
            yield r,i
        for i in range (r-1,si,-1):
            yield i,sj

    
    
for _ in range(int(input())):
    row,col=map(int,input().split())
    mat=list(map(int,input().split()))
    c=0
    a=[]
    for i in range (row):
        l=[]
        for j in range (col):
            l.append(mat[c])
            c+=1
        a.append(l)
    #print (a)
    ans=[]
    si,sj=0,0
    row-=1
    col-=1
    while (si<=row and sj<=col):
        for i,j in spiral (si,sj,row,col):
            ans.append(a[i][j])
        #    print(a,end=" ")
            
            
        si+=1
        sj+=1
        row-=1
        col-=1
    print(*ans)
        
            