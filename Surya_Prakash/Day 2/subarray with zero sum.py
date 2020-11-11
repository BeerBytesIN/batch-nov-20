def sol():
    n = int(input())
    a = list(map(int, input().split()))
    dic = {}
    curr = 0
    ans = False
    for i in a:
        curr += i
        if curr == 0 or i == 0: ans = True
        if dic.get(curr, False) == False:
            dic[curr] = True
        else:
            ans = True

    print('Yes' if ans else 'No')