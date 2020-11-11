def search(self, nums: List[int], t: int) -> int:
    n = len(nums)

    # find peak
    l = -1
    h = n
    while h - l > 1:
        mid = (l + h) // 2
        if nums[mid] > nums[-1]:
            l = mid
        else:
            h = mid
    peak = h
    print(nums[peak], nums[l])

    # setting ends for searching target
    # if nums[peak]==t:return peak
    if t <= nums[-1]:
        l = peak
        h = n - 1
    else:
        l = 0
        h = peak - 1
    '''
    while l<=h:
        mid=(l+h)//2
        if nums[mid]==t:return mid
        elif t>nums[mid]:
            l=mid+1
        else:
            h=mid-1
    return -1
    '''

    l -= 1
    while h - l > 1:
        mid = (l + h) // 2
        if t > nums[mid]:
            l = mid
        else:
            h = mid
    return h if nums[h] == t else -1