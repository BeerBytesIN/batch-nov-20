# Time Complexity - O(N)
# Space Complexity - O(1)


a=list(map(int,input().split()))
n=len(a)
if n==0:
	return -1
if n<=1:
	return 0
jumps,i,nr,cr=0,0,0,0
while (i<=cr):
	if i==n-1:
		return jumps
	nr=max(nr,i+a[i])
	if i==cr:
		jumps+=1 
		cr=nr
	i+=1
return -1