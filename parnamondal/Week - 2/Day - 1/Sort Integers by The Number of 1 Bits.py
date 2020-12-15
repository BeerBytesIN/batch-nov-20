# Time Complexity - O(nlogn)
# Space Complexity - O(n)


class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        n=len(arr)
        count=[]
        for i in arr:
            c=bin(i)[2:].count('1')
            count.append([c,i])
        count.sort()
        #print (count)
        n=[]
        for i in count:
            n.append(i[1])
        return n