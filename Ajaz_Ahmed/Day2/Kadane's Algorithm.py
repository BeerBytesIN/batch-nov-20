def maxSubArray(a,size):
    ##Your code here
    greatest = float('-inf')
    n_sum = 0
    for i in range(size):
        n_sum += a[i]
        if n_sum < a[i]:
            n_sum = a[i]
            
        if n_sum > greatest:
            greatest = n_sum
        print(n_sum, a[i], greatest)
    return greatest 
