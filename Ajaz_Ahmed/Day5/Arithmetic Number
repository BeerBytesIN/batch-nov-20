test = int(input())
for i in range(test):
    nums = list(map(int, input().split()))
    if nums[-1] == 0:
        print(1)
        break
    if (nums[1] - 1) % nums[-1] == 0 and (nums[1] - 1) / nums[-1] > 0:
        print(1)
    else:
        print('It failed')
        print(0)
