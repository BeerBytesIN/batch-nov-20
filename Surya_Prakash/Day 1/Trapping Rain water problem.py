def trap(self, h: List[int]) -> int:
    if not h: return 0
    n = len(h)
    left = [0] * n
    right = [0] * n

    left[0] = h[0]
    for i in range(1, n):
        left[i] = max(h[i], left[i - 1])

    right[n - 1] = h[n - 1]
    for i in range(n - 2, -1, -1):
        right[i] = max(h[i], right[i + 1])

    ans = 0
    for i in range(1, n - 1):
        ans += min(left[i], right[i]) - h[i]

    return ans