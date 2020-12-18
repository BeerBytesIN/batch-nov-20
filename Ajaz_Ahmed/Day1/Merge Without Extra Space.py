class Solution:
    def merge(self, arr1, arr2, n, m): 
        for i in range(n):
            if arr1[i] > min(arr2):
                temp = arr1[i]
                index = arr2.index(min(arr2))
                arr1[i] = arr2[index]
                arr2[index] = temp
        
        arr2.sort()    

