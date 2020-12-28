# Time Complexity - O(NlogN)
# Space Complexity - O(1)

# Binary search 
def stable(posi,arr,cows):
	cond=1 
	star=arr[0]
	for i in range (1,len(arr)):
		if arr[i]-star>=posi:
			star=arr[i]
			cond+=1 
		if cond==cows:
			return 1 
	return 0


arr=list(map(int,input().split()))
n=int(input())
cows=int(input())
pos=0
arr.sort()
if cows>n:
	return 0
low,high=0,1000000
while (low<=high):
	mid=(low+high)//2
	ok = stable(mid,arr,cows)
	if ok==1:
		pos=max(pos,x)
		low=mid+1 
	else:
		high = mid -1
return pos