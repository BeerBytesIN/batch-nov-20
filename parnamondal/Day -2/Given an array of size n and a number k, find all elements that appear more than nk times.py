# TIME COMPLEXITY - O(N)
# SPACE cOMPLEXITY - O(N)


arr = [3, 1, 2, 2, 1, 2, 3, 3] 

n=len(arr)
# Edge cases
if n==0:
    print (0)
k=4
times= n//k 
d={}
for i in arr:
    if i not in d:
        d[i]=1 
    else:
        d[i]+=1 
count=0
for i in d:
    if d[i]>times:
        count+=1 
print (count)


