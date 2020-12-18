# Time Complexity - 0(N)
# Space Complexity - O(1)

for _ in range (int(input())):
    s=str(input())
    c,m='',0
    vis=set()
    n=len(s)
    for i in s:
        if i not in c:
            #vis.add(i)
            c+=i
        else:
            ind=c.index(i)
            c=c[ind+1:]
            #c=''
            c+=i
        m=max(m,len(c))
    print(m)