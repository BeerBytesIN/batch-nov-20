def maxDistance(self, position: List[int], m: int) -> int:
    n = len(position)
    position.sort()

    def count(d):
        ans, curr = 1, position[0]
        for i in range(1, n):
            if position[i] - curr >= d:
                ans += 1
                curr = position[i]
        return ans

    l = 0
    h = position[-1] - position[0] + 1
    while h - l > 1:
        mid = (l + h) // 2
        cnt = count(mid)
        if cnt >= m:
            l = mid
        else:
            h = mid
    return l