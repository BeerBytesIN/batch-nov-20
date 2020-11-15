# Time Complexity - O(N)
# Space Complexity - O(1)

def findAll(a,n):
    vis=[1,2,3]
    '''n=int(input())
    a=list(int,input().split())'''
    flag=0
    for i in range (n):
        r=[int(j) for j in str(a[i])]
        if 1 in r or 2 in r or 3 in r:
            
            flag=1
            print (a[i],end=" ")
    if flag==0:
        print (-1)
    print ()
        