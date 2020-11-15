class Solution:
    def moveNegativeNumbers(self, arr):
        i = 0
        j = len(arr) - 1
        while i < j:
            while arr[i] < 0 and i < j:
                i += 1
            while arr[j] >= 0 and i < j:
                j -= 1
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
            j -= 1
        return arr


# Test
print(Solution().moveNegativeNumbers([-12, 11, -13, -5, 6, -7, 5, -3, -6]))
