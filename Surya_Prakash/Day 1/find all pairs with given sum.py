def getPairsCount(self, arr, n, k):
    # code here
    # arr.sort()
    dic = {}
    for i in arr:
        if dic.get(i, 0) == 0:
            dic[i] = 1
        else:
            dic[i] += 1
    ans = 0
    for i in arr:
        dic[i] -= 1
        if dic.get(k - i, 0) > 0:
            ans += dic[k - i]
    return ans