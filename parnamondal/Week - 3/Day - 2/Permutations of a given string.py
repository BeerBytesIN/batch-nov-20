#code

# Time Complexity - 0(N*N!)
# Space Complexity - O(N) 

from itertools import permutations
for _ in range(int(input())):
    s=str(input())
    s=sorted(s)
    for i in permutations(s):
        k=''.join(map(str,i))
        print (k,end=" ")
    print ()