from collections import Counter


class Solution:
    def secFrequent(self, arr, n):
        a = Counter(arr).most_common()
        m = a[0][1]
        for i in range(len(a)):
            if a[i][1] != m:
                return a[i][0]
        return -1


# Test
arr = ['aaa', 'bbb', 'ccc', 'bbb', 'aaa', 'aaa']
print(Solution().secFrequent(arr, len(arr)))
