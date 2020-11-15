#{ 
#Driver Code Starts
#Initial Template for Python 3


 # } Driver Code Ends



#User function Template for python3

mp = set()

from itertools import combinations_with_replacement, permutations
def findAll():
    arr = [1,2,3]
    for i in range(1,7):
        for j in combinations_with_replacement(arr, i):
            for k in permutations(j, i):
                mp.add(int("".join(map(str, k))))
    




#{ 
#Driver Code Starts.


if __name__ == '__main__':
    findAll()
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr=[int(x) for x in input().strip().split()]
        arr.sort()
        flag = 0
        for i in range(n):
            if arr[i] in mp:
                print(arr[i], end=" ")
                flag=1
        if(flag==0):
            print(-1)
        else:
            print()

#} Driver Code Ends