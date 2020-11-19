
# Python implementation 
# Example 
n=[-5, 7, -3, -4, 9, 10, -1, 11]

pos=[]
neg=[]
for i in n:
	if i<0:
		neg.append(i)
	if i>=0:
		pos.append(i)
i=0
while (i<len(pos)):
	print (pos[i],end= " ")
	i+=1 
j=0
while (j<len(neg)):
	print (neg[j],end=" ")
	j+=1 

# Time complexity - O(N)
# Space COmplexity - O(N)