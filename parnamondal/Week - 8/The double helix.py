# Time Complexity : O(N)
# Space Complexity : O(N)

first=list(map(int,input().split()))
second=list(map(int,input().split()))
m,n=first[0],second[0]
first=first[1:]
second=second[1:]
f,s,ans=[],[],0
if m<n:
    first,second=second,first
    m,n=n,m
posa,posb,g=0,0,0
# We are assuming the first as of greater length
for i in range (m):
    if first[i] in second :  # intersection point 
        g=1
        j=second.index(first[i])
        f.append([i,sum(first[posa:i])])
        posa=i+1
        s.append([j,sum(second[posb:j])])
        posb=j+1
if g==1:
    u=f[-1][0]
    if u+1<m:
        f.append([u+1,sum(first[u+1:])])
    yt=s[-1][0]
    if yt+1<n:
        s.append([yt+1,sum(second[yt+1:])])
    # first part is done 
    for i in range (len(f)-1):
        inda,sua=f[i]
        indb,sub=s[i]
        if sua>=sub:
            ans+=sua+first[inda]
        else:
            ans+=sub+second[indb]
    ans+=max(f[-1][1],s[-1][1])
    print (ans)
    


else:
    print (max(sum(first),sum(second)))














    