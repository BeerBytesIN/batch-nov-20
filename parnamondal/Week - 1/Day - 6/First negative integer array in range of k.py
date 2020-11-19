# Time Complexity - O(N)
# Space Complexity -O(k)

from collections import deque
for _ in range (int(input())):
    n=int(input())
    arr = list(map(int,input().split()))
    k = int(input())
    d=deque()
    for i in range (k):
        if arr[i]<0:
            d.append(i)
    for j in range (k,n):
        if not d:
            print (0,end=" ")
        else:
            print (arr[d[0]],end=" ")
        while d and d[0]<=(j-k):
            d.popleft()
        if arr[j]<0:
            d.append(j)
    if not d:
        print (0,end=" ")
    else:
        print (arr[d[0]],end=" ")
    print ()