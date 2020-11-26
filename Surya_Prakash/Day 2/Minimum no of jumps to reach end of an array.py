def jump(self, a: List[int]) -> int:
    jump = a[0]
    n = len(a)
    m = a[0]
    res = 1
    if n == 1:
        return 0
    for i in range(1, n):
        print(i, m, jump, res)
        if i > jump:
            res += 1
            jump = m
        m = max(m, i + a[i])
    return res