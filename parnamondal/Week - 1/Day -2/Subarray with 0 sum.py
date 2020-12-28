# Time Complexity - O(N)
# Space COmplexity - O(N)

#code
def find(n,a):
    sum,count=0,0
    dp={0:1}
    for i in range(n):
        sum+=a[i]
        if sum in dp:
            count+=dp[sum]
        if sum in dp:
            dp[sum]+=1
        else:
            dp[sum]=1
    return "Yes" if count>0 else "No"
for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    print (find(n,a))