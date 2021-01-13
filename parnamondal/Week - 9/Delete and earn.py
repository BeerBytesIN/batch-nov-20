# Time Complexity - 0(NlogN)
# Space Complexity - O(N)

class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        if not nums:
            return 0
        counter = collections.Counter(nums)  # hashmap type of
        ans = 0
        keys = sorted(list(counter.keys()))   # dictionary keys sorted (according to their values) and store in list
        n = len(keys)
        F = [0, counter[keys[0]] * keys[0]]
        print (counter)
        print (keys)
        print (F)
        for i in range(1, n):
            if keys[i] > keys[i - 1] + 1:
                F = [F[1], F[1] + counter[keys[i]] * keys[i]]

            else:
                F = [F[1], max(F[1], F[0] + counter[keys[i]] * keys[i])]
        return F[1]
        