def mySqrt(self, x: int) -> int:
    if x == 0:
        return (0)
    if x == 1:
        return (1)
    l = 0
    r = x
    while l <= r:
        mid = (l + r) // 2
        if mid > x / mid:
            r = mid - 1
        else:
            if mid + 1 > x / (mid + 1):
                return (mid)
            l = mid + 1
