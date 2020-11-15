class Solution:
    def merge(self, arr1, arr2, n, m):
        i = 0
        j = 0
        totalLength = len(arr1) + len(arr2)
        while i < len(arr1) and j < len(arr2):
            if arr1[i] <= arr2[j]:
                i += 1
            else:
                arr1.insert(i, arr2[j])
                i += 1
                j += 1
        arr1.extend(arr2[j:])
        while arr2:
            arr2.pop()
        return arr1+arr2


# Merge two sorted arrays
print(Solution().merge([1, 3, 5, 7], [0, 2, 6, 8, 9], 4, 5))
