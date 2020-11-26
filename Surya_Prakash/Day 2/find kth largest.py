def findKthLargest(self, arr: List[int], k: int) -> int:
    '''
        res=0
        maxheap=[]
        for i in nums:
            heapq.heappush(maxheap,-i)
        for i in range(k):
            res=heapq.heappop(maxheap)
        return -res
    '''

    def heapify(arr, n, i):
        largest = i
        l = 2 * i + 1
        r = 2 * i + 2
        if l < n and arr[l] > arr[largest]: largest = l

        if r < n and arr[r] > arr[largest]: largest = r

        if largest != i:
            arr[i], arr[largest] = arr[largest], arr[i]
            heapify(arr, n, largest)

        return

    def build_max_heap(arr, n):
        for i in range(n // 2, -1, -1):
            heapify(arr, n, i)

    def heap_sort(arr, n):
        build_max_heap(arr, n)
        for i in range(n - 1, 0, -1):
            arr[i], arr[0] = arr[0], arr[i]
            heapify(arr, i, 0)

    def extract(arr, n):
        tmp = arr[0]
        arr[0] = arr[n - 1]
        n = n - 1
        heapify(arr, n, 0)
        return tmp

    n = len(arr)
    # heap_sort(arr,len(arr))
    # print(arr)
    build_max_heap(arr, n)
    for i in range(k):
        tmp = extract(arr, n - i)
    return (tmp)