# Using Boyer Moore Algorithm and bad character heuristic

# Time Complexity- O(MN)
# Space Complexity - O(1)


alpha=[-1]*256
pat,txt="ABC","ABAAABCD"
m,n=len(pat),len(txt)
for i in range(m):
    alpha[ord(pat[i])]=i 
s=0
while(s<=n-m):
    j=m-1 
    while(j>=0) and pat[j]==txt[s+j]:
        j-=1 
    if j<0:
        print ("Found at pos",s)
        s+=m-alpha[ord(txt[s+m])] if s+m<n else 1 
    else:
        s+=max(1,j-alpha[ord(txt[s+j])])
    